#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * ���֧����
 *  ֻ��ƥ���д��ĸ
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
        printf("�������ݲ��Ϸ�.....\n");
        break;
    }
}

/*
 * ���֧����
 *  ƥ���Сд��ĸ
 */
void MultipleBranchTest2() {
    printf("please input grade (A B C D E F �� a b c d e)\n");
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
        printf("�������ݲ��Ϸ�.....\n");
        break;
    }
}

/*
 * ���֧����
 *  switch��Ƕ��ʹ��
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