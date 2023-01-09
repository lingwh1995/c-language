#include <stdio.h>

/**
 * ѭ����ӡa-g
 *  ��ʹ��ȡģʵ��
 */
void PrintAToG1() {
    char str[] = "abcdefg";
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = 0; j < n; j++) {
            printf("%c", str[k]);
            k = k + 1;
            if (k == n) {
                k = 0;
            }
        }
        printf("\n");
    }
}

/**
 * ѭ����ӡa-g
 *  ʹ��ȡģʵ��
 */
void PrintAToG2() {
    char str[] = "abcdefg";
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = 0; j < n; j++) {
            printf("%c", str[k]);
            k = (k + 1) % n;
        }
        printf("\n");
    }
}

/**
 * ��ѭ��
 */
void DeadLoopTest1() {
    for (;;) {
        printf("��ѭ��\n");
    }
}

/**
 * ��ѭ��
 */
void DeadLoopTest2() {
    while (1) {
        printf("��ѭ��\n");
    }
}


int main() {
    //PrintAToG1();
    //PrintAToG2();
    //DeadLoopTest1();
    DeadLoopTest2();
    return 0;
}