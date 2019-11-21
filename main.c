// 各种工具的使用都不是编程语言的本质，但是记住这些工具的使用是我们的最终目的，结果上也唤醒了我们对编程语言本质的记忆。

#include <stdio.h>

#define LOWER 0
#define HIGH 10

int main()
{
    int c;
    long count = 0;
    while ((c = getchar()) != EOF)
        count += 1;
    printf("%ld", count); // 最基本的字符串遍历，稍作修改就能成为各种有用的程序
    return 0;
}
