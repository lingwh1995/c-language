#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculator.h"


//ʹ�ö��ļ��ṹ(ģ�黯���)��д����������:���Բ���
int main()
{
	printf("��������ʽ: a op b\n");
	int a = 0, b = 0;
	char op = '\0';
	char ch = '\0';
	do {
		scanf("%d %c %d", &a, &op, &b); // 1 + 5\n
		Calc(a, b, op);
		printf("����y/Y����:\n");
		//Visual Studio�п���ʹ������������stdin������
		rewind(stdin);
		ch = getchar();
	} while (ch == 'y' || ch == 'Y');

	return 0;
}

//ָ��
#if 0
int main()
{
	const int c = 30;
	int* pc = &c;
	*pc = 300;
	printf("c = %d\n", c);

	return 0;
}
#endif // 0

//���Զ��ļ��ṹ
#if 0
int main()
{
	fun1();
	fun2();
	return 0;
}
#endif // 0

