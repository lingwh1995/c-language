#include <stdio.h>

/*
 * ָ���� * �ĺ���
 */
void PointerSeniorTest1() {
    int a = 10;
    int* pa = NULL;
    pa = &a;
    *pa = 100;
    printf("a = %d\n", a);
    //a �͵ȼ��� *&a, *��˼�ǶԴ˵�ַ������
    // a = *&a
}

void PointerSeniorTest2() {
    int a = 10, b = 20;
    int* ap = &a;
    int* bp = &b;
    if (ap > bp) {

    }
    if (*ap > *bp) {

    }
}

void fun(int* p) {
    int a = 200;
    *p = 100;
    p = &a;
}

void PointerSeniorTest3() {
    int x = 0;
    int* s = &x;
    fun(s);
    printf("%d %d\n", x, *s);
}

/**
 * Ұָ��
 * @return
 */
void PointerSeniorTest4() {
    int a; //���ֵ
    int* ip; //Ұָ��:�ǳ�Σ��,Ҫ�ž�Ұָ���ʹ��
    /**
     * ��ֹ����Ұָ������ַ���:
     *  1.����ָ��ʱ�Ͷ�ָ����г�ʼ��(����ָ�����ʱһ��Ҫ��ʼ��)
     *      ʹ�úϷ��ĵ�ֵַ���г�ʼ�����߸�ֵΪNULL
     *  2.����ָ��ʱ��ֵΪNULL,ʹ��ǰ���ж��Ƿ�ΪNULL
     */

     //����ָ��ʱ��ֵΪNULL(NULL: c�����еĿյ�ַ,ʵ������0��ַ)
    int* s = NULL;
    printf("s = %p\n", s);
    //ʹ��ָ��ǰ�Ƚ����пմ���
    if (s != NULL) {
        a = *s;
    }
}


/**
 * ��ָ��
 * ������ʼ��ֵ+ָ�����ȷ����
 *  ����ָ�����ʱ�����Ǿֲ��ġ�ȫ�ֵġ���̬�ġ��Ǿ�̬�Ķ�Ҫ���г�ʼ��,��Ҫ�Ѱ�ȫ�Լ����ڱ�������
 *
 */
int g;
static int sg;

int* pg = NULL;
static int* psg = NULL;
void PointerSeniorTest5() {
    static int i;
    int j = 0;

    static int* pi = NULL;
    int* pj = NULL;
    printf("ȫ�ֱ���g = %d\n", g);
    printf("ȫ�־�̬����sg = %d\n", sg);
    printf("�ֲ���̬����i = %d\n", i);
    printf("�ֲ�����j = %d\n", j);

    printf("ȫ��ָ�����pg = %p\n", pg);
    printf("ȫ�־�ָ̬�����psg = %p\n", psg);
    printf("�ֲ���ָ̬�����pi = %p\n", pi);
    printf("�ֲ�ָ�����pj = %p\n", pj);
}


/**
 * ʧЧָ��(����ָ��):�����Ƿ���һ��ָ�����͵�����,�������һ������ָ��
 * ����ָ����������
 * @param a
 * @return
 */
 //int* GetPointer1() {
 //    int a = 100;
 //    //�൱�ڰ��������е� ����a ����һ�ݷ���fun6()���������ִ��
 //    int* p = &a;
 //    //���ص�p�ǵ�ǰջ֡�е� ����a �ĵ�ַ
 //    return p;
 //}

 //�������ָ��
int* GetPointer1() {
    //ʹ��static����,�޸ı���a����������,��������Ϊ��̬��������ջ��,������ջ֡������ʱͬʱ����
    static int a = 100;
    //�൱�ڰ��������е� ����a ����һ�ݷ���fun6()���������ִ��
    int* p = &a;
    //���ص�p�ǵ�ǰջ֡�е� ����a �ĵ�ַ
    return p;
}

void PointerSeniorTest6() {
    //ָ����ж���ȷ����
    int* p = NULL;
    int a = 5;
    printf("����a�ĵ�ַ = %p\n", &a);
    printf("�Ա���a������ = %d\n", *&a);
    p = GetPointer1();
    //ָ����пմ���
    if (p != NULL) {
        printf("����a��ջ֡�еĸ�����ַ = %p\n", p);
        //Ϊʲô���ص�ֵ����100,��Ϊ���ָ��ʧЧ��: ��fun6()ִ�н�����,fun6()�еı����Ѿ��ͷ���,���Խ����õ�ʱ�����ָ���Ѿ�ʧЧ��
        //MinGW����������ʧЧ,���Գɹ�������,����vs��������ʧЧ
        printf("�Ա���a��ջ֡�еĸ��������� = %d\n", *p);
    }
}


int* GetPointer2(int* p) {
    if (p != NULL) {
        *p = 100;
    }
    return p;
}

void PointerSeniorTest7() {
    int a = 10;
    int* p = &a;
    int* s = NULL;
    s = GetPointer2(p);
    printf("*s = %d\n", *s);
}

struct Student {
    char id[32];
    int age;
    char name[50];
};

/**
 * �鿴ָ���С
 */
void PointerSeniorTest8() {
    int* ip = NULL;
    char* cp = NULL;
    double* dp = NULL;
    int** sp = NULL;
    struct Student* studentp;
    printf("ip = %d\n", sizeof(ip));
    printf("cp = %d\n", sizeof(cp));
    printf("dp = %d\n", sizeof(dp));
    printf("sp = %d\n", sizeof(sp));
    printf("studentp = %d\n", sizeof(studentp));
}


/**
 * ָ����ϰ��
 */
void PointerSeniorTest9() {
    int arr[5] = { 12,23,34,45,56 };
    int* p = arr;
    int x = 0;//12
    int y = 0;//23
    x = *p++;
    y = *p;
    printf("x = %d, y = %d\n", x, y);
    x = ++ * p;//24
    y = *p;//24 ��Ϊ��һ������֮��,�����еڶ���Ԫ�ص�ֵ�����˱仯,����ȡ�ľ��ǵڶ���ֵ
    printf("x = %d, y = %d\n", x, y);
    x = *++p;//34
    y = *p;//34 ��Ϊ��һ������֮��,�����е�����Ԫ�ص�ֵ�����˱仯,����ȡ�ľ��ǵ�����ֵ
    printf("x = %d, y = %d\n", x, y);
}


void PointerSeniorTest10() {
    int a = 10, b = 20;
    int* p = &a;
    *&a; //10
    *&p; //&a
    &*p; //&a

    //����һ������,�ͻ����ڴ��з����ַ,C���Բ������һ����ַ��ֵ����һ����ַ,���ǷǷ�����Ϊ,ʵ���������
        //&a��һ����ַ����,������ֵ�ǲ������ı��,�ı��ַ������ֵ��һ���Ƿ�����Ϊ
    //&a = &b;
}

#if 0
int main() {
    //PointerSeniorTest1();
    //PointerSeniorTest2();
    //PointerSeniorTest3();
    //PointerSeniorTest4();
    //PointerSeniorTest5();
    //PointerSeniorTest6();
    //PointerSeniorTest7();
    //PointerSeniorTest8();
    //PointerSeniorTest9();
    PointerSeniorTest10();
    return 0;
}
#endif // 0
