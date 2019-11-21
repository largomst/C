// 各种工具的使用都不是编程语言的本质，但是记住这些工具的使用是我们的最终目的，结果上也唤醒了我们对编程语言本质的记忆。

#include <stdio.h>

#define LOWER 0
#define HIGH 10
#define OUT 0
#define IN 1

long power(int base, int n); // 先声明后使用

int main()
{
    // 这本书其实是按照螺旋式的方法来写的，先向大家展示基本用法，然后在后面的章节来逐渐深入。
    printf("%ld", power(10, 10));
    return 0;
}

long power(int base, int n)
{
    int i;
    long p = 1;
    for (i = 1; i <= n; i += 1)
    {
        p *= base;
    }
    return p;
}
