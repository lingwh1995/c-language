#include <stdio.h>

/**
 * sizeof:����һ���޷��ŵ���������
 */

int main() {
    int a = 10;
    //ָ�����͵�������32λϵͳ��ռ4���ֽ�,64λϵͳ��ռ8���ֽ�
    char* cp = NULL;
    double* dp = NULL;
    char str[10];
    int arr[10];
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(cp));
    printf("%d\n", sizeof(dp));
    printf("%d\n", sizeof(str));
    printf("%d\n", sizeof(double*));
    //�ַ���(�ַ�����)����ĩβ��һ�������\0,���ռ��һ���ֽ�
    printf("%d\n", sizeof("ufe"));
    printf("%d\n", sizeof(arr));
	return 0;
}