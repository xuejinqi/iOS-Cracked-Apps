//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZUploadPacketPacker : NSObject
{
}

+ (void)fillReponse:(id)arg1 withResult:(id)arg2 rspData:(id)arg3;
+ (id)unpackBatchCommitResponseWithData:(id)arg1 error:(id *)arg2;
+ (void)convertPacket:(id)arg1 andControlData:(id)arg2 toCommitReq:(id)arg3 error:(id *)arg4;
+ (id)packBatchCommitPacketWithUploadPackets:(id)arg1 error:(id *)arg2;
+ (id)unpackFileSliceResponseWithData:(id)arg1 error:(id *)arg2;
+ (id)packFileSliceWithUploadPacket:(id)arg1 offset:(long long)arg2 sliceData:(id)arg3 error:(id *)arg4;
+ (void)convertPacket:(id)arg1 andControlData:(id)arg2 toFileControlReq:(id)arg3 needRedirect:(_Bool)arg4 error:(id *)arg5;
+ (id)unpackOneControlResponseWithData:(id)arg1 error:(id *)arg2;
+ (id)unpackBatchControlResponseWithData:(id)arg1 error:(id *)arg2;
+ (id)packOneControlPacket:(id)arg1 needRedirect:(_Bool)arg2 error:(id *)arg3;
+ (id)packBatchControlPacketWithUploadPackets:(id)arg1 needRedirect:(_Bool)arg2 error:(id *)arg3;
+ (id)dataWithoutPUDHeaderFromData:(id)arg1;
+ (CDStruct_a53ae8cd)parsePDUHeaderWithData:(id)arg1;
+ (id)packPDUHeaderWithData:(id)arg1 cmd:(long long)arg2;

@end

