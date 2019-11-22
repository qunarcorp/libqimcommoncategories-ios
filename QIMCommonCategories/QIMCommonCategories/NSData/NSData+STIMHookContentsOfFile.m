//
//  NSData+HookContentsOfFile.m
//  qunarChatIphone
//
//  Created by 李露 on 2018/2/6.
//

#import "NSData+STIMHookContentsOfFile.h"

@implementation NSData (STIMHookContentsOfFile)

+ (instancetype)dataWithContentsOfFile:(NSString *)path {
    NSError *error = nil;
    if (path.length > 0) {
        return [NSData dataWithContentsOfFile:path options:NSDataReadingMappedIfSafe error:&error];
    } else {
        return nil;
    }
}

@end
