//
//  NSArray+PNAdditions.h
//  pubnub
//
//  Created by Sergey Mamontov on 05/14/13.
//
//

#import <Foundation/Foundation.h>


#pragma mark Category methods declaration

@interface NSArray (PNAdditions)


#pragma mark - Class methods

+ (NSArray *)pn_arrayWithVarietyList:(va_list)list;

/**
 @brief Check whether provided string correspond to \b PubNub cloud list entry index value or 
        not.
 
 @discussion \b PubNub cloud use own indices in format: -(sorting key?)!(time stamp) 
             (\b -!14169947586481522)
 
 @param string String against which check should be done.
 
 @return \c YES in case if provided string represent entry index.
 
 @since <#version number#>
 */
+ (BOOL)pn_isEntryIndexString:(NSString *)string;


#pragma mark - Instance methods

/**
 @brief Search for object with specified \b PubNub cloud list entry index.
 
 @param pnIndex \b PubNub entry index which should be found in list.
 
 @return \c nil in case if receiver array doesn't have entry with specified \c pnIndex.
 
 @since <#version number#>
 */
- (id)pn_objectAtIndex:(NSString *)pnIndex;

#pragma mark -


@end