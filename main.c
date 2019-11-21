// 各种工具的使用都不是编程语言的本质，但是记住这些工具的使用是我们的最终目的，结果上也唤醒了我们对编程语言本质的记忆。

#include <stdio.h>

#define LOWER 0
#define HIGH 10
#define OUT 0
#define IN 1

int main()
{
    long c, line_count, word_count, char_count, state;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            line_count += 1;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            word_count += 1;
        }
        char_count += 1;
    }

    printf("%ld %ld %ld", line_count, word_count, char_count); // 最基本的字符串遍历，稍作修改就能成为各种有用的程序
    return 0;
}
