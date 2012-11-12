//
//  TblType.h
//  MySnippet
//
//  Created by Christoffer Sandberg on 2012-11-05.
//  Copyright (c) 2012 datab. All rights reserved.
//

#import <CoreData/CoreData.h>

@class TblSnippets;

@interface TblType : NSManagedObject

@property (nonatomic, retain) NSString *typeTitle;
@property (nonatomic, retain) NSSet *relationship;

@end

@interface TblType (CoreDataGeneratedAccessors)

-(void)addRelationshipObject:(TblSnippets *)value;
-(void)removeRelationshipObject:(TblSnippets *)value;
-(void)addRelationship:(NSSet *)values;
-(void)removeRelationship:(NSSet *)values;

@end
