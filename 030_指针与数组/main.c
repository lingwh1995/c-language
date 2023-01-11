#include <stdio.h>

/**
 * ����������������Ԫ�ص�ַ
 */
void PointerAndArrayTest1() {
    int arr[5] = { 1,2,3,4,5 };
    //����ĵ�ַ
    printf("����ĵ�ַ = %p\n", &arr);
    //�������Ԫ�ص�ַ
    printf("�������Ԫ�ص�ַ = %p\n", &arr[0]);
    int* p = &arr[0];
    printf("�������Ԫ�ص�ַ = %p\n", p);
    printf("�������Ԫ�� = %d\n", *p);
    p = p + 1;
    printf("����ĵڶ���Ԫ�� = %d\n", *p);

    //����Ĵ���ſ��ᱨ��,ԭ����: ����ĵ�ֵַ��һ������,���Ҫ���������¸�ֵ,�ǲ��Ϸ���
    //arr = arr + 1;
}

/*
 * �����÷���*��[]�����ȼ�
 */
void PointerAndArrayTest2() {
    int a = 1, b = 2, c = 3, d = 4;
    //����һ������ָ��
    int* arr[5] = { &a,&b,&c,&d };
    //ʹ��*+������Ϊ����(�����е�Ԫ��)��ֵ,��������д�����ǿ��Ե�
    *(arr[0]) = 100;
    *arr[1] = 200;
    printf("%d,%d\n", *arr[0], *arr[1]);
}

/*
 * ָ�������
 */
void PointerAndArrayTest3() {
    int arr_1[5] = { 1,2,3,4,5 };
    int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    //int* ip = &arr_1[0];
    int* ip = arr_1;
    for (int i = 0; i < size_1; i++) {
        printf("arr_1[%d] = %d, ip = %p\n", i, *ip, ip);
        //�൱�ڵ�ַ��ֵ+4(���ֽ�)
        ip = ip + 1;
    }
    printf("------------------------\n");

    double arr_2[5] = { 1.1,2.2,3.3,4.4,5.5 };
    int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    //double* dp = &arr_2[0];
    double* dp = arr_2;
    for (int i = 0; i < size_2; i++) {
        printf("arr_2[%d] = %f, dp = %p\n", i, *dp, dp);
        //�൱�ڵ�ַ��ֵ+8(���ֽ�)
        dp = dp + 1;
    }
    printf("------------------------\n");

    char arr_3[5] = { 'h','e','l','l','o' };
    int size_3 = sizeof(arr_3) / sizeof(arr_3[0]);
    //char* cp = &arr_3[0];
    char* cp = arr_3;
    for (int i = 0; i < size_3; i++) {
        printf("arr_3[%d] = %c, cp = %p\n", i, *cp, cp);
        //�൱�ڵ�ַ��ֵ+1(���ֽ�)
        cp = cp + 1;
    }
}


/**
 * ����arr[i]��i[arr]��ִ��Ч������ͬ��
 * arr[i]֮��������ȷ��ָ��ĳһ��Ԫ��,�������Ǳ������� arr[i]������� *(arr+i)
 * arr[i]��i[arr]��������ȷ�Ĵ�ӡ�������е�Ԫ�ص�ԭ��?
 *  ��Ϊ�ڱ���������,arr[i]��ͬ�� *(arr+i), i[arr] ��ͬ�� *(i+arr),����˵ͨ���±�(arr[i])��������ķ�ʽʵ������ͨ��ָ���������
 */
void PointerAndArrayTest4() {
    int arr[] = { 1,2,3,4,5 };
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        printf("���������%d��Ԫ�صĵ�ַ = %p\n", i, (arr + i));
        printf("���������%d��Ԫ�� = %d\n", i, arr[i]);
        printf("���������%d��Ԫ�� = %d\n", i, i[arr]);
        printf("���������%d��Ԫ�� = %d\n", i, *(arr + i));
    }
}


/**
 * �������ĺ���
 */
void PointerAndArrayTest5() {
    int arr[] = { 1,2,3,4,5 };
    //��sizeof()���ʽ��,��������������������������,���������������,�����������+����Ĵ�С
    int size = sizeof(arr);
    //��sizeof()���ʽ����������ط�,����������������������Ԫ�ص�ֵַ
    printf("size = %d\n", size);
    printf("&arr = %p\n", arr);
}

/**
 * ʹ��ָ���������Ԫ��
 */
void PointerAndArrayTest6() {
    int arr[] = { 1,2,3,4,5 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int* p = &arr;
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
    printf("---------------------\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", p[i]);
    }
    printf("---------------------\n");
    for (int i = 0; i < length; i++) {
        printf("%p\n", p + i);
    }
    printf("---------------------\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", *(p + i));
    }
    printf("---------------------\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", *(arr + i));
    }
}

int main() {
    //PointerAndArrayTest1();
    //PointerAndArrayTest2();
    //PointerAndArrayTest3();
    //PointerAndArrayTest4();
    //PointerAndArrayTest5();
    PointerAndArrayTest6();
    return 0;
}
