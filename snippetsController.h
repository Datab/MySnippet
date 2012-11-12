//
//  snippetsController.h
//  MySnippet
//
//  Created by Christoffer Sandberg on 2012-11-05.
//  Copyright (c) 2012 datab. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface snippetsController : NSArrayController <NSTableViewDelegate, NSTableViewDataSource>

@property (nonatomic, strong) IBOutlet NSTableView *snippetTableView;
@property (nonatomic, strong) IBOutlet NSTextView *snippetTextView;

@end
