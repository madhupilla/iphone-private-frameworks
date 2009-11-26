/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask {
	NSString* _messageServerID;
	NSString* _attachmentName;
}
// inherited: -(void)finishWithError:(id)error;
// inherited: -(id)requestBody;
// inherited: -(BOOL)expectsWBXML;
// inherited: -(int)connectionActionForResponse:(id)response;
// inherited: -(int)commandCode;
// inherited: -(id)parameterData;
// inherited: -(id)command;
// inherited: -(id)contentType;
// inherited: -(BOOL)processContext:(id)context;
-(id)attachmentName;
-(id)messageID;
-(id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;
// inherited: -(void)dealloc;
// inherited: -(BOOL)shouldLogIncomingData;
@end
