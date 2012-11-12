//
//  typeController.m
//  MySnippet
//
//  Created by Christoffer Sandberg on 2012-11-05.
//  Copyright (c) 2012 datab. All rights reserved.
//

#import "typeController.h"

@implementation typeController

- (IBAction)createGroup:(id)sender
{
    // Create the object
    id p = [self newObject];
    // Add it to the content array of ’carsController’
    [self addObject:p];
    // Re-sort (in case the user has sorted a column)
    [self rearrangeObjects];
    // Get the sorted array
    NSArray *a = [self arrangedObjects];
    // Find the object just added
    NSUInteger row = [a indexOfObjectIdenticalTo:p];
    NSLog(@"starting edit of %@ in row %lu", p, row);
    // Begin the edit in the first column
    [groupTableView editColumn:0
					  row:row
				withEvent:nil
				   select:YES];
}

@end
