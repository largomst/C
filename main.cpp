// 各种工具的使用都不是编程语言的本质，但是记住这些工具的使用是我们的最终目的，结果上也唤醒了我们对编程语言本质的记忆。

#include <stdio.h>

#define LOWER 0
#define HIGH 10
#define OUT 0
#define IN 1

void foo(int *&a, int*&b);

int main()
{
    // 这本书其实是按照螺旋式的方法来写的，先向大家展示基本用法，然后在后面的章节来逐渐深入。
    int a = 1;
    int b = 2;
    int *aPtr = &a;
    int *bPtr = &b;
    int *&arPtr = aPtr;
    int *&brPtr = bPtr;
    foo(arPtr,brPtr);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}

void foo(int *&a, int *&b){
    (*a)++;
    (*b)++;
    // int tem = *a;
    // *a = *b;
    // *b = tem;
}
