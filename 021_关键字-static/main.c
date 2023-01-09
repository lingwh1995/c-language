#include <stdio.h>

/**
 * static�ؼ���:
 *  1.��static���εľֲ�����,�������Ǵӳ���ʼ���÷���һֱ�������������,����ֻ�ᱻ��ʼ��һ��
 *  2.���о�̬�����ĺ���,��Ϊ���亯��
 *  3.��static���εľֲ�����,������û�иı�,�����ڷ����˸ı�
 *  4.��static���ε�ȫ�ֱ����ͺ���,�������ܵ�����,ֻ�ڱ��ļ�����Ч,�������ļ���ʹ��extern����,��Ȼ����ͨ������,��
 *      ���޷���������,�����ڲ���ı䣬��ϸ�� mylib.h��mylib.c��main_01.c         
 */


 /*
  * ��ͨ����
  */
void OrdinaryFunctionTest() {
    int a = 0;
    //����һ����̬����,ֻ���ڵ�һ�α�����ʱ����ʼ��
    int b = 0;
    a++;
    b++;
    printf("a = %d,b = %d\n", a, b);
}

/*
 * ���亯��
 */
void MemoryFunctionTest() {
    int a = 0;
    //����һ����̬����,ֻ���ڵ�һ�α�����ʱ����ʼ��
    static int b = 0;
    a++;
    b++;
    printf("a = %d,b = %d\n", a, b);
}

#if 0
int main() {
    for (int i = 0; i < 5; i++) {
        //OrdinaryFunctionTest();
        MemoryFunctionTest();
    }
    return 0;
}

#endif // 0