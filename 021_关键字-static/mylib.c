#include <stdio.h>
#include "mylib.h"

//����һ����static���ε�ȫ�ֱ���
static int gi_in_other_file_static = 10;

//����һ����static���ε�ȫ�ֳ���
static const int gc_in_other_file_static = 100;

//����һ����static���εĺ���
static int AddInOtherFileStatic(int a, int b) {
    printf("����mylib.c�е���ͨ����......(���������ļ�,��static����)\n");
    return a + b;
}

//����һ��û�б�static���ε�ȫ�ֱ���
int gi_in_other_file_ordinary = 10;

//����һ��û�б�static���ε�ȫ�ֳ���
const int gc_in_other_file_ordinary = 100;

//����һ��û�б�static���εĺ���
int AddInOtherFileOrdinary(int a, int b) {
    printf("����mylib.c�е���ͨ����......(���������ļ�,û�б�static����)\n");
    return a + b;
}