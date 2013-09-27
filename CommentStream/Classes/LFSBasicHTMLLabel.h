//
//  LFSBasicHTMLLabel.h
//  CommentStream
//
//  Created by Eugene Scherba on 9/20/13.
//  Copyright (c) 2013 Livefyre. All rights reserved.
//

#import <OHAttributedLabel/OHAttributedLabel.h>

@interface LFSBasicHTMLLabel : OHAttributedLabel <OHAttributedLabelDelegate>

- (void)setHTMLString:(NSString *)html;
@property (nonatomic, assign) CGFloat lineSpacing;

@end
