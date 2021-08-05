//
//  NSString+JSString.h
//  JSEDU
//
//  Created by 金石 on 2018/6/14.
//  Copyright © 2018年 孔祥刚. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JSString)
/**
 为字符串设置不同格式的字体,颜色
 
 @param identifyStringArray 需要改变的字符串
 @param colors 颜色
 @param fonts 字体
 @return 格式化后的字符串
 */
- (NSMutableAttributedString *)setAttributedWithIdentifyStringArray:(NSArray *)identifyStringArray colors:(NSArray *)colors fonts:(NSArray *)fonts;



/**
 设置行间距

 @param lineSpace 行间距
 @return 格式化后的字符串
 */
- (NSAttributedString *)getAttributedStringWithLineSpace:(CGFloat)lineSpace;







/**
 根据字符串内容和字体,高度获取宽度
 
 @param font 字体
 @param height 高度
 @return 宽度
 */
- (CGFloat)getStringWidthWithFont:(UIFont *)font height:(CGFloat)height;


/**
 根据字符串内容和字体，宽度获取高度

 @param font 字体
 @param width 宽度
 @return 高度
 */
- (CGFloat)getStringHeightWithFont:(UIFont *)font width:(CGFloat)width;




#pragma mark -- 首字符是否是数字
/**
 首字符是否是数字

 @return bool
 */
- (BOOL)firstIsNumber;



#pragma mark -- 是否是数字
/**
 是否是数字

 @return bool
 */
- (BOOL)isNumber;



#pragma mark -- 是否是汉字
/**
 是否是汉字
 
 @return bool
 */
- (BOOL)isChinese;


#pragma mark -- 是否包含数字
/**
 是否包含数字

 @return bool
 */
- (BOOL)isStringContainNumber;



#pragma mark -- 是否包含字母
/**
 是否包含字母

 @return bool
 */
- (BOOL)isStringContainLetter;




#pragma mark -- 是否是手机号
/**
 是否是手机号

 @return bool
 */
- (BOOL)isMobilePhoneNumber;



#pragma mark -- base64编码
/**
 base64编码

 @return base64 string
 */
- (NSString *)base64Encode;



#pragma mark -- base64解码
/**
 base64解码

 @return string
 */
- (NSString *)base64decode;

+ (NSString*)getResultStrBySeverStr:(NSString*)targetStr;

+ (NSString*)getStandardTimeStrByServiceStr:(NSString*)timeStr;

+ (NSString*)getStandardMinuteTimeStrByServiceStr:(NSString*)timeStr;

+ (NSString *)getMMSSFromSS:(NSString *)totalTime;

+ (NSString*)getTargetOrderNumberInsertSpaceByFour:(NSString*)orderNumber;

// 2019-12-01-> 2019/12/01
+ (NSString *)getTargetTimeStr:(NSString*)timeStr;
/**
 2019/12/01-> 2019-12-01
 */
+ (NSString *)getTargetHorionzontalLineTimeStr:(NSString*)timeStr;
/**
 影藏手机号中间4位
 */
+ (NSString*)getHiddenMobileStr:(NSString*)numberStr;

/**
 需要设置文字行间距时获取label高度
 */
- (CGFloat)getLabelHeightWithLineSpace:(NSDictionary*)attributeDict labelWidth:(CGFloat)width;

/**
 *  将阿拉伯数字转换为中文数字
 */
+(NSString *)translationArabicNum:(NSInteger)arabicNum;
/**
 价钱处理 1，如果是.0形式直接q去除小数点， 2， 有小数点.12等形式保留一位，3,没有则直接返回
 */
+ (NSString*)getDealedPriceByStr:(NSString*)priceStr;
/**
 获取富文本高度
 */
+ (CGFloat)getAttributeStringHeightWithFont:(CGFloat)width attributeStr:(NSAttributedString*)attributeStr;


/**
 精确计算label富文本高度
 courseNameAttStr：内容
 labelWidth：label宽度
 */
+ (CGFloat)calculateAttributeTitleHeight:(NSAttributedString*)courseNameAttStr width:(CGFloat)labelWidth textFont:(UIFont*)font;

/**
 精确计算普通文本高度
 */

+ (CGFloat)calculateNomalTitleHeight:(NSString*)titleStr width:(CGFloat)labelWidth textFont:(UIFont*)font;

//获取距离开课时间前三天后的时间 传入2019-12-09  得到 2019-12-06  对应的时间戳 ，
+ (NSString*)getOpenClassTimeBeforeThreeDays:(NSString*)openClassTimeStr;

/**
 去除文字中的\r.\n
 */
+ (NSString*)filterSpecialCharacterInString:(NSString*)targetStr;

/**
 获取广告标识符
 */
+ (NSString*)getIdfaStr;

//获取时间戳字符串
+ (NSString *)stringWithDate:(NSDate *)date;


/**
得到当前时间截止到天的字符串格式为：2019-10-09
 @return return value description
 */
+ (NSString*)getTargetCurrentTimeStr;


/**
 计算富文本高度

 @param content content description
 @param mFontSize mFontSize description
 @param space space description
 @param width width description
 @return return value description
 */
+ (NSInteger)calculateAttributeStrHeight:(NSString *)content withTextFontSize:(CGFloat)mFontSize lineSpace:(CGFloat)space titleWidth:(CGFloat)width;


/**
 json字符串转字典

 @param jsonStr jsonStr description
 @return return value description
 */
+ (NSDictionary *)convertToDictionary:(NSString *)jsonStr;

//根据总节次和有效节次获取显示文字
+(NSString *)getClassNumStrWithTotalNum:(NSInteger)totalNum withEffectiveNum:(NSInteger)effectiveNum;
//根据后台返回字段获取显示文字
+(NSString *)getClassNumStrWithTotalNum:(NSString *)totalNum withEffectiveNum:(NSString *)effectiveNum withIsComplete:(Boolean)isComplete;
//对字符串进行MD5加密
-(NSString *)md5HashToLower32Bit;

/// 获取价格字符串，保留两位小数并删除末尾0的字符串
-(NSString*)getPriceStr;
/**
 生成一个富文本，它的首位是个图片
 
 @param image 首位图片对象
 @return 首位是图片的富文本
 */
-(NSMutableAttributedString *)getFirstImageAttributedStringWithImage:(UIImage *)image withImageSize:(CGSize)imageSize withTopOffSet:(CGFloat)top;
/**
 生成一个富文本，它的某些位置是个图片
 @param images 图片对象数组
 @param imageSizeValues 图片大小数组
 @param tops 图片上部偏移
 @param indexs 图片位置
 @return 富文本
 */
-(NSMutableAttributedString *)inSertImageAttributedStringWithImages:(NSArray<UIImage *> *)images withImageSizeValues:(NSArray <NSValue *>*)imageSizeValues withTopOffSets:(NSArray <NSNumber *>*)tops withIndexs:(NSArray <NSNumber *>*)indexs;


/// 每隔4个字符插入一个空格
/// @param str str description
+ (NSString *)jointWithStringBySpacePerFour:(NSString *)str;




@end
