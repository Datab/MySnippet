//
//  typeController.h
//  MySnippet
//
//  Created by Christoffer Sandberg on 2012-11-05.
//  Copyright (c) 2012 datab. All rights reserved.
//

//test
#import <Cocoa/Cocoa.h>

@interface typeController : NSArrayController <NSTableViewDelegate> {
    IBOutlet NSTableView *groupTableView;
}

-(IBAction)createGroup:(id)sender;

@end
