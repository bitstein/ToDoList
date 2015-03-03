//
//  ToDoItem.h
//  ToDoList
//
//  Created by Michael Goldstein on 3/3/15.
//  Copyright (c) 2015 Michael Goldstein. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
