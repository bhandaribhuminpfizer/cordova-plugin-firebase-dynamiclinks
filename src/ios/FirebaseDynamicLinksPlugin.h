#import <Cordova/CDV.h>
#import "AppDelegate.h"

#import <Firebase/Firebase.h>

@interface FirebaseDynamicLinksPlugin : CDVPlugin

- (void)getDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)onDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)createDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)postDynamicLink:(FIRDynamicLink*) dynamicLink;

@property (nonatomic, copy) NSString* domainUriPrefix;
@property (nonatomic, copy) NSString* dynamicLinkCallbackId;
@property (nonatomic, retain) NSDictionary* lastDynamicLinkData;

@end
