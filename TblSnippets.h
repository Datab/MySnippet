//
//  TblSnippets.h
//  MySnippet
//
//  Created by Christoffer Sandberg on 2012-11-05.
//  Copyright (c) 2012 datab. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface TblSnippets : NSManagedObject
@property (nonatomic, retain) NSString *snippetContent;
@property (nonatomic, retain) NSString *snippetDescription;
@property (nonatomic, retain) NSString *snippetTitle;
@property (nonatomic, retain) NSManagedObject *relationship;
@end
