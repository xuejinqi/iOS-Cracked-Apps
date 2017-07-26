//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MAAccessInterface.h"

@class AMNetAvailbleStatistic, NSMutableArray, NSMutableDictionary, NSString, NSThread;

@interface MAAccess : NSObject <MAAccessInterface>
{
    _Bool _started;
    _Bool _linkRestrict;
    _Bool _needNetcheckButton;
    _Bool _shortLinkChannelOpen;
    _Bool _netCardIpV6Only;
    _Bool _isLaunchFinised;
    _Bool _isBackground;
    _Bool _netOK;
    _Bool _usrSpecialAttention;
    _Bool _netInterfaceInfoFreshed;
    _Bool _isStarted;
    _Bool _needStatics;
    _Bool _isBackFetching;
    _Bool _isZstdUpgrading;
    _Bool _isStatusBarRoam;
    NSString *_name;
    NSThread *_workThread;
    NSString *_restrictionMemo;
    NSString *_mTag;
    NSMutableArray *_infoProviders;
    NSMutableArray *_errorListeners;
    NSMutableArray *_statusListeners;
    NSMutableDictionary *_dataRecievers;
    id <MAStorageDelegate> _storageInterface;
    id <MACtlInterface> _ctlInterface;
    id <NetAccessInfo> _netAccessInfoProvider;
    id <AMLogDelegate> _logWriter;
    long long _netStatus;
    NSString *_mobileEmei;
    unsigned long long _bgTask;
    id <ManualNetCheckResultInterface> _netCheckCallback;
    unsigned long long _sendInitTime;
    long long _forgroundTime;
    unsigned long long _backGroudBeforeLink;
    long long _backGroudTimeSeconds;
    unsigned long long _rpcTotalTraffic;
    unsigned long long _syncTotalTraffic;
    unsigned long long _mmtpTotalTraffic;
    unsigned long long _trafficStartTime;
    long long _scene;
    double _startTime;
    AMNetAvailbleStatistic *_availbleStatistic;
    long long _dataNetworkType;
    NSString *_stausBarRoamInfo;
    long long _hpackErrCount;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)shareInstance;
@property long long hpackErrCount; // @synthesize hpackErrCount=_hpackErrCount;
@property(retain) NSString *stausBarRoamInfo; // @synthesize stausBarRoamInfo=_stausBarRoamInfo;
@property(nonatomic) _Bool isStatusBarRoam; // @synthesize isStatusBarRoam=_isStatusBarRoam;
@property(nonatomic) long long dataNetworkType; // @synthesize dataNetworkType=_dataNetworkType;
@property(nonatomic) _Bool isZstdUpgrading; // @synthesize isZstdUpgrading=_isZstdUpgrading;
@property(retain, nonatomic) AMNetAvailbleStatistic *availbleStatistic; // @synthesize availbleStatistic=_availbleStatistic;
@property(nonatomic) _Bool isBackFetching; // @synthesize isBackFetching=_isBackFetching;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool needStatics; // @synthesize needStatics=_needStatics;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool netInterfaceInfoFreshed; // @synthesize netInterfaceInfoFreshed=_netInterfaceInfoFreshed;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long trafficStartTime; // @synthesize trafficStartTime=_trafficStartTime;
@property(nonatomic) unsigned long long mmtpTotalTraffic; // @synthesize mmtpTotalTraffic=_mmtpTotalTraffic;
@property(nonatomic) unsigned long long syncTotalTraffic; // @synthesize syncTotalTraffic=_syncTotalTraffic;
@property(nonatomic) unsigned long long rpcTotalTraffic; // @synthesize rpcTotalTraffic=_rpcTotalTraffic;
@property(nonatomic) long long backGroudTimeSeconds; // @synthesize backGroudTimeSeconds=_backGroudTimeSeconds;
@property(nonatomic) unsigned long long backGroudBeforeLink; // @synthesize backGroudBeforeLink=_backGroudBeforeLink;
@property(nonatomic) _Bool usrSpecialAttention; // @synthesize usrSpecialAttention=_usrSpecialAttention;
@property(nonatomic) long long forgroundTime; // @synthesize forgroundTime=_forgroundTime;
@property(nonatomic) _Bool netOK; // @synthesize netOK=_netOK;
@property unsigned long long sendInitTime; // @synthesize sendInitTime=_sendInitTime;
@property(nonatomic) __weak id <ManualNetCheckResultInterface> netCheckCallback; // @synthesize netCheckCallback=_netCheckCallback;
@property unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain) NSString *mobileEmei; // @synthesize mobileEmei=_mobileEmei;
@property long long netStatus; // @synthesize netStatus=_netStatus;
@property _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(retain) id <AMLogDelegate> logWriter; // @synthesize logWriter=_logWriter;
@property(retain) id <NetAccessInfo> netAccessInfoProvider; // @synthesize netAccessInfoProvider=_netAccessInfoProvider;
@property(retain) id <MACtlInterface> ctlInterface; // @synthesize ctlInterface=_ctlInterface;
@property(retain) id <MAStorageDelegate> storageInterface; // @synthesize storageInterface=_storageInterface;
@property(retain) NSMutableDictionary *dataRecievers; // @synthesize dataRecievers=_dataRecievers;
@property(retain) NSMutableArray *statusListeners; // @synthesize statusListeners=_statusListeners;
@property(retain) NSMutableArray *errorListeners; // @synthesize errorListeners=_errorListeners;
@property(retain) NSMutableArray *infoProviders; // @synthesize infoProviders=_infoProviders;
@property(nonatomic) _Bool isLaunchFinised; // @synthesize isLaunchFinised=_isLaunchFinised;
@property(nonatomic) _Bool netCardIpV6Only; // @synthesize netCardIpV6Only=_netCardIpV6Only;
@property(retain, nonatomic) NSString *mTag; // @synthesize mTag=_mTag;
@property(nonatomic) _Bool shortLinkChannelOpen; // @synthesize shortLinkChannelOpen=_shortLinkChannelOpen;
@property(nonatomic) _Bool needNetcheckButton; // @synthesize needNetcheckButton=_needNetcheckButton;
@property(retain) NSString *restrictionMemo; // @synthesize restrictionMemo=_restrictionMemo;
@property(nonatomic) _Bool linkRestrict; // @synthesize linkRestrict=_linkRestrict;
@property(retain) NSThread *workThread; // @synthesize workThread=_workThread;
@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool started; // @synthesize started=_started;
- (void).cxx_destruct;
- (id)getQOSInfo;
- (id)getMTAG;
- (id)SyncSocketSendAndRcvHost:(id)arg1 port:(unsigned short)arg2 dataToSend:(id)arg3 timeoutSec:(long long)arg4 errCode:(long long *)arg5;
- (void)noticeZstdUpgradeInternal:(unsigned long long)arg1;
- (void)noticeZstdSpannerSwitch:(_Bool)arg1;
- (void)noticeZstdGraySwitch:(_Bool)arg1 grayStr:(id)arg2;
- (int)getQosLevel;
- (void)updateQosConfig:(id)arg1;
- (void)updateNewFunctionSwitch:(id)arg1;
- (void)updateStorage:(id)arg1;
- (void)getNetWifiSSID;
- (void)dealloc;
- (void)freshNetInterfacefInfo;
- (id)getIpV6OxcStringFromPointSepIpV4:(id)arg1;
- (void)setUsingIpV6JudgeLogic:(_Bool)arg1;
- (void)trafficStatistics:(long long)arg1 pkgLen:(unsigned long long)arg2;
- (void)RpcSendToTcpId:(long long)arg1 dataHeadLen:(long long)arg2 payloadlen:(long long)arg3 mmtpLen:(long long)arg4;
- (void)ManualNetcheckResultCallback:(int)arg1 state:(long long)arg2 tip:(id)arg3;
- (void)ManualNetcheckResultCallback:(int)arg1 state:(long long)arg2;
- (void)sendMMTPDownNotice;
- (void)SendReloginNotice;
- (void)connectInfoReportTcp:(id)arg1;
- (void)sendLongLinkStatusNotice:(long long)arg1;
- (void)LogDiagnose:(id)arg1 content:(id)arg2;
- (void)LogToMdapSubtype:(id)arg1 content:(id)arg2;
- (void)callBackErrorHappensWithCode:(long long)arg1 andMsg:(id)arg2 isNetDomain:(_Bool)arg3;
- (void)callBackOfDataSendingTimeoutWithChannel:(long long)arg1 withHead:(id)arg2;
- (void)callBackOfDataCommingWithchanne:(long long)arg1 withHead:(id)arg2 withData:(id)arg3;
- (void)callBackOfInitNotice;
- (id)buildInitPBDataLinkId:(unsigned long long *)arg1 isBackground:(_Bool *)arg2;
- (void)callSelf:(struct EQueueMsgType)arg1;
- (void)startTimer:(int)arg1;
- (void)AMNetNSThreadRunFunc;
- (void)startRunThread;
- (void)startAmnetByAmnet;
- (void)checkTimeToUpgrade;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForground;
- (void)setDefaultNetCardIpV6Info;
- (void)backgroundFetchStateChanged:(id)arg1;
- (void)signalStateReport;
- (void)applicationNetAccessPointChange;
- (_Bool)netChangeNeedReconnect;
- (void)setMultipleEthChooseStartCount:(long long)arg1;
- (void)reconnectLinerCount:(unsigned long long)arg1 radicalness:(long long)arg2;
- (void)httpHost:(id)arg1 ipList:(id)arg2 andPort:(unsigned int)arg3;
- (void)longLinkHost:(id)arg1 port:(unsigned long long)arg2 iplist:(id)arg3;
- (void)userLogInOut:(_Bool)arg1 userId:(id)arg2 cachedSessionId:(id)arg3;
- (void)cancelNetCheck;
- (void)startNetCheckWithcallbackItem:(id)arg1;
- (_Bool)canNetCheck;
- (id)spliteAbTag:(id)arg1;
- (_Bool)isCloseABFun:(id)arg1;
- (void)setAbTag:(id)arg1 hit:(_Bool)arg2;
- (void)setComposeSwitch:(_Bool)arg1;
- (void)setShortChannelTimeoutConfig:(unsigned long long)arg1;
- (void)noticeStatusTimerSwitch:(_Bool)arg1 grayStr:(id)arg2;
- (void)noticeRPCRetrySwitch:(_Bool)arg1;
- (void)noticeShortFrequencySwitch:(_Bool)arg1 grayStr:(id)arg2;
- (void)noticeHttpShortChannelSwitch:(_Bool)arg1 grayStr:(id)arg2;
- (void)noticeUseNewOpenssl:(_Bool)arg1;
- (void)cancelData:(unsigned long long)arg1;
- (void)registerLogWriter:(id)arg1;
- (void)registerNetInfoProvider:(id)arg1;
- (long long)accessStatus;
- (void)dataAckNotice:(unsigned long long)arg1 isTimeOut:(_Bool)arg2 timeoutInternal:(long long)arg3;
- (void)sendData:(id)arg1 channel:(long long)arg2 passSpanner:(_Bool)arg3;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 params:(id)arg8;
- (void)networkCtlPkgSend:(id)arg1;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 canHttp:(_Bool)arg7 canZstd:(_Bool)arg8;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 canHttp:(_Bool)arg7;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 canHttp:(_Bool)arg8 canZstd:(_Bool)arg9;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 canHttp:(_Bool)arg8;
- (void)sendHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7;
- (void)sendThroughHttpHead:(id)arg1 body:(id)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 forwardIP:(unsigned int)arg6;
- (void)addStatusObserver:(id)arg1;
- (void)addInfoProvider:(id)arg1;
- (void)addErrorObserver:(id)arg1;
- (void)registerCtlObserver:(id)arg1;
- (void)registerDataObserver:(id)arg1 channel:(long long)arg2;
- (void)breakAMNetLongLink;
- (void)stopAMNetThread;
- (void)startAMNetThread:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

