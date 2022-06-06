//
//  PostCell.h
//  instagram-obj-c
//
//  Created by Chizaram Chibueze on 6/5/22.
//

#import <UIKit/UIKit.h>
#import "Post.h"

NS_ASSUME_NONNULL_BEGIN

@interface PostCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *photoView;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UILabel *captionLabel;


@property (strong, nonatomic) Post *post;

@end

NS_ASSUME_NONNULL_END
