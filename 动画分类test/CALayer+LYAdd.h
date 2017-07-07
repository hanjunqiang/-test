/**
 *  注意这里的动画效果，
 *  如果放在viewdidload中可能不会有效果，
 *  应该放在按钮或者其他响应事件中调用来进行动画效果
 *  
 *  这里的暂停和恢复方法没有演示成功，待定！
 */

/*                  演示代码
 *      CALayer *aa=[[CALayer alloc] init];
        CATransition *animation = [aa transitionWithAnimType:LYTransitionAnimTypeRamdom subType:LYTransitionSubtypesFromLeft curve:LYTransitionCurveRamdom duration:3];
        [imageView.layer addAnimation:animation forKey:@"hehe"];//key随便填写
 */

#import <QuartzCore/QuartzCore.h>

/**
 *  动画类型
 */
typedef NS_ENUM(NSUInteger, LYTransitionAnimType) {
    LYTransitionAnimTypeRippleEffect,     // 水波
    LYTransitionAnimTypeSuckEffect,       // 吸走
    LYTransitionAnimTypePageCurl,         // 翻开书本
    LYTransitionAnimTypeOglFlip,          // 正反翻转
    LYTransitionAnimTypeCube,             // 正方体
    LYTransitionAnimTypeReveal,           // push推开
    LYTransitionAnimTypePageUnCurl,       // 合上书本
    fade,                                 //淡化效果
    cameraIrisHollowOpen   ,             //相机镜头打开效果（其实和fade相似）
    cameraIrisHollowClos   ,             //相机镜头关闭效果
    LYTransitionAnimTypeRamdom,           // 随机

};

/**
 *  动画方向
 */
typedef NS_ENUM(NSUInteger, LYTransitionSubType) {
    LYTransitionSubtypesFromTop,        // 从上
    LYTransitionSubtypesFromLeft,       // 从左
    LYTransitionSubtypesFromBotoom,     // 从下
    LYTransitionSubtypesFromRight,      // 从右
    LYTransitionSubtypesFromRamdom,     // 随机
    
    
    

};

/**
 *  动画曲线
 */
typedef NS_ENUM(NSUInteger, LYTransitionCurve) {
    LYTransitionCurveDefault,           // 默认
    LYTransitionCurveEaseIn,            // 缓进
    LYTransitionCurveEaseOut,           // 缓出
    LYTransitionCurveEaseInEaseOut,     // 缓进缓出
    LYTransitionCurveLinear,            // 线性
    LYTransitionCurveRamdom,            // 随机
};


@interface CALayer (LYAdd)

#pragma mark - 动画相关
///=============================================================================
/// @name 动画相关
///=============================================================================

/**
 *  暂停动画
 */
- (void)pauseAnimate;

/**
 *  恢复暂停动画
 */
- (void)resumeAnimate;

/**
 *  转场动画
 *
 *  @param animType 转场动画类型
 *  @param subtype  转动动画方向
 *  @param curve    转动动画曲线
 *  @param duration 转动动画时长
 *
 *  @return 转场动画实例
 */
- (CATransition *)transitionWithAnimType:(LYTransitionAnimType)animType subType:(LYTransitionSubType)subType curve:(LYTransitionCurve)curve duration:(CGFloat)duration;


@end
