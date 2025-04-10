#include <stdio.h>
#include <stdbool.h>

/**
 * 章节内容:
 *      C语言基本数据类型
 *          整型数据类型:char、short、int、long、long int、long long
 *          浮点型数据类型: float、double、long double
 *          bool: 0/false、 1、true
 *          空类型(不属于基本数据类型): void
 */

int main()
{
    printf("char类型所占字节大小: %d\n", (int)sizeof(char));
    printf("short类型所占字节大小: %d\n", (int)sizeof(short));
    printf("int类型所占字节大小: %d\n", (int)sizeof(int));
    printf("long类型所占字节大小: %d\n", (int)sizeof(long));
    printf("long int类型所占字节大小: %d\n", (int)sizeof(long int));
    printf("long long类型所占字节大小: %d\n", (int)sizeof(long long));
    printf("float类型所占字节大小: %d\n", (int)sizeof(float));
    printf("double类型所占字节大小: %d\n", (int)sizeof(double));
    printf("long double类型所占字节大小: %d\n", (int)sizeof(long double));
    // 使用bool类型,C99中要引用 stdbool.h
    printf("bool类型所占字节大小: %d\n", (int)sizeof(bool));
    return 0;
}