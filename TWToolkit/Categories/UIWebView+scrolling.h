//
//  UIWebView+scrolling.h
//  Four80
//
//  Created by Sam Soffes on 6/22/09.
//  Copyright 2009 Sam Soffes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWebView (scrolling)

- (UIScrollView *)scroller;
- (void)scrollRectToVisible:(CGRect)rect animated:(BOOL)animated;
- (void)scrollingEnabled:(BOOL)enabled;

@end
