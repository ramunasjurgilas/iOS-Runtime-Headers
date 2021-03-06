/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {
    NSRecursiveLock *_registrationLock;
    NSMutableDictionary *_rootLocationToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenter;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
}

+ (void)initialize;
+ (id)sharedSwitchboard;
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2;

- (void)_removeFilePresenter:(id)arg1;
- (void)addEntryForRootLocation:(id)arg1 andPeerID:(id)arg2;
- (void)addEntryToPreviousEntries:(id)arg1;
- (BOOL)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)entryForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)init;
- (void)registerUbiquitizedPersistentStore:(id)arg1 forLocalPeerID:(id)arg2;
- (void)releaseAllEntriesForRootLocation:(id)arg1 andPeer:(id)arg2;
- (void)removeEntryFromPreviousEntries:(id)arg1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (void)unregisterCoordinator:(id)arg1;
- (void)unregisterPersistentStore:(id)arg1;

@end
