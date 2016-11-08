//
//  NSDate+MKDateUtils.h
//  MKCommons
//
//  Created by Michael Kuck on 6/8/14.
//  Copyright (c) 2014 Michael Kuck. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MKDateUtils)

+ (NSDate *)dateFromString:(NSString *)dateString format:(NSString *)dateFormat;

- (NSDate *)dateByMatchingTimeComponentsFromDate:(NSDate *)date;
- (NSDate *)dateByMatchingDateComponentsFromDate:(NSDate *)date;
- (NSDate *)dateByStrippingTimeZone;
- (NSDate *)dateBySettingTimeZone;
- (NSDate *)dateBySettingTimeZone:(NSTimeZone *)timeZone;
- (NSDate *)dateByRemovingTimeComponents;
- (NSDate *)dateByRemovingSeconds;
- (NSString *)stringFromDateWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle;
- (NSString *)stringFromDateWithTimeZone:(NSTimeZone *)timeZone dateStyle:(NSDateFormatterStyle)dateStyle
                               timeStyle:(NSDateFormatterStyle)timeStyle;
- (NSString *)stringFromDateWithFormat:(NSString *)format;
- (NSString *)stringFromDate;
- (BOOL)isBeforeDate:(NSDate *)date;
- (BOOL)isAfterDate:(NSDate *)date;

- (NSInteger)timeDifferenceInDaysToDate:(NSDate *)date;

- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;

@end
