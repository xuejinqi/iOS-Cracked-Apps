//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSFDelegate.h"
#import "NSXMLParserDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSData, NSLock, NSMutableArray, NSMutableData, NSOperationQueue, NSString, QQAlertView;

@interface CIMEngine : NSObject <NSXMLParserDelegate, IMSFDelegate, UIAlertViewDelegate>
{
    id <CIMEngineDelegate> _delegate;
    id <CIMPushSvrEngineDelegate> _pushSvrDelegate;
    id <CIMQZoneSvrEngineDelegate> _QZSvrDelegate;
    id <CIMMsgSvrEngineDelegate> _msgSvrDelegate;
    id <CIMFriendsSvrEngineDelegate> _friendsSvrDelegate;
    id <CIMProfileSvrEngineDelgate> _profileSvrDelegate;
    id <CIMUnkownSvrEngineDelegate> _unkownSvrDelegate;
    id <CIMUserSvrEngineDelegate> _userSvrEngineDelegate;
    id <CIMStreamMsgEngineDelegate> _streamMsgEngineDelegate;
    id <CIMAdSvrEngineDelegate> _adSvrEngineDelegate;
    id <CIMMGroupEngineDelegate> _mgroupEngineDelegate;
    id <CIMCardInfoEngineDelegate> _cardInfoEngineDelegate;
    id <CIMLbsSvrEngineDelegate> _lbsSvrEngineDelegate;
    id <CIMFileStorageSvcListDelegate> _fileStorageSvcListDelegate;
    id <CIMGetAPPPluginInfoDelegate> _getAppPluigninfoDelegate;
    id <CIMOfflineFileEngineDelegate> _offlineFileDelegate;
    id <CIMGetCacaRespDelegate> _getCacaRespDelegate;
    id <CIMBaseEngineDelegate> _nearbyGroupDelegate;
    id <CIMBaseEngineDelegate> _positionShareDelegate;
    void *_pVideoEngine;
    NSData *_ClientSecurity;
    NSMutableData *_recvHttpData;
    NSString *_xmlKey;
    NSOperationQueue *_recvPacketQueue;
    QQAlertView *_serverForceCloseAlertView;
    QQAlertView *_msfMsgAlertView;
    NSString *_ssoip;
    int _ssoport;
    NSLock *_netipLock;
    NSString *_netip;
    int _netport;
    NSString *_lastOfflinePrompt;
    _Bool _newConnEstablished;
    _Bool _isGrayAppIllegalTipsShowing;
    NSMutableArray *_serverTimeUpdateDelegateArray;
    id <CIMBaseEngineDelegate> _mqzoneNewDelegate;
    id <CIMOidbSvrEngineDelegate> _oidbSvrEngineDelegate;
    id <CIMBaseEngineDelegate> _mobileTipsDelegate;
}

+ (id)GetInstance;
@property(nonatomic) id <CIMBaseEngineDelegate> mobileTipsDelegate; // @synthesize mobileTipsDelegate=_mobileTipsDelegate;
@property(nonatomic) id <CIMOfflineFileEngineDelegate> offlineFileDelegate; // @synthesize offlineFileDelegate=_offlineFileDelegate;
@property(nonatomic) id <CIMOidbSvrEngineDelegate> oidbSvrEngineDelegate; // @synthesize oidbSvrEngineDelegate=_oidbSvrEngineDelegate;
@property(nonatomic) _Bool newConnEstablished; // @synthesize newConnEstablished=_newConnEstablished;
@property(retain, nonatomic) NSString *lastOfflinePrompt; // @synthesize lastOfflinePrompt=_lastOfflinePrompt;
@property(readonly, nonatomic) int netport; // @synthesize netport=_netport;
@property(readonly, nonatomic) NSString *netip; // @synthesize netip=_netip;
@property(readonly, nonatomic) int ssoport; // @synthesize ssoport=_ssoport;
@property(readonly, nonatomic) NSString *ssoip; // @synthesize ssoip=_ssoip;
@property(nonatomic) id <CIMBaseEngineDelegate> positionShareDelegate; // @synthesize positionShareDelegate=_positionShareDelegate;
@property(nonatomic) id <CIMBaseEngineDelegate> nearbyGroupDelegate; // @synthesize nearbyGroupDelegate=_nearbyGroupDelegate;
@property(nonatomic) id <CIMBaseEngineDelegate> mqzoneNewDelegate; // @synthesize mqzoneNewDelegate=_mqzoneNewDelegate;
@property(retain, nonatomic) id <CIMGetCacaRespDelegate> getCacaRespDelegate; // @synthesize getCacaRespDelegate=_getCacaRespDelegate;
@property(retain, nonatomic) id <CIMGetAPPPluginInfoDelegate> getAppPluginInfoDelegate; // @synthesize getAppPluginInfoDelegate=_getAppPluigninfoDelegate;
@property(nonatomic) id <CIMFileStorageSvcListDelegate> fileStorageSvcListDelegate; // @synthesize fileStorageSvcListDelegate=_fileStorageSvcListDelegate;
@property(nonatomic) id <CIMLbsSvrEngineDelegate> lbsSvrEngineDelegate; // @synthesize lbsSvrEngineDelegate=_lbsSvrEngineDelegate;
@property(nonatomic) id <CIMCardInfoEngineDelegate> cardInfoEngineDelegate; // @synthesize cardInfoEngineDelegate=_cardInfoEngineDelegate;
@property(nonatomic) id <CIMMGroupEngineDelegate> mgroupEngineDelegate; // @synthesize mgroupEngineDelegate=_mgroupEngineDelegate;
@property(nonatomic) id <CIMAdSvrEngineDelegate> adSvrEngineDelegate; // @synthesize adSvrEngineDelegate=_adSvrEngineDelegate;
@property(nonatomic) id <CIMStreamMsgEngineDelegate> streamMsgEngineDelegate; // @synthesize streamMsgEngineDelegate=_streamMsgEngineDelegate;
@property(nonatomic) id <CIMUserSvrEngineDelegate> userSvrEngineDelegate; // @synthesize userSvrEngineDelegate=_userSvrEngineDelegate;
@property(nonatomic) id <CIMUnkownSvrEngineDelegate> unkownSvrDelegate; // @synthesize unkownSvrDelegate=_unkownSvrDelegate;
@property(nonatomic) id <CIMProfileSvrEngineDelgate> profileSvrDelegate; // @synthesize profileSvrDelegate=_profileSvrDelegate;
@property(nonatomic) id <CIMFriendsSvrEngineDelegate> friendsSvrDelegate; // @synthesize friendsSvrDelegate=_friendsSvrDelegate;
@property(nonatomic) id <CIMMsgSvrEngineDelegate> msgSvrDelegate; // @synthesize msgSvrDelegate=_msgSvrDelegate;
@property(nonatomic) id <CIMQZoneSvrEngineDelegate> QZSvrDelegate; // @synthesize QZSvrDelegate=_QZSvrDelegate;
@property(nonatomic) id <CIMPushSvrEngineDelegate> pushSvrDelegate; // @synthesize pushSvrDelegate=_pushSvrDelegate;
@property(nonatomic) id <CIMEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)GetHttpIPList;
- (int)GetPhoneNetworkType;
- (void)SetNetIPToMSF:(id)arg1 port:(int)arg2;
- (int)GetServerTime;
- (int)GetServerTimeDiff;
- (void)reportServerTimeDiff:(int)arg1;
- (id)GetIMEI;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)RequestgetResouceReq:(id)arg1 version:(int)arg2 resourcetype:(int)arg3;
- (void)RequestgetResouceReq:(id)arg1 version:(int)arg2;
- (_Bool)RequestPicSvrConfig:(int)arg1 imsi:(id)arg2;
- (void)RequestConfig:(int)arg1 para:(id)arg2;
- (void)CancelMSFPacket:(int)arg1;
- (_Bool)SendMSFPacketAfterLogoutEnd:(id)arg1;
- (_Bool)SendMSFPacketAfterLogout:(id)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacketWithoutSigCheck:(id)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacketWithUin:(id)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacket:(id)arg1 retSeq:(int *)arg2;
- (int)SendMsfPacketWithDic:(id)arg1;
- (_Bool)ResendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4;
- (_Bool)ResendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)ResendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)ResendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6 msgLog:(const char *)arg7;
- (_Bool)ResendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6 resendNum:(BOOL)arg7;
- (_Bool)SendWupBufferWithoutControl:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4;
- (_Bool)SendWupBufferForUin:(id)arg1 data:(char *)arg2 cmd:(id)arg3 seq:(int *)arg4 immediately:(_Bool)arg5;
- (_Bool)SendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4;
- (_Bool)SendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)SendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)SendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6 msgLog:(const char *)arg7;
- (_Bool)SendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6 resendNum:(BOOL)arg7;
- (_Bool)PreSendWupBuffer:(int *)arg1;
- (void)NotifyMSFLogout;
- (void)NotifyMSFClearSigs:(id)arg1;
- (void)NotifyMSFRefreshSigs;
- (void)NotifyMSFLoginSuccess;
- (id)GetClientSecurity:(long long)arg1 A2:(id)arg2;
- (void)clearHistorySigs;
- (_Bool)checkHistorySigsV4_2:(id)arg1 sigs:(id)arg2;
- (void)setMSFNetTestWhiteList:(const char *)arg1;
- (void)RefreshSSOServerList;
- (_Bool)isPollIpOver;
- (void)SwitchHttpConnect:(_Bool)arg1;
- (void)SwitchIPList_LocalHttp:(_Bool)arg1;
- (void)SwitchIPList_PushOnly:(_Bool)arg1;
- (int)getBgConnType;
- (_Bool)isBgConnected;
- (_Bool)isBgConnecting;
- (void)bgDisconnect;
- (void)bgConnect;
- (int)GetConnType;
- (_Bool)IsConnected;
- (_Bool)IsConnecting;
- (void)Disconnect;
- (void)SwitchIPConnect;
- (void)Connect;
- (void *)GetVideoEngine;
- (void)unregistGetAppPluginInfoDelegate:(id)arg1;
- (void)registGetAppPluginInfoDelegate:(id)arg1;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addDelegateForMSFTimeUpdate:(id)arg1;
- (void)onMSFServerTimeUpdated:(id)arg1;
- (void)OnMSFMsg:(id)arg1;
- (void)OnMSFIllegalGrayApp:(id)arg1;
- (void)OnMSFSocketFlow:(id)arg1;
- (void)OnMSFPacketState:(id)arg1;
- (void)showTipsOnMainThread:(id)arg1;
- (void)OnMSFApnState:(id)arg1;
- (void)OnMSFBackgroundNetworkState:(id)arg1;
- (void)OnMSFNetworkState:(id)arg1;
- (void)OnMSFSSOErrorStateResult:(id)arg1;
- (void)handleMSFRecvDataFromBackendNotify:(id)arg1;
- (void)OnMSFRecvDataFromBackend:(const char *)arg1 buf:(char *)arg2 bufLen:(int)arg3 seq:(int)arg4;
- (void)OnMSFRecvDataFromBackendOnMainThread:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getLastUpdateTimeKeyWithPkgName:(id)arg1;
- (void)HandleConfigResourceServantCmd:(char *)arg1 len:(int)arg2;
- (void)HandleConfigPicServantCmd:(char *)arg1 len:(int)arg2;
- (void)HandleConfigServantCmd:(char *)arg1 len:(int)arg2;
- (_Bool)SendWupBufferBase:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 resendSeq:(int)arg4 immediately:(_Bool)arg5 timeOut:(int)arg6 answerFlag:(BOOL)arg7 resendNum:(BOOL)arg8 msgLog:(const char *)arg9 isControl:(_Bool)arg10;
- (void)pkgDidLoadFinishWithUrl:(id)arg1 name:(id)arg2 version:(id)arg3 resConf:(id)arg4;
- (void)BatchHandleConfigServantCmd:(char *)arg1 len:(int)arg2;
- (id)getLastUpdateTimeKeyWithPkgName:(id)arg1;
- (void)dealwithResourceInfo:(struct GetResourceRespInfo)arg1;
- (void)BatchHandleConfigResourceServantCmd:(char *)arg1 len:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

