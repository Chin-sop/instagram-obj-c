//
//  ComposeViewController.h
//  instagram-obj-c
//
//  Created by Chizaram Chibueze on 6/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ComposeViewControllerDelegate

@end

@interface ComposeViewController : UIViewController

@property (nonatomic, weak) id<ComposeViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
