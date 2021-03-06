//
//  PDQuestionEditViewController.h
//  PieceDiary
//
//  Created by moshuqi on 15/9/22.
//  Copyright © 2015年 msq. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PDPieceCellData;
@class PDQuestionEditViewController;

@protocol PDQuestionEditViewControllerDelegate <NSObject>

- (void)setQuestionContentWithText:(NSString *)text;
- (void)questionEditViewController:(PDQuestionEditViewController *)editViewController editQuestionContentText:(NSString *)text inDate:(NSDate *)date;

@end

@interface PDQuestionEditViewController : UIViewController

@property (nonatomic, retain) id<PDQuestionEditViewControllerDelegate> delegate;

- (id)initWithData:(PDPieceCellData *)data delegate:(id<PDQuestionEditViewControllerDelegate>)delegate;
- (NSString *)getOldQuestionContent;

@end
