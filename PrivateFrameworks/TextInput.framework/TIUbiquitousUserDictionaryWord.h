/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSNumber;

@interface TIUbiquitousUserDictionaryWord : TIUserDictionaryWord {
}

@property(retain) NSNumber * timestamp;

+ (id)predicateFilteringForSearchText:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1 shortcut:(id)arg2;
+ (id)sortDescriptors;

- (id)changeDescriptionKey:(id)arg1;
- (int)compareTimestamps:(id)arg1;
- (BOOL)hasChangesToTargetOrShortcut;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)updateTimestamp;

@end
