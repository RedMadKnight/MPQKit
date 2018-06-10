//
//  NSArrayAdditions.h
//  MPQKit
//
//  Created by Jean-François Roy on 13/10/2006.
//  Copyright 2006 MacStorm. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSArray (ListfileAdditions)
+ (instancetype)arrayWithListfileData:(NSData*)listfileData;
@end

@interface NSMutableArray (ListfileAdditions)
+ (instancetype)arrayWithListfileData:(NSData*)listfileData;
- (instancetype)initWithListfileData:(NSData*)listfileData;
- (void)sortAndDeleteDuplicates;
@end
