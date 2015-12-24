//
//  main.c
//  1_2_BubbleSort
//
//  Created by 叶帆 on 15/12/24.
//  Copyright © 2015年 Suzhou Coryphaei Information&Technology Co., Ltd. All rights reserved.
//

/**
 *  冒泡排序 (Bubble Sort)
 *  原理：每次比较两个相邻的元素，如果它们的顺序错误就把它们交换过来。
 *  双层嵌套循环，时间复杂度 O(N*N)。
 *  缺点：时间复杂度太高，算法题中对算法时间度有要求的时候不能用。
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count;//代表数组范围
    int number;//需要读入的数字
    int temp;//临时变量
    
    //读入length，代表输入的长度。
    printf("请输入需要排序的数字个数:");
    scanf("%d", &count);
    
    //读入
    int sortArray[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &number);
        sortArray[i] = number;
    }
    
    //排序
    for (int i = 0; i < count-1; i++) {
        for (int j = i; j < count; j++) {
            if (sortArray[i] > sortArray[j]) {
                temp = sortArray[i];
                sortArray[i] = sortArray[j];
                sortArray[j] = temp;
            }
        }
    }
    
    //输出
    printf("排序后的数组为\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", sortArray[i]);
    }
    
    return 0;
}
