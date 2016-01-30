//
//  main.c
//  2_4_LinkedList
//
//  Created by 叶帆 on 16/1/30.
//  Copyright © 2016年 Suzhou Coryphaei Information&Technology Co., Ltd. All rights reserved.
//

/**
 *  第二章介绍的是队列、栈以及链表。
 *  队列，显著特征FIFO，是一个特殊的线性结构，只允许在队列的首部（head）进行删除（delete），这个称之为出队；只允许在队列的尾部（tail）进行插入（insert），这个称之为入列。始终对head和tail来进行操作，当head == tail的时候，我们通常认为这种情况下队列为空。
 *  栈，显著特征FILO，是一个特殊的线性结构，只需要一个top来进行插入（insert）和删除（delete）操作。应用在：回文的校验、括号的匹配等。
 *  链表，动态的开辟空间，弥补了数组空间静态开辟的缺点。记得要释放free。一般用结构体来实现一个列表结构。链表的动态插入和删除操作非常的灵活。
    结构体的如下：
     struct node {
         int data;
         struct node *next;
     };
 */

#include <stdio.h>
#include <stdlib.h>//malloc(), free()

struct node {
    int data;
    struct node *next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct node *head, *p, *q, *t;
    int i, n, a;
    
    printf("请输入要输入的数的个数：");
    scanf("%d", &n);
    head = NULL;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            q->next = p;
        }
        q = p;
    }
    
    scanf("%d", &a);
    t = head;
    while (t != NULL) {
        if (t->next == NULL || t->next->data > a) {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = a;
            p->next = t->next;
            t->next = p;
            break;
        }
        t = t->next;
    }
    
    t = head;
    while (t != NULL) {
        printf("%d",t->data);
        t = t->next;
    }
    
    return 0;
}











