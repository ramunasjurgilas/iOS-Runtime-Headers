/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace> {
    NSDictionary *_dyldLoadLocations;
    int _symbolicateSpinLock;
    NSArray *_symbolicatedBacktraceStrings;
    void **_unsymbolicatedBacktrace;
    int _unsymbolicatedBacktraceLength;
}

- (void)_initWithBacktrace:(void**)arg1 length:(int)arg2 ignoreTopEntries:(int)arg3 symbolicateImmediately:(BOOL)arg4;
- (void)dealloc;
- (id)dyldLoadLocations;
- (id)init;
- (id)initIgnoringTopEntries:(int)arg1 symbolicateImmediately:(BOOL)arg2;
- (id)initWithExistingBacktrace:(void**)arg1 length:(int)arg2 symbolicateImmediately:(BOOL)arg3;
- (id)initWithSymbolicatedBacktraceStrings:(id)arg1 dyldLoadLocations:(id)arg2;
- (void)symbolicate;
- (id)symbolicatedBacktraceStrings;

@end
