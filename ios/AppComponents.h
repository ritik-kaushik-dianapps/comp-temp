
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAppComponentsSpec.h"

@interface AppComponents : NSObject <NativeAppComponentsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface AppComponents : NSObject <RCTBridgeModule>
#endif

@end
