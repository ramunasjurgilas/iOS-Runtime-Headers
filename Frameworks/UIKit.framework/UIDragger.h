/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSArray, UIImageView;



@interface UIDragger : NSObject 
{
    int (*_interpolator)();
    UIView *_target;
    id _delegate;
    SEL _action;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _stopLocation;
    double _duration;
    BOOL _showFinger;
    NSUInteger _port;
    NSArray *_modes;
    unsigned long long _startTimestamp;
    unsigned long long _stopTimestamp;
    unsigned long long _lastTimestamp;
    BOOL _waitingForSmoothScrolling;
    UIImageView *_fingerView;
}


- (id)init;
- (void)dealloc;
- (void)setInterpolation:(int (*)())arg1;
- (void)setTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStopLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)showFinger;
- (void)_postMouseEvent:(NSInteger)arg1 timestamp:(unsigned long long)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (double)_delayUntilNextEvent;
- (void)dragDidEnd;
- (void)_smoothScrollingWillStart:(id)arg1;
- (void)_smoothScrollingDidEnd:(id)arg1;
- (void)_stopDrag:(id)arg1;
- (void)_continueDrag:(id)arg1;
- (void)run;

@end