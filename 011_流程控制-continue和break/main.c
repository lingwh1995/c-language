#include <stdio.h>

 /**
  * break����
  *  ������ǰѭ��
  */
void BreakTest() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("i = %d\n", i);
    }
}


/**
 * continue����
 *  ����ʹ��continue
 */
void ContinueTest1() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("i = %d\n", i);
    }
}


/**
 * continue����
 *  ����ʹ��continue,ע��i++��λ��
 */
void ContinueTest2() {
    for (int i = 0; i < 10; ) {
        i++;
        if (i == 5) {
            printf("��ѭ��...\n");
            continue;
        }
        printf("i = %d\n", i);
    }
}


/**
 * continue����
 *  ��forѭ����������ǰѭ��ʵ����������forѭ���ĵ��������ʽ��,
 *      ���Կ�����Ч����break��ͬ,��ʵ�����ǽ�������ѭ����
 *  ע��i++��λ��
 *
 */
void ContinueTest3() {
    for (int i = 0; i < 10; ) {
        if (i == 5) {
            printf("��ѭ��...\n");
            continue;
        }
        i++;
        printf("i = %d\n", i);
    }
}


/**
 * continue����
 *  ����ʹ��continue
 */
void ContinueTest4() {
    int n = 0;
    while (n < 10) {
        n++;
        if (n == 5) {
            continue;
        }
        printf("n = %d\n", n);
    }
}


/**
 * continue����
 *  ��forѭ����������ǰѭ��ʵ����������whileѭ���ı��ʽ��,
 *  ���Կ�����Ч����break��ͬ,����ʵ��������ѭ��
 *
 */
void ContinueTest5() {
    int m = 0;
    while (m < 10) {
        if (m == 5) {
            printf("��ѭ��...\n");
            continue;
        }
        m++;
        printf("m = %d\n", m);
    }
}


int main() {
    //BreakTest();
    //ContinueTest1();
    //ContinueTest2();
    //ContinueTest3();
    //ContinueTest4();
    //ContinueTest5();
    return 0;
}
