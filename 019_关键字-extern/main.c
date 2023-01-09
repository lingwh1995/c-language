#include <stdio.h>
#include "mylib.h"

/**
 * extern�ؼ���:
 *	1.����ȫ�ֱ������ߺ�������ǰ,����˵���� ����/����/���� ���ڱ𴦶����,Ҫ�ڴ˴�����
 *  2.һ��� ����/����/���� ���ȶ����ʹ��,���Ҫʵ�ֺ�����ʹ�þ�Ҫʹ��extern�ؼ�������һ��
 *  3.���ļ��е� ����/����/���� ����ֱ������,Ҳ����ʹ��extern�ؼ�������,�����ļ��е� ����/����/���� ��Ҫʹ��extern����
 *	4.extern������ ����/������������ȫ�ֵ�,Ҳ�����Ǿֲ���
 */

/*
//ʹ��extern�ؼ������������ڱ��ļ��е� ����/����/����
//������ǰ�ļ��е�һ��ȫ�ֱ���
extern int gi_in_current_file;
//������ǰ�ļ��е�һ��ȫ�ֳ���
extern const int gc_in_current_file;
//������ǰ�ļ��е�һ������
extern int AddInCurrentFile(int, int);
*/

//��ʹ��extern�ؼ������������ڱ��ļ��е� ����/����/����
//������ǰ�ļ��е�һ��ȫ�ֱ���
int gi_in_current_file;
//������ǰ�ļ��е�һ��ȫ�ֳ���
const int gc_in_current_file;
//������ǰ�ļ��е�һ������
int AddInCurrentFile(int, int);

/*
 * ����ʹ��extern���������ļ��е� ����/����/����
 */
void ExternOtherFileVariableAndConstAndFunctionTest() {
	printf("gi_in_other_file = %d\n", gi_in_other_file);
	printf("gc_in_other_file = %d\n", gc_in_other_file);
	//AddInOtherFile()��mylib.h��ʹ��extern�ؼ�������,��mylib.c�ж���
	AddInOtherFile(0, 0);
}

/*
 * ����ʹ��extern������ǰ�ļ��е� ����/����/����
 */
void ExternCurrentFileVariableAndConstAndFunctionTest() {
	printf("gi_in_current_file = %d\n", gi_in_current_file);
	printf("gc_in_current_file = %d\n", gc_in_current_file);
	//AddInCurrentFile()��main.c��ʹ��extern�ؼ�������,��main.c�ж���
	AddInCurrentFile(0, 0);
}

#if 0
int main() {
	ExternOtherFileVariableAndConstAndFunctionTest();
	//ֱ�ӵ��ûᱨ��,��Ϊ��������е��õı����������ͷ���������������,ͬ����Ҫ�ڵ�ǰ�ļ���ʹ��extern����
	ExternCurrentFileVariableAndConstAndFunctionTest();
	return 0;
}
#endif // 0

//����һ��ȫ�ֱ���
int gi_in_current_file = 10;

//����һ��ȫ�ֳ���
const int gc_in_current_file = 100;

//����һ������
int AddInCurrentFile(int a, int b) {
	printf("����main.c�е���ͨ����......(���Ե�ǰ�ļ�)\n");
	return a + b;
}