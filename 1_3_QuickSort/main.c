//
//  main.c
//  1_3_QuickSort
//
//  Created by 叶帆 on 15/12/25.
//  Copyright © 2015年 Suzhou Coryphaei Information&Technology Co., Ltd. All rights reserved.
//

/**
 *  快速排序 (Quick Sort)
 *  原理：利用二分法的思想，找到基准数，每一轮将这一轮的基准数归位，直到所有的数都归位为止。
 *  实现：利用左右哨兵，默认从小到大排列的，基准数在哪边就让另一边的哨兵先出发。
 *  双层嵌套循环，时间复杂度 O(NLogN)。
 *  在算法题中使用较多，是最常用的排序方法，建议能够理解并牢记，手写和代码都实现一遍。
 */
#include <stdio.h>

void sort(int *a, int left, int right) {
    // 递归到所有的左边到右边
    if (left > right) {
        return;
    }
    
    // 
    int i = left;
    int j = right;
    int key = a[left];
    int temp;
    
    while (i < j) {
        
        while (i < j && key <= a[j]) {
            j--;
        }
        while (i < j && key >= a[i] ) {
            i++;
        }
        
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
    a[left] = a[i];
    a[i] = key;
    sort(a, left, i - 1);
    sort(a, i + 1, right);
    return;
}

int main(int argc, const char * argv[]) {
    // 输入
    int n;
    printf("请输入需要排序的个数：\n");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // 快速排序
    sort(a, 0, n-1);
    
    // 输出
    printf("请输出排序后的结果：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
