#import <UIKit/UIKit.h>

/*
 The ALSCustomLockScreen view is our customized lock screen.
 It sits on top of the existing lock screen, which we still interact
 with for such purposes as forwarding passcodes so we don't have to handle them.
 */

@class ALSCustomLockScreenMask;

@interface ALSCustomLockScreen : UIView <UIScrollViewDelegate>

- (UIColor *)backgroundColor;
- (float)backgroundColorAlpha;
- (void)failedEntry;
- (ALSCustomLockScreenMask *)filledOverlayMask;
- (void)resetView;
- (void)setButtonTapped:(void (^)(int index))buttonTapped;
- (void)setClockToDefaultPosition;
- (void)setClockToPosition:(CGPoint)position;
- (void)setDisplayLinkPaused:(BOOL)paused;
- (void)setKeyboardHeight:(CGFloat)keyboardHeight;
- (void)setPasscodeEntered:(void (^)(NSString *passcode))passcodeEntered;
- (void)setSecurityType:(NSInteger)securityType;
- (BOOL)shouldColorBackground;
- (BOOL)shouldHideStatusBar;
- (BOOL)shouldShowWithNotifications;
- (void)updateScrollPercentage:(CGFloat)percentage;

@end
