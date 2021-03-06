0038:GameScene.ccbi:000000543:1:14=526cb0c2:16=526cb0c2:ibcc�   scale anchorPoint ignoreAnchorPointForPosition position CCSprite displayFrame isTouchEnabled mouseEnabled isAccelerometerEnabled isKeyboardEnabled contentSize gamescene/btn-pause.png CCLayer block Outro 	gameLayer selectedSpriteFrame gamescene/btn-pause-down.png gamescene/timer.png CCMenuItemImage visible gamescene/iPhone5-padding.png gamescene/background.png fonts/scorefont.fnt 	sprtTimer gamescene/header.png lblScore 	GameScene gamescene/go.png normalSpriteFrame CCLabelBMFont 	blendFunc onPauseClicked string CCMenu opacity 	isEnabled Intro 0
 disabledSpriteFrame 
sprtHeader fntFile   @   �? 8pH �I�I  ( ((( (H(h       (  h 0 8   &  (     
 &  ( ((( (H(h �  �      �      (  h � H     ( ((( (H(h PH   (  � x  (  h� Xh�  �h� X�   �  (  h P   p   r�t  (  � � 0    �  �    �  �   �  �   �    (  h �� (    �?��@  X���? ���?���@���@ ���?(���=���=���?��
@��@���=���=� (   X (�     B  (  h � X  �0036:GameScene.js:000006159:1:14=526cb0c1:16=526cb0c1:var kGemSize = 40;
var kBoardWidth = 8;
var kBoardHeight = 10;
var kNumTotalGems = kBoardWidth * kBoardHeight;
var kTimeBetweenGemAdds = 8;
var kTotalGameTime = 1000*60;
var kIntroTime = 1800;
var kNumRemovalFrames = 8;
var kDelayBeforeHint = 3000;
var kMaxTimeBetweenConsecutiveMoves = 1000;

var kGameOverGemSpeed = 0.1;
var kGameOverGemAcceleration = 0.005;

var kBoardTypeGem0 = 0;
var kBoardTypeGem1 = 1;
var kBoardTypeGem2 = 2;
var kBoardTypeGem3 = 3;
var kBoardTypeGem4 = 4;
var kBoardTypePup0 = 5;

var gFallingGems;
var gBoard;
var gBoardSprites;
var gNumGemsInColumn;
var gTimeSinceAddInColumn;

var gLastTakenGemTime;
var gNumConsecutiveGems;
var gIsPowerPlay;
var gPowerPlayParticles;
var gPowerPlayLayer;

var gGameLayer;
var gParticleLayer;
var gHintLayer;
var gShimmerLayer;
var gEffectsLayer;

var gTimer;

var gStartTime;
var gLastMoveTime;
var gIsDisplayingHint;

var gBoardChangedSinceEvaluation;
var gPossibleMove;

var gIsGameOver;
var gGameOverGems;
var gScoreLabel;
var gEndTimerStarted;

//require("GameBoard.js");
function setupBoard()
{
	gBoard = new Array(kNumTotalGems);
	for (var i = 0; i < kNumTotalGems; i++)
	{
		gBoard[i] = -1;
	}
	gBoardSprites = new Array(kNumTotalGems);

	gNumGemsInColumn = new Array(kBoardWidth);
	gTimeSinceAddInColumn = new Array(kBoardWidth);
	for (var x = 0; x < kBoardWidth; x++)
	{
		gNumGemsInColumn[x] = 0;
		gTimeSinceAddInColumn[x] = 0;
	}

	// Setup falling pieces
	gFallingGems = new Array(kBoardWidth);
	for (var x = 0; x < kBoardWidth; x++)
	{
		gFallingGems[x] = new Array(0);
	}

	gBoardChangedSinceEvaluation = true;
	gPossibleMove = -1;
}

function findConnectedGems_(x, y, arr, gemType)
{
	// Check for bounds
	if (x < 0 || x >= kBoardWidth) return;
	if (y < 0 || y >= kBoardHeight) return;

	var idx = x + y*kBoardWidth;

	// Make sure that the gems type match
	if (gBoard[idx] != gemType) return;


	// Check if idx is already visited
	for (var i = 0; i < arr.length; i++)
	{
		if (arr[i] == idx) return;
	}

	// Add idx to array
	arr.push(idx);

	// Visit neighbours
	findConnectedGems_(x+1, y, arr, gemType);
	findConnectedGems_(x-1, y, arr, gemType);
	findConnectedGems_(x, y+1, arr, gemType);
	findConnectedGems_(x, y-1, arr, gemType);
}

function findConnectedGems(x, y)
{
	var connected = new Array();
	if (gBoard[x + y*kBoardWidth] <= -1) return connected;

	findConnectedGems_(x, y, connected, gBoard[x + y*kBoardWidth]);

	return connected;
}

function removeConnectedGems(x, y)
{
	// Check for bounds
	if (x < 0 || x >= kBoardWidth) return;
	if (y < 0 || y >= kBoardHeight) return;

	var connected = findConnectedGems(x,y);
	var removedGems = false;

	if (connected.length >= 3)
	{
		gBoardChangedSinceEvaluation = true;
		removedGems = true;

		addScore(100*connected.length);

		var idxPup = -1;
		var pupX;
		var pupY;
		if (connected.length >= 6)
		{
			// Add power-up
			idx