//
//  ORSTwitterEngine+Timeline.h
//  Twitter Engine
//
//  Created by Nicholas Toumpelis on 12/04/2009.
//  Copyright 2008-2009 Ocean Road Software, Nick Toumpelis.
//
//  Version 0.7.1
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy 
//  of this software and associated documentation files (the "Software"), to 
//  deal in the Software without restriction, including without limitation the 
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//  sell copies of the Software, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in 
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
//  IN THE SOFTWARE.

#import <Cocoa/Cocoa.h>
#import "ORSTwitterEngine.h"

@interface ORSTwitterEngine ( TimelineMethods ) 

- (NSArray *) publicTimeline;
- (NSArray *) publicTimelineSinceStatus:(NSString *)identifier;

- (NSArray *) friendsTimeline;
- (NSArray *) friendsTimelineSinceStatus:(NSString *)identifier;
- (NSArray *) friendsTimelineSinceDate:(NSString *)date;  //unofficial
- (NSArray *) friendsTimelineWithCount:(NSString *)count; 
- (NSArray *) friendsTimelineAtPage:(NSString *)page;

- (NSArray *) userTimeline;
- (NSArray *) userTimelineSinceStatus:(NSString *)identifier;
- (NSArray *) userTimelineWithCount:(NSString *)count;
- (NSArray *) userTimelineSinceDate:(NSString *)date;
- (NSArray *) userTimelineAtPage:(NSString *)page;
- (NSArray *) userTimelineForUserWithID:(NSString *)identifier;
- (NSArray *) userTimelineForUserWithID:(NSString *)identifier 
								  count:(NSString *)count;
- (NSArray *) userTimelineForUserWithID:(NSString *)identifier 
							  sinceDate:(NSString *)date;
- (NSArray *) userTimelineForUserWithID:(NSString *)identifier
							sinceStatus:(NSString *)statusID;
- (NSArray *) userTimelineForUserWithID:(NSString *)identifier
								 atPage:(NSString *)page;

- (NSArray *) mentions;
- (NSArray *) mentionsSinceStatus:(NSString *)identifier;
- (NSArray *) mentionsAtPage:(NSString *)page;
- (NSArray *) mentionsSinceDate:(NSString *)date;

@end