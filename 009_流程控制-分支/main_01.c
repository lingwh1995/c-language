#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * 多分支测试
 *  只能匹配大写字母
 */
void MultipleBranchTest1() {
    printf("please input grade (A B C D E F)\n");
    char grade = getchar();
    switch (grade) {
    case 'A':
        printf("score: 80 - 100\n");
        break;
    case 'B':
        printf("score: 60 - 80\n");
        break;
    case 'C':
        printf("score: 40 - 60\n");
        break;
    case 'D':
        printf("score: 20 - 40\n");
        break;
    case 'E':
        printf("score: 0 - 20\n");
        break;
    default:
        printf("输入数据不合法.....\n");
        break;
    }
}

/*
 * 多分支测试
 *  匹配大小写字母
 */
void MultipleBranchTest2() {
    printf("please input grade (A B C D E F 或 a b c d e)\n");
    char grade = getchar();
    switch (grade) {
    case 'A':
    case 'a':
        printf("score: 80 - 100\n");
        break;
    case 'B':
    case 'b':
        printf("score: 60 - 80\n");
        break;
    case 'C':
    case 'c':
        printf("score: 40 - 60\n");
        break;
    case 'D':
    case 'd':
        printf("score: 20 - 40\n");
        break;
    case 'E':
    case 'e':
        printf("score: 0 - 20\n");
        break;
    default:
        printf("输入数据不合法.....\n");
        break;
    }
}

/*
 * 多分支测试
 *  switch的嵌套使用
 */
void MultipleBranchTest3() {
    int a = 1;
    int b = 0;
    switch (a) {
    case -1:
        printf("a = -1\n");
        break;
    case 0:
        printf("a = 0\n");
        break;
    case 1:
        printf("a = 1\n");
        switch (b) {
        case -1:
            printf("b = -1\n");
            break;
        case 0:
            printf("b = 0\n");
            break;
        case 1:
            printf("b = -1\n");
            break;
        }
    }
}

int main() {
    //MultipleBranchTest1();
    //MultipleBranchTest2();
    MultipleBranchTest3();
    return 0;
}