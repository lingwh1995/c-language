#include <stdio.h>
#include "mylib.h"

int main() {
    //�������д���ſ��ᱨ��
    /*
    printf("�����ļ��еľ�̬ȫ�ֱ���: %d\n", gi_in_other_file_static);
    printf("�����ļ��еľ�̬ȫ�ֳ���: %d\n", gc_in_other_file_static);
    AddInOtherFileStatic(0, 0);
    */

    printf("�����ļ��еľ�̬ȫ�ֱ���: %d\n", gi_in_other_file_ordinary);
    printf("�����ļ��еľ�̬ȫ�ֳ���: %d\n", gc_in_other_file_ordinary);
    AddInOtherFileOrdinary(0, 0);
	return 0;
}