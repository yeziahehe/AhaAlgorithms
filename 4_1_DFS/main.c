//
//  main.c
//  4_1_DFS
//
//  Created by 叶帆 on 16/1/30.
//  Copyright © 2016年 Suzhou Coryphaei Information&Technology Co., Ltd. All rights reserved.
//

/**
 *  第四章主要讲搜索。
 *  首先介绍的是深度优先搜索算法（Depth First Search），算法的核心在于从出发位置找到起始点后先遍历这个点下面的一个分支。
 *  DFS实现的主要思想是回溯法，通常是将所有的情况进行罗列，去除想要的最优解（？是否是寻找最优解），通常与图论有关系。
 *  DFS通常的实现思路是有模板的，如下：
    void dfs(int step) {
        //if 边界判断
        //尝试每一种可能性
        for(i = 0; i < n; i++) {
            //继续下一步
            dfs(step+1);
        }
    }
 */

#include <stdio.h>

int n, a[10], book[10];

void dfs(int step) {
    int i;
    //if 边界判断
    if (step > n) {
        for (int i = 1; i <= n; i++) {
            printf("%d", a[i]);
        }
        printf("\n");
    }
    //尝试每一种可能性
    for(i = 1; i <= n; i++) {
        //继续下一步
        if (book[i] == 0) {
            a[step] = i;
            book[i] = 1;
            dfs(step+1);
            book[i] = 0;
        }
    }
    return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    scanf("%d", &n);
    dfs(1);
    return 0;
}
