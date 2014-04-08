#include "HSProp_EnergyShield.h"
#include "HSBattleScene.h"

HSProp_EnergyShield::HSProp_EnergyShield(void)
{

}


HSProp_EnergyShield::~HSProp_EnergyShield(void)
{
}

bool HSProp_EnergyShield::InitProp( const PropInfo* pPropInfo )
{
	std::string fileName = GetBasePath() + pPropInfo->localname();

	CCSprite* pNode_0 = HSCCSprite::create(fileName.c_str());
	HSGraySprite* pNode_1 = HSGraySprite::create(fileName.c_str());
	pNode_1->setScale(1.02f);

	m_pMenuItem = CCMenuItemSprite::create(pNode_0,pNode_1,this,menu_selector(HSProp_EnergyShield::Call));

	CCMenu* pMenu = CCMenu::create(m_pMenuItem,NULL);
	pMenu->setPosition(CCPointZero);
	this->addChild(pMenu);

	return true;
}

void HSProp_EnergyShield::Call( CCObject* pObj )
{
    if(this->Buy())
    {
        HSPropIconInterface::Call(pObj);
        
        HS_GET_BattleLayer()->AddUserProp(this->GetPropInfoData());
        HS_GET_BattleLayer()->PlayUserPropEffect(this);
        
        this->SetIsActivate(!GetIsActivate());
        
        CCDelayTime* pDelayTime = CCDelayTime::create(4.f);
        CCCallFunc* pCall = CCCallFunc::create(this,callfunc_selector(HSProp_EnergyShield::Call_CCDelayTime));
        this->runAction(CCSequence::create(pDelayTime,pCall,NULL));
        
        HS_GET_BattleLayer()->PlayBlueFrameBlink(this->GetPropInfoData()->duration());
        
        this->AddCD(pObj);
        
        HS_Play_Sound("porp4_effect");
    }
	

}

void HSProp_EnergyShield::SetIsInvalid(bool is)
{
    if (!m_pMenuItem)
    {
        return;
    }
    if (is)
    {
        HSGraySprite* pTemp = (HSGraySprite*)m_pMenuItem->getSelectedImage();
        HSGraySprite* pSelectNode = HSGraySprite::create(pTemp->GetFileName());
        
        m_pMenuItem->setNormalImage(pSelectNode);
        m_pMenuItem->setEnabled(false);
    }
}

void HSProp_EnergyShield::Updata( float dt )
{
	if (!this->GetIsActivate())
	{
		m_pMenuItem->setEnabled(true);
		return;
	}
	m_pMenuItem->setEnabled(false);
	std::vector<HSBattleLayer::HSDropApply>* pPetrifactionBalloonNumList = HS_GET_BattleLayer()->GetPetrifactionBalloonNumList();
	std::vector<HSBattleLayer::HSDropApply>* pDropPetrifactionList = HS_GET_BattleLayer()->GetDropPetrifactionList();

	for(int i =0;i< (int)pDropPetrifactionList->size();++i)
	{
		HSBattleLayer::HSDropApply tempHSDropApply;
		tempHSDropApply = *(pDropPetrifactionList->begin() + i);
		pPetrifactionBalloonNumList->push_back(tempHSDropApply);
	}
	pDropPetrifactionList->clear();

}

void HSProp_EnergyShield::Call_CCDelayTime()
{
	this->SetIsActivate(false);
}