/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKTextViewWithLabelTextMetrics, UILabel;

@interface EKEventDetailTitleCell : EKEventDetailCell {
    UILabel *_dateView;
    EKTextViewWithLabelTextMetrics *_locationView;
    BOOL _observingLocaleChanges;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UILabel *_timeView;
    UILabel *_titleView;
    unsigned int _visibleItems;
}

- (id)_dateView;
- (id)_locationView;
- (id)_recurrenceView;
- (id)_statusView;
- (id)_timeView;
- (id)_titleView;
- (void)dealloc;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)setDateString:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTimeString:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)update;

@end
