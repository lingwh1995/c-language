#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

/**
 * �������time.h
 */

 /**
  * α�����,ÿ�����ɵ����������ͬ��
  */
void GetRandomNumber1() {
    int r = rand();
    printf("r = %d\n", r);
    printf("������:\n");
    int i = 0;
    while (1) {
        scanf("%d", &i);
        if (i > r) {
            printf("��´���,��ǰ����ֵ:%d\n", i);
        }
        else if (i < r) {
            printf("���С��,��ǰ����ֵ:%d\n", i);
        }
        else {
            printf("�����ȷ��,��ǰ����ֵ:%d\n", i);
            break;
        }
    }
}


/**
 * ���������,ÿ�����ɵ����������ͬ��
 */
void GetRandomNumber2() {
    srand((unsigned)time(NULL));
    int r = rand() % 10;
    printf("r = %d\n", r);
    printf("������:\n");
    int i = 0;
    while (1) {
        scanf("%d", &i);
        if (i > r) {
            printf("��´���,��ǰ����ֵ:%d\n", i);
        }
        else if (i < r) {
            printf("���С��,��ǰ����ֵ:%d\n", i);
        }
        else {
            printf("�����ȷ��,��ǰ����ֵ:%d\n", i);
            break;
        }
    }
}


/**
 * ����10�������
 */
void GetRandomNumber3() {
    //��ʼ�������
    srand((unsigned)time(NULL));
    //��ӡ��10�������
    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand());
    }
}


/**
 * ����һ��0-1�������
 */
void GetRandomNumber4() {
    //��ʼ�������
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", rand() / 32767.0);
    }
}


/**
 * ����һ��1-10�������
 * ԭ��:
 *  ��λ��:
 *      10022 = 10 * 1002 + 2
 *      10022 % 10 = 2
 *  ��λ��:
 *      100022 = 10 * 10002 + 2
 *      100022 % 10 = 2
 *  ��100ȡ����Եõ����һλ��,���һλ���ķ�ΧΪ: 0-9,����  rand()+1 �ķ�Χ�� 0-10
 */
void GetRandomNumber5() {
    //��ʼ�������
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        int r = rand();
        printf("rand() = %d, r = %d\n", r, r % 10 + 1);
    }
}


/**
 * ����һ��1-100�������
 * ԭ��:
 *  ��λ��:
 *      10022 = 100 * 100 + 22
 *      10022 % 100 = 22
 *  ��λ��:
 *      100022 = 1000 * 100 + 22
 *      100022 % 100 = 22
 *  ��100ȡ����Եõ������λ��,�����λ���ķ�ΧΪ: 00-99,����  rand()+1 �ķ�Χ�� 00-100
 */
void GetRandomNumber6() {
    //��ʼ�������
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        int r = rand();
        printf("rand() = %d, r = %d\n", r, r % 100 + 1);
    }
}


int main() {
    //GetRandomNumber1();
    //GetRandomNumber2();
    //GetRandomNumber3();
    //GetRandomNumber4();
    //GetRandomNumber5();
    GetRandomNumber6();
    return 0;
}
