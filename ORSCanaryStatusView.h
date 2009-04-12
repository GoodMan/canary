//
//  ORSCanaryStatusView.h
//  Canary
//
//  Created by Nicholas Toumpelis on 12/04/2009.
//  Copyright 2009 Ocean Road Software. All rights reserved.
//
//  Version 0.7

#import <Cocoa/Cocoa.h>

@interface ORSCanaryStatusView : NSView {
	BOOL m_isSelected;
}

- (void) setSelected:(BOOL)flag;
- (BOOL) selected;

@end
