/**
 @brief Global client constants declared here.

 @author Sergey Mamontov
 @since 4.0
 @copyright © 2009-2016 PubNub, Inc.
 */
#import <Foundation/Foundation.h>
#import "PNStructures.h"


#ifndef PNConstants_h
#define PNConstants_h

#pragma mark General information constants

// Stores client library version number
static NSString * const kPNLibraryVersion = @"4.5.1";

// Stores information about SDK codebase
static NSString * const kPNCommit = @"ea0d9c7f0e890c4db541378e9d84876b7a19db0a";

/**
 @brief  Stores reference on unique identifier which is used to identify \b PubNub client among other 
         \b PubNub products.
 
 @since 4.5.0
 */
static NSString * const kPNClientIdentifier = @"com.pubnub.pubnub-objc";

#if TARGET_OS_WATCH
    static NSString * const kPNClientName = @"ObjC-watchOS";
#elif __IPHONE_OS_VERSION_MIN_REQUIRED
    static NSString * const kPNClientName = @"ObjC-iOS";
#elif __MAC_OS_X_VERSION_MIN_REQUIRED
    static NSString * const kPNClientName = @"ObjC-MacOS";
#endif // __MAC_OS_X_VERSION_MIN_REQUIRED


#pragma mark - Default client configuration

static NSString * const kPNDefaultOrigin = @"pubsub.pubnub.com";

static NSTimeInterval const kPNDefaultSubscribeMaximumIdleTime = 310.0f;
static NSTimeInterval const kPNDefaultNonSubscribeRequestTimeout = 10.0f;

static BOOL const kPNDefaultIsTLSEnabled = YES;
static PNHeartbeatNotificationOptions const kPNDefaultHeartbeatNotificationOptions = PNHeartbeatNotifyFailure;
static BOOL const kPNDefaultShouldKeepTimeTokenOnListChange = YES;
static BOOL const kPNDefaultShouldRestoreSubscription = YES;
static BOOL const kPNDefaultShouldTryCatchUpOnSubscriptionRestore = YES;
#if __IPHONE_OS_VERSION_MIN_REQUIRED && !TARGET_OS_WATCH
static BOOL const kPNDefaultShouldCompleteRequestsBeforeSuspension = YES;
#endif // __IPHONE_OS_VERSION_MIN_REQUIRED && !TARGET_OS_WATCH
static BOOL const kPNDefaultShouldStripMobilePayload = YES;

#endif // PNConstants_h
