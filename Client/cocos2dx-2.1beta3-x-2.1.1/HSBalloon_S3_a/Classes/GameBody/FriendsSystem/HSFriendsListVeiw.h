/********************************************************************
 *  Copyright(C) 2013 Ambition_HS ( All rights reserved. )
 *	Created:	2013/09/03   10:01
 *	File base:	HSFriendsListVeiw.h
 *	Author:		Ambition
 *	
 *	Purpose:	
*********************************************************************/
#ifndef __HSFriendsListVeiw_H__
#define __HSFriendsListVeiw_H__
#pragma once
#include "HSFriendInfoSprite.h"
#include "HSReadUI.h"


class HSFriendsListVeiw : public HSListViewInterface
{
public:
	HSFriendsListVeiw(const CCSize& frameSize,const CCSize& itemSize,int onceCount);
	~HSFriendsListVeiw(void);

public:
	static HSFriendsListVeiw* create(const FriendInfoResponse_PlayerInfoList* pPlayerInfoList,const CCSize& frameSize,const CCSize& itemSize);

	virtual bool init( const FriendInfoResponse_PlayerInfoList* pPlayerInfoList);

	virtual CCNode* AddItem(int idx);

	virtual bool UpdataItem( CCNode* pItem,int idx );

	virtual void tableCellTouched( CCTableView* table, CCTableViewCell* cell );

private:
	const FriendInfoResponse_PlayerInfoList* m_pPlayerInfoList;


};

#endif // __HSFriendsListVeiw_H____
