#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/**
 * ��ϵ�����: &&/|| ���·
 * ���ű��ʽ:
 *  1.�������ȼ����
 *  2.��Ϊ�������
 *      ��������: ��������ִ��,ȡ����ߵı��ʽ��������
 *      ������: ��������ִ��,ȡ���ұߵı��ʽ��������
 *  �ر�ע��:
 *      ������ȡ����߻������ұߵ�������,���еı��ʽ����ִ��,ֻ��ִ��˳������һ��ߴ��ҵ���
 *
 */

 /*
  * ��ϵ���������
  */
void RelationalOperatorTest() {
	int a = 1, b = 2, c = 3;
	int i = a < b < c;
	//a < b => true(1) ,1 < 3 => true => 2
	printf("%d\n", i);

	//��· �� expression1 && expression2,ֻ��expression1Ϊ��ʱ��ִ��expression2,expression1Ϊ�ٲ���ִ��expression2
	//��· �� ͬ��,ͬ�����·
	int x = 100, y = 10;
	if (x < 20 && ++y) {

	}
	printf("y = %d\n", y);
}

/*
 * ���ű��ʽ����
 *  ��֤�����źͲ����������ս��ȡֵ����
 */
void CommaExpressionTest1() {
	int a = 3, b = 5, c = 7;
	int i = 0;
	//ȡ����ߵı��ʽ��������
	i = a + b, b += 3, c += 8;
	printf("i = %d, b= %d\n", i, b);

	int x = 3, y = 5, z = 7;
	int j = 0;
	//ȡ���ұߵı��ʽ��������
	j = (x + y, y += 3, z += 8);
	printf("j = %d, y = %d\n", j, y);

	int m = 5, n = -5;
	//��ѭ��Ч��
//    while (m > 0) {
//        printf("��ѭ��......\n");
//    }
	//����ѭ��Ч��
	while (m > 0, n > 0) {
		printf("��ѭ��......\n");
	}
}

/*
 * ���ű��ʽ����
 *  ��֤����ֻ��ִ������߻������ұߵı��ʽ,����ִ�����еı��ʽ
 */
void CommaExpressionTest2() {
	int a = 3, b = 5, c = 7;
	int i = 0;
	//ȡ����ߵı��ʽ��������
	i = b = a + b, b += 3, c += 8;
	printf("i = %d, b= %d\n", i, b);

	int x = 3, y = 5, z = 7;
	int j = 0;
	//ȡ���ұߵı��ʽ��������
	j = (y = x + y, y += 3, z += 8);
	printf("j = %d, y = %d\n", j, y);
}

/*
 * ���ű��ʽ����
 *  ���ű��ʽʵ��Ӧ��
 */
void CommaExpressionTest3() {
	int x = 0;
	if (printf("������һ������:\n"), scanf("%d", &x), x > 0) {
		printf("�����ֵ����0\n");
	}
	else {
		printf("�����ֵС��0\n");
	}
}

int main() {
	//RelationalOperatorTest();
	//CommaExpressionTest1();
	//CommaExpressionTest2();
	CommaExpressionTest3();
	return 0;
}