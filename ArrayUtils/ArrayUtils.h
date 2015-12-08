//
//  ArrayUtils.h
//
//  Version 1.3
//
//  Created by Nick Lockwood on 01/03/2012.
//  Copyright (c) 2011 Charcoal Design
//
//  Distributed under the permissive zlib License
//  Get the latest version from here:
//
//  https://github.com/nicklockwood/ArrayUtils
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//

#import <Foundation/Foundation.h>


@interface NSArray<__covariant ObjectType> (ArrayUtils)

- (NSArray<ObjectType> *)arrayByRemovingObject:(ObjectType)object;
- (NSArray<ObjectType> *)arrayByRemovingObjectAtIndex:(NSUInteger)index;
- (NSArray<ObjectType> *)arrayByRemovingLastObject;
- (NSArray<ObjectType> *)arrayByRemovingFirstObject;
- (NSArray<ObjectType> *)arrayByInsertingObject:(ObjectType)object atIndex:(NSUInteger)index;
- (NSArray<ObjectType> *)arrayByReplacingObjectAtIndex:(NSUInteger)index withObject:(ObjectType)object;
- (NSArray<ObjectType> *)shuffledArray;
- (NSArray *)mappedArrayUsingBlock:(id (^)(ObjectType object))block;
- (NSArray<ObjectType> *)reversedArray;
- (NSArray<ObjectType> *)arrayByMergingObjectsFromArray:(NSArray<ObjectType> *)array;
- (NSArray<ObjectType> *)objectsInCommonWithArray:(NSArray<ObjectType> *)array;
- (NSArray<ObjectType> *)uniqueObjects;

@end


@interface NSMutableArray (ArrayUtils)

- (void)removeFirstObject;
- (void)shuffle;
- (void)reverse;
- (void)mergeObjectsFromArray:(NSArray *)array;
- (void)removeDuplicateObjects;

@end
