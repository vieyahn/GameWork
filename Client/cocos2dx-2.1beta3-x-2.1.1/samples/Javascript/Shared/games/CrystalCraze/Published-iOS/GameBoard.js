0038:GameScene.ccbi:000000543:1:14=526cb0bf:16=526cb0bf:ibcc�   scale anchorPoint ignoreAnchorPointForPosition position CCSprite displayFrame isTouchEnabled mouseEnabled isAccelerometerEnabled isKeyboardEnabled contentSize gamescene/btn-pause.png CCLayer block Outro 	gameLayer selectedSpriteFrame gamescene/btn-pause-down.png gamescene/timer.png CCMenuItemImage visible gamescene/iPhone5-padding.png gamescene/background.png fonts/scorefont.fnt 	sprtTimer gamescene/header.png lblScore 	GameScene gamescene/go.png normalSpriteFrame CCLabelBMFont 	blendFunc onPauseClicked string CCMenu opacity 	isEnabled Intro 0
 disabledSpriteFrame 
sprtHeader fntFile   @   �? 8pH �I�I  ( ((( (H(h       (  h 0 8   &  (     
 &  ( ((( (H(h �  �      �      (  h � H     ( ((( (H(h PH   (  � x  (  h� Xh�  �h� X�   �  (  h P   p   r�t  (  � � 0    �  �    �  �   �  �   �    (  h �� (    �?��@  X���? ���?���@���@ ���?(���=���=���?��
@��@���=���=� (   X (�     B  (  h � X  �0036:GameScene.js:000006159:1:14=526cb0bd:16=526cb0bd:var kGemSize = 40;
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
			idxPup = connected[Math.floor(Math.random()*connected.length)];
			var pupX = idxPup % kBoardWidth;
			var pupY = Math.floor(idxPup/kBoardWidth);
		}

		for (var i = 0; i < connected.length; i++)
		{
			var idx = connected[i];
			var gemX = idx % kBoardWidth;
			var gemY = Math.floor(idx/kBoardWidth);

			gBoard[idx] = -kNumRemovalFrames;
			gGameLayer.removeChild(gBoardSprites[idx], true);
			gBoardSprites[idx] = null;

			// Add particle effect
			var particle = cc.ParticleSystem.create("particles/taken-gem.plist");
			particle.setPosition(gemX * kGemSize+kGemSize/2, gemY*kGemSize+kGemSize/2);
			particle.setAutoRemoveOnFinish(true);
			gParticleLayer.addChild(particle);

			// Add power-up
			if (idx == idxPup)
			{
				gBoard[idx] = kBoardTypePup0;

				var sprt = cc.Sprite.createWithSpriteFrameName("crystals/bomb.png");
				sprt.setPosition(cc.p(gemX*kGemSize, gemY*kGemSize));
				sprt.setAnchorPoint(cc.p(0,0));
				sprt.setOpacity(0);
				sprt.runAction(cc.FadeIn.create(0.4));

				var sprtGlow = cc.Sprite.createWithSpriteFrameName("crystals/bomb-hi.png");
				sprtGlow.setAnchorPoint(cc.p(0,0));
				sprtGlow.setOpacity(0);
				sprtGlow.runAction(cc.RepeatForever.create(cc.Sequence.create(cc.FadeIn.create(0.4),cc.FadeOut.create(0.4))));
				sprt.addChild(sprtGlow);

				gBoardSprites[idx] = sprt;
				gGameLayer.addChild(sprt);
			}
			else if (idxPup != -1)
			{
				// Animate effect for power-up
				var sprtLight = cc.Sprite.createWithSpriteFrameName("crystals/bomb-light.png");
				sprtLight.setPosition(cc.p(gemX*kGemSize+kGemSize/2, gemY*kGemSize+kGemSize/2));
				sprtLight.setBlendFunc(gl.SRC_ALPHA, gl.ONE);
				gEffectsLayer.addChild(sprtLight);

				var movAction = cc.MoveTo.create(0.2, cc.p(pupX*kGemSize+kGemSize/2, pupY*kGemSize+kGemSize/2));
				var seqAction = cc.Sequence.create(movAction, cc.CallFunc.create(onRemoveFromParent, this));

				sprtLight.runAction(seqAction);
			}
		}
	}
	else
	{
		gAudioEngine.playEffect("sounds/miss.wav");
	}

	var d = new Date();
	gLastMoveTime = d.getTime();

	return removedGems;
}

function activatePowerUp(x, y)
{
	// Check for bounds
	if (x < 0 || x >= kBoardWidth) return;
	if (y < 0 || y >= kBoardHeight) return;

	var removedGems = false;

	var idx = x + y * kBoardWidth;
	if (gBoard[idx] == kBoardTypePup0)
	{
		// Activate bomb
		gAudioEngine.playEffect("sounds/powerup.wav");

		removedGems = true;

		addScore(2000);

		gBoard[idx] = -kNumRemovalFrames;
		gGameLayer.removeChild(gBoardSprites[idx], true);
		gBoardSprites[idx] = null;

		// Remove a horizontal line
		for (var xRemove = 0; xRemove < kBoardWidth; xRemove++)
		{
			var idxRemove = xRemove + y * kBoardWidth;
			if (gBoard[idxRemove] >= 0 && gBoard[idxRemove] < 5)
			{
				gBoard[idxRemove] = -kNumRemovalFrames;
				gGameLayer.removeChild(gBoardSprites[idxRemove], true);
				gBoardSprites[idxRemove] = null;
			}
		}

		// Remove a vertical line
		for (var yRemove = 0; yRemove < kBoardHeight; yRemove++)
		{
			var idxRemove = x + yRemove * kBoardWidth;
			if (gBoard[idxRemove] >= 0 && gBoard[idxRemove] < 5)
			{
				gBoard[idxRemove] = -kNumRemovalFrames;
				gGameLayer.removeChild(gBoardSprites[idxRemove], true);
				gBoardSprites[idxRemove] = null;
			}
		}

		// Add particle effects
		var hp = cc.ParticleSystem.create("particles/taken-hrow.plist");
		hp.setPosition(cc.p(kBoardWidth/2*kGemSize+kGemSize/2, y*kGemSize+kGemSize/2));
		hp.setAutoRemoveOnFinish(true);
		gParticleLayer.addChild(hp);

		var vp = cc.ParticleSystem.create("particles/taken-vrow.plist");
		vp.setPosition(cc.p(x*kGemSize+kGemSize/2, kBoardHeight/2*kGemSize+kGemSize/2));
		vp.setAutoRemoveOnFinish(true);
		gParticleLayer.addChild(vp);

		// Add explo anim
		var center = cc.p(x*kGemSize+kGemSize/2, y*kGemSize+kGemSize/2);

		// Horizontal
		var sprtH0 = cc.Sprite.createWithSpriteFrameName("crystals/bomb-explo.png");
		sprtH0.setBlendFunc(gl.SRC_ALPHA, gl.ONE);
		sprtH0.setPosition(center);
		sprtH0.setScaleX(5);
		sprtH0.runAction(cc.ScaleTo.create(0.5, 30, 1));
		sprtH0.runAction(cc.Sequence.create(cc.FadeOut.create(0.5), cc.CallFunc.create(onRemoveFromParent, this)));
		gEffectsLayer.addChild(sprtH0);

		// Vertical
		var sprtV0 = cc.Sprite.createWithSpriteFrameName("crystals/bomb-explo.png");
		sprtV0.setBlendFunc(gl.SRC_ALPHA, gl.ONE);
		sprtV0.setPosition(center);
		sprtV0.setScaleY(5);
		sprtV0.runAction(cc.ScaleTo.create(0.5, 1, 30));
		sprtV0.runAction(cc.Sequence.create(cc.FadeOut.create(0.5), cc.CallFunc.create(onRemoveFromParent, this)));
		gEffectsLayer.addChild(sprtV0);

		// Horizontal
		var sprtH1 = cc.Sprite.createWithSpriteFrameName("crystals/bomb-explo-inner.png");
		sprtH1.setBlendFunc(gl.SRC_ALPHA, gl.ONE);
		sprtH1.setPosition(center);
		sprtH1.setScaleX(0.5);
		sprtH1.runAction(cc.ScaleTo.create(0.5, 8, 1));
		sprtH1.runAction(cc.Sequence.create(cc.FadeOut.create(0.5), cc.CallFunc.create(onRemoveFromParent, this)));
		gEffectsLayer.addChild(sprtH1);

		// Vertical
		var sprtV1 = cc.Sprite.createWithSpriteFrameName("crystals/bomb-explo-inner.png");
		sprtV1.setRotation(90);
		sprtV1.setBlendFunc(gl.SRC_ALPHA, gl.ONE);
		sprtV1.setPosition(center);
		sprtV1.setScaleY(0.5);
		sprtV1.runAction(cc.ScaleTo.create(0.5, 8, 1));
		sprtV1.runAction(cc.Sequence.create(cc.FadeOut.create(0.5), cc.CallFunc.create(onRemoveFromParent, this)));
		gEffectsLayer.addChild(sprtV1);
	}

	return removedGems;
}

function removeMarkedGems()
{
	// Iterate through the board
	for (var x = 0; x < kBoardWidth; x++)
	{
		for (var y = 0; y < kBoardHeight; y++)
		{
			var i = x + y * kBoardWidth;

			if (gBoard[i] < -1)
			{
				// Increase the count for negative crystal types
				gBoard[i]++;
				if (gBoard[i] == -1)
				{
					gNumGemsInColumn[x]--;
					gBoardChangedSinceEvaluation = true;

					// Transform any gem above this to a falling gem
					for (var yAbove = y+1; yAbove < kBoardHeight; yAbove++)
					{
						var idxAbove = x + yAbove*kBoardWidth;

						if (gBoard[idxAbove] < -1)
						{
							gNumGemsInColumn[x]--;
							gBoard[idxAbove] = -1;
						}
						if (gBoard[idxAbove] == -1) continue;

						// The gem is not connected, make it into a falling gem
						var gemType = gBoard[idxAbove];
						var gemSprite = gBoardSprites[idxAbove];

						var gem = {gemType: gemType, sprite: gemSprite, yPos: yAbove, ySpeed: 0};
						gFallingGems[x].push(gem);

						// Remove from board
						gBoard[idxAbove] = -1;
						gBoardSprites[idxAbove] = null;

						gNumGemsInColumn[x]--;
					}

				}
			}
		}
	}
}

function getGemType(x, y)
{
	if (x < 0 || x >= kBoardWidth) return -1;
	if (y < 0 || y >= kBoardHeight) return -1;

	return gBoard[x+y*kBoardWidth];
}

function setGemType(x, y, newType)
{
	// Check bounds
	if (x < 0 || x >= kBoardWidth) return;
	if (y < 0 || y >= kBoardHeight) return;

	// Get the type of the gem
	var idx = x + y*kBoardWidth;
	var gemType = gBoard[idx];

	// Make sure that it is a gem
	if (gemType < 0 || gemType >= 5) return;

	gBoard[idx] = newType;

	// Remove old gem and insert a new one
	gGameLayer.removeChild(gBoardSprites[idx], true);

	var gemSprite = cc.Sprite.createWithSpriteFrameName("crystals/"+newType+".png");
	gemSprite.setPosition(cc.p(x * kGemSize, y * kGemSize));
	gemSprite.setAnchorPoint(cc.p(0,0));

	gGameLayer.addChild(gemSprite);
	gBoardSprites[idx] = gemSprite;

	gBoardChangedSinceEvaluation = true;
}

function findMove()
{
	if (!gBoardChangedSinceEvaluation)
	{
		return gPossibleMove;
	}

	// Iterate through all places on the board
	for (var y = 0; y < kBoardHeight; y++)
	{
		for (var x = 0; x < kBoardWidth; x++)
		{
			var idx = x + y*kBoardWidth;
			var gemType = gBoard[idx];

			// Make sure that it is a gem
			if (gemType < 0 || gemType >= 5) continue;

			// Check surrounding tiles
			var numSimilar = 0;

			if (getGemType(x-1, y) == gemType) numSimilar++;
			if (getGemType(x+1, y) == gemType) numSimilar++;
			if (getGemType(x, y-1) == gemType) numSimilar++;
			if (getGemType(x, y+1) == gemType) numSimilar++;

			if (numSimilar >= 2)
			{
				gPossibleMove = idx;
				return idx;
			}
		}
	}
	gBoardChangedSinceEvaluation = false;
	gPossibleMove = -1;
	return -1;
}

function createRandomMove()
{
	// Find a random place in the lower part of the board
	var x = Math.floor(Math.random()*kBoardWidth-1);
	var y = Math.floor(Math.random()*kBoardHeight/2);

	// Make sure it is a gem that we found
	var gemType = gBoard[x+y*kBoardWidth];
	if (gemType == -1 || gemType >= 5) return;

	// Change the color of two surrounding gems
	setGemType(x+1, y, gemType);
	setGemType(x, y+1, gemType);

	gBoardChangedSinceEvaluation = true;
}

function createGameOver()
{
	gGameOverGems = new Array();

	for (var x = 0; x < kBoardWidth; x++)
	{
		var column = gFallingGems[x];
		for (var i = 0; i < column.length; i++)
		{
			var gem = column[i];

			var ySpeed = (Math.random()*2-1)*kGameOverGemSpeed;
			var xSpeed = (Math.random()*2-1)*kGameOverGemSpeed;

			var gameOverGem = {sprite: gem.sprite, xPos: x, yPos: gem.yPos, ySpeed: ySpeed, xSpeed: xSpeed};
			gGameOverGems.push(gameOverGem);
		}

		for (var y = 0; y < kBoardHeight; y++)
		{
			var i = x + y * kBoardWidth;
			if (gBoardSprites[i])
			{
				var ySpeed = (Math.random()*2-1)*kGameOverGemSpeed;
				var xSpeed = (Math.random()*2-1)*kGameOverGemSpeed;

				var gameOverGem = {sprite: gBoardSprites[i], xPos:x, yPos: y, ySpeed: ySpeed, xSpeed: xSpeed};
				gGameOverGems.push(gameOverGem);
			}
		}
	}

	gHintLayer.removeAllChildren(true);

	removeShimmer();
}

function updateGameOver()
{
	for (var i = 0; i < gGameOverGems.length; i++)
	{
		var gem = gGameOverGems[i];

		gem.xPos = gem.xPos + gem.xSpeed;
		gem.yPos = gem.yPos + gem.ySpeed;
		gem.ySpeed -= kGameOverGemAcceleration;

		gem.sprite.setPosition(gem.xPos*kGemSize, gem.yPos*kGemSize);
	}
}

function displayHint()
{
	gIsDisplayingHint = true;

	var idx = findMove();
	var x = idx % kBoardWidth;
	var y = Math.floor(idx/kBoardWidth);

	var connected = findConnectedGems(x,y);

	for (var i = 0; i < connected.length; i++)
	{
		var idx = connected[i];
		var x = idx % kBoardWidth;
		var y = Math.floor(idx/kBoardWidth);

		var actionFadeIn = cc.FadeIn.create(0.5);
		var actionFadeOut = cc.FadeOut.create(0.5);
		var actionSeq = cc.Sequence.create(actionFadeIn, actionFadeOut);
		var action = cc.RepeatForever.create(actionSeq);

		var hintSprite = cc.Sprite.createWithSpriteFrameName("crystals/hint.png");
		hintSprite.setOpacity(0);
		hintSprite.setPosition(cc.p(x*kGemSize, y*kGemSize));
		hintSprite.setAnchorPoint(cc.p(0, 0));
		gHintLayer.addChild(hintSprite);
		hintSprite.runAction(action);
	}
}

function debugPrintBoard()
{
	for (var y = kBoardHeight-1; y >= 0; y--)
	{
		var i = kBoardWidth*y;
		cc.log(""+gBoard[i]+gBoard[i+1]+gBoard[i+2]+gBoard[i+3]+gBoard[i+4]+gBoard[i+5]+gBoard[i+6]+gBoard[i+7]);
	}
	cc.log("--------");
	cc.log(""+gNumGemsInColumn[0]+" "+gNumGemsInColumn[1]+" "+gNumGemsInColumn[2]+" "+gNumGemsInColumn[3]+" "
		+gNumGemsInColumn[4]+" "+gNumGemsInColumn[5]+" "+gNumGemsInColumn[6]+" "+gNumGemsInColumn[7]);
}

function setupShimmer()
{
	cc.SpriteFrameCache.getInstance().addSpriteFrames("gamescene/shimmer.plist");

	for (var i = 0; i < 2; i++)
	{
		var sprt = cc.Sprite.createWithSpriteFrameName("gamescene/shimmer/bg-shimmer-"+i+".png");

		var seqRot = null;
		var seqMov = null;
		var seqSca = null;

		for (var j = 0; j < 10; j++)
		{
			var time = Math.random()*10+5;
			var x = kBoardWidth*kGemSize/2;
			var y =