//
//  UITextField+Ext.m
//  Excellence
//
//  Created by DaShuMall on 2017/6/22.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import "UITextField+Ext.h"

@implementation UITextField (Ext)

- (BOOL)input:(NSString *)number limit:(NSString *)limit {
    BOOL res = YES;
    NSCharacterSet* tmpSet = [NSCharacterSet characterSetWithCharactersInString:limit];
    int i = 0;
    while (i < number.length) {
        NSString * string = [number substringWithRange:NSMakeRange(i, 1)];
        NSRange range = [string rangeOfCharacterFromSet:tmpSet];
        if (range.length == 0) {
            res = NO;
            break;
        }
        i++;
    }
    return res;
}

- (void)substringToIndex:(NSInteger)index {
    if (self.text.length > index) {
        self.text = [self.text substringToIndex:index];
    }
}

- (void)setNumbersKeyboard {
    self.keyboardType = UIKeyboardTypeNumberPad;
}

- (void)setNumbersPunctuationKeyBoard {
    self.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
}

@end


@implementation UITextField (ExtentRange)

- (NSRange)selectedRange {
    UITextPosition *beginning = self.beginningOfDocument;
    UITextRange *selectedRange = self.selectedTextRange;
    UITextPosition *selectionStart = selectedRange.start;
    UITextPosition *selectionEnd = selectedRange.end;
    
    const NSInteger location = [self offsetFromPosition:beginning toPosition:selectionStart];
    const NSInteger length = [self offsetFromPosition:selectionStart toPosition:selectionEnd];
    
    return NSMakeRange(location, length);
}

- (void)setSelectedRange:(NSRange)range {
    UITextPosition *beginning = self.beginningOfDocument;
    UITextPosition *startPosition = [self positionFromPosition:beginning offset:range.location];
    UITextPosition *endPosition = [self positionFromPosition:beginning offset:range.location + range.length];
    UITextRange *selectionRange = [self textRangeFromPosition:startPosition toPosition:endPosition];
    [self setSelectedTextRange:selectionRange];
}

@end
