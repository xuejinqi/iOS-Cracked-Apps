//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQMessageModel;

@interface QQGroupDeliverGiftModel : NSObject
{
    unsigned long long _packageID;
    unsigned long long _giftID;
    unsigned long long _giftCount;
    NSString *_packageUrl;
    NSString *_animationBrief;
    NSString *_senderUin;
    NSString *_receiverUin;
    NSString *_groupCode;
    long long _seq;
    NSString *_sTitle;
    NSString *_sSubTitle;
    NSString *_sMessage;
    unsigned int _nGiftPicID;
    NSString *_sComeFrom;
    unsigned int _nExflag;
    unsigned int _groupGiftState;
    _Bool _hideCloseButton;
    int _xo;
    _Bool _isVideoAnimation;
    _Bool _finishInteract;
    _Bool _isReplay;
    _Bool _isVideoEffect;
    int _senderAnonymousPortraitIdx;
    int _picShowId;
    int _picShowVersion;
    unsigned long long _businessType;
    NSString *_uin;
    unsigned long long _giftType;
    NSString *_senderNick;
    NSString *_sendToAllGiftID;
    NSString *_comeFromLink;
    CDUnknownBlockType _closeBlock;
    NSString *_senderAvatarURL;
    NSString *_receiverAvatarURL;
    long long _richScore;
    long long _charmScore;
    NSString *_scoreChageStr;
    unsigned long long _btnType;
    unsigned long long _addColorARGB;
    NSString *_interactId;
    double _receiveTime;
    double _playTime;
    double _totalPlayableTime;
    NSString *_picShowAnimationPara;
    QQMessageModel *_messageModel;
}

@property(nonatomic) _Bool isVideoEffect; // @synthesize isVideoEffect=_isVideoEffect;
@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) int picShowVersion; // @synthesize picShowVersion=_picShowVersion;
@property(copy, nonatomic) NSString *picShowAnimationPara; // @synthesize picShowAnimationPara=_picShowAnimationPara;
@property(nonatomic) int picShowId; // @synthesize picShowId=_picShowId;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(nonatomic) _Bool finishInteract; // @synthesize finishInteract=_finishInteract;
@property(nonatomic) double totalPlayableTime; // @synthesize totalPlayableTime=_totalPlayableTime;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) double receiveTime; // @synthesize receiveTime=_receiveTime;
@property(retain, nonatomic) NSString *interactId; // @synthesize interactId=_interactId;
@property(nonatomic) unsigned long long addColorARGB; // @synthesize addColorARGB=_addColorARGB;
@property(nonatomic) unsigned long long btnType; // @synthesize btnType=_btnType;
@property(retain, nonatomic) NSString *scoreChageStr; // @synthesize scoreChageStr=_scoreChageStr;
@property(nonatomic) long long charmScore; // @synthesize charmScore=_charmScore;
@property(nonatomic) long long richScore; // @synthesize richScore=_richScore;
@property(retain, nonatomic) NSString *receiverAvatarURL; // @synthesize receiverAvatarURL=_receiverAvatarURL;
@property(retain, nonatomic) NSString *senderAvatarURL; // @synthesize senderAvatarURL=_senderAvatarURL;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) NSString *comeFromLink; // @synthesize comeFromLink=_comeFromLink;
@property(copy, nonatomic) NSString *sendToAllGiftID; // @synthesize sendToAllGiftID=_sendToAllGiftID;
@property(nonatomic) unsigned int groupGiftState; // @synthesize groupGiftState=_groupGiftState;
@property(nonatomic) unsigned int nExflag; // @synthesize nExflag=_nExflag;
@property(retain, nonatomic) NSString *sComeFrom; // @synthesize sComeFrom=_sComeFrom;
@property(nonatomic) unsigned int nGiftPicID; // @synthesize nGiftPicID=_nGiftPicID;
@property(retain, nonatomic) NSString *sMessage; // @synthesize sMessage=_sMessage;
@property(retain, nonatomic) NSString *sSubTitle; // @synthesize sSubTitle=_sSubTitle;
@property(retain, nonatomic) NSString *sTitle; // @synthesize sTitle=_sTitle;
@property(retain, nonatomic) NSString *senderNick; // @synthesize senderNick=_senderNick;
@property(nonatomic) int senderAnonymousPortraitIdx; // @synthesize senderAnonymousPortraitIdx=_senderAnonymousPortraitIdx;
@property(nonatomic) _Bool isVideoAnimation; // @synthesize isVideoAnimation=_isVideoAnimation;
@property(nonatomic) unsigned long long giftType; // @synthesize giftType=_giftType;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (void)saveToGroupDB;
- (id)roleForReport;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *animationBrief; // @dynamic animationBrief;
@property(nonatomic) unsigned long long giftCount; // @dynamic giftCount;
@property(nonatomic) unsigned long long giftID; // @dynamic giftID;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool hideCloseButton; // @dynamic hideCloseButton;
@property(nonatomic) unsigned long long packageID; // @dynamic packageID;
@property(retain, nonatomic) NSString *packageUrl; // @dynamic packageUrl;
@property(retain, nonatomic) NSString *receiverUin; // @dynamic receiverUin;
@property(retain, nonatomic) NSString *senderUin; // @dynamic senderUin;
@property(nonatomic) long long seq; // @dynamic seq;

@end

