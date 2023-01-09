#include <stdio.h>

/*
 * C语言中的三种循环:
 *  while
 *  do while
 *  for
 */

/*
 * while循环测试
 */
void WhileTest() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        //如果屏蔽掉下面一行,则会是死循环
        i++;
    }
}

/*
 * do while循环测试
 */
void DoWhileTest() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}

/*
 * for循环测试
 */
void ForTest() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    printf("------------------\n");

    for (i = 0; i < 10; i++);
    {
        printf("%d\n", i);
    }
    printf("------------------\n");
}

int main() {
    //WhileTest();
    //DoWhileTest();
    ForTest();
}