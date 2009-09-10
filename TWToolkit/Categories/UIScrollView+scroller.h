//
//  UIScrollView+scroller.h
//  Four80
//
//  Created by Sam Soffes on 6/29/09.
//  Copyright 2009 Sam Soffes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (scroller)

- (struct CGPoint)offset;
- (void)scrollPointVisibleAtTopLeft:(struct CGPoint)fp8;
- (void)setScrollerIndicatorSubrect:(struct CGRect)fp8;
- (struct CGRect)scrollerIndicatorSubrect;
- (void)setAdjustForContentSizeChange:(BOOL)fp8;
- (BOOL)adjustForContentSizeChange;
- (void)setAllowsRubberBanding:(BOOL)allowsRubberBanding;

@end
