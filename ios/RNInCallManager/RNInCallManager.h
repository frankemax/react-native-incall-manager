//
//  RNInCallManager.h
//  RNInCallManager
//
//  Created by Ian Yu-Hsun Lin (@ianlin) on 05/12/2017.
//  Copyright © 2017 zxcpoiu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CallKit/CallKit.h>
#import <Intents/Intents.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNInCallManager : RCTEventEmitter <RCTBridgeModule, AVAudioPlayerDelegate>

@end
