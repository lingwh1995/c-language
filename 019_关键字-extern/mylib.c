#include "mylib.h"

//����һ��ȫ�ֱ���
int gi_in_other_file = 10;

//����һ��ȫ�ֳ���
const int gc_in_other_file = 100;

//����һ������
int AddInOtherFile(int a, int b) {
    printf("����mylib.c�е���ͨ����......(���������ļ�)\n");
    return a + b;
}