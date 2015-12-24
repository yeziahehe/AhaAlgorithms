//
//  main.c
//  1_1_BucketSort
//
//  Created by 叶帆 on 15/12/24.
//  Copyright © 2015年 Suzhou Coryphaei Information&Technology Co., Ltd. All rights reserved.
//

/**
 *  桶排序（Bucket Sort）
 *  原理：建立需要排序范围长度的数组，初始化为0，代表出现的次数。
 *  将出现的数字放到对应数组下标的中，然后循环根据次数进行打印即可。
 *  输入m次，输出n次，时间复杂度 O(M+N)。
 *  缺点：空间浪费太大，如果范围很大，超过了整数的最大范围，就不能实现。
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int length;//代表数组范围
    int count;//代表读入n个数字
    int number;//代表读入的数字
    
    //读入length，代表输入的长度。
    printf("请输入数字的范围长度:");
    scanf("%d", &length);
    int sortArray[length];
    
    //初始化数组为0，代表该数字出现0次，数组长度为需要排序的范围0~100。
    for (int i = 0; i <= length; i++) {
        sortArray[i] = 0;
    }
    
    //读入count，代表要输入多个数字进行排序。
    printf("请输入需要排序的数字个数:");
    scanf("%d", &count);
    
    //读入n个数字，放到对应的index下面
    printf("请输入需要排序的所有数字，以空格隔开\n");
    for (int i = 0; i < count; i++) {
        scanf("%d", &number);
        sortArray[number] += 1;
    }
    
    //输出
    printf("排序后的数组为\n");
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < sortArray[i]; j++) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
