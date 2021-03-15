//
//  KochavaUI.h
//  KochavaUI
//
//  Created by John Bushnell on 9/21/20.
//  Copyright © 2020 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaUI_h
#define KochavaUI_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>
#if TARGET_OS_TV
#import <JavaScriptCore/JavaScriptCore.h>
#endif

#import <KochavaCore/KochavaCore.h>

#import <KochavaUI/KVAUIProduct.h>



#pragma mark - EXPORT



//! Project version number for KochavaUI.
FOUNDATION_EXPORT double KochavaUIVersionNumber;

//! Project version string for KochavaUI.
FOUNDATION_EXPORT const unsigned char KochavaUIVersionString[];



#endif



