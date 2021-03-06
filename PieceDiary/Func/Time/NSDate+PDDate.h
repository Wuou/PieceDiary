//
//  NSDate+PDDate.h
//  PieceDiary
//
//  Created by moshuqi on 15/10/3.
//  Copyright © 2015年 msq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (PDDate)

- (NSInteger)yearValue;
- (NSInteger)monthValue;
- (NSInteger)dayValue;
- (NSInteger)weekdayValue;

- (NSDate *)beforeDays:(NSInteger)days;
- (NSDate *)afterDays:(NSInteger)days;
- (NSDate *)getSundayInThisWeek;

- (NSDate *)yesterday;
- (NSDate *)tomorrow;

@end
