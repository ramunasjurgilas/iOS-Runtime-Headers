/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDate, NSDictionary;

@interface MPNowPlayingInfoCenter : NSObject {
    NSDictionary *_nowPlayingInfo;
    NSDate *_pushDate;
    NSDictionary *_queuedNowPlayingInfo;
}

@property(copy) NSDictionary * nowPlayingInfo;

+ (id)defaultCenter;

- (id)_init;
- (void)_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (id)init;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;

@end
