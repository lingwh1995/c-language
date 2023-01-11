#include <stdio.h>

/*
 * const��ָ��
 */

/**
 * ָ��Ϊ���Ե�ָ��
 * const��*���,��ʾָ���ֵ�ǳ���
 */
void PointerAndConstTest1() {
    int a = 10, b = 20;
    const int* pa = &a;
    //����д���ȼ�������һ��
    //int const *pa = &a;
    int x = *pa;
    printf("x = %d\n", x);
    //�޷�������*pa��ֵ,���ǲ��Ϸ���
    //*pa = 100;
    pa = &b;
}


/**
 * ����ָ��
 * const��*�ұ�,��ʾָ��������һ������
 */
void PointerAndConstTest2() {
    int a = 10, b = 20;
    int* const pa = &a;

    int x = *pa;
    printf("x = %d\n", x);
    //�޷��޸�ָ��pa��ֵ,���ǲ��Ϸ���
    //pa = &b;
    *pa = 100;
}


/**
 * ����һ��ָ�������ָ���ָ���ǳ����ĳ���
 *  �𵽱���ָ������ͱ�ָ��ָ���ֵ��Ч��
 */
void PointerAndConstTest3() {
    int a = 10, b = 20;
    const int* const pa = &a;
    //����д���ȼ�������һ��
    //int const * const pa = &a;

    int x = *pa;
    printf("x = %d\n", x);

    //�޷��޸�ָ��pa��ֵ,���ǲ��Ϸ���
    //pa = &b;
    //�޷�������*pa��ֵ,���ǲ��Ϸ���
    //*pa = 100;
}

/**
 * ʹ��const�޸�ָ������: ���Զ�ȡָ���ַ��ָ��ָ�������,���ǲ��ܸı�ָ����ָ���ֵ,�������Ա���ָ��ָ���ֵ
 */
void PointerAndConstTest4() {
    int a = 10, b = 20;
    const int c = 30;
    int* pa = &a;
    printf("a = %d\n", *pa);
    *pa = 100;
    printf("a = %d\n", *pa);

    const int* pb = &b;
    printf("b = %d\n", *pb);
    //���ܸı�ָ��ָ���ֵ,���ָ��ָ���ֵ�𵽱�������
    //*pb = 200;

    //ָ���޸ĳ�����ֵ
    int* pc = &c;
    printf("pc = %p\n", pc);
    *pc = 300;
    printf("c = %d\n", *pc);
}

#if 0
int main() {
    //PointerAndConstTest1();
    //PointerAndConstTest2();
    //PointerAndConstTest3();
    PointerAndConstTest4();
    return 0;
}
#endif // 0