//ʹ�ö��ļ��ṹ(ģ�黯���)��д����������:����ʵ�ֲ���
#include <stdbool.h>
#include <stdio.h>
#include "calculator.h"

//�������ļ��еĺ���
int Add_Int(int a, int b);
int Sub_Int(int a, int b);
int Mul_Int(int a, int b);
int Div_Int(int a, int b);
void Show(int a, int b, char op, int result);

/*
 * ���м���ķ���,����ʹ��static����,��Ϊ���Ǳ�����Ψһ���Ⱪ¶�Ľӿ�
 * @param a �������1
 * @param b �������2
 * @param op �����
 */
void Calc(int a, int b, char op) {
	int result = 0;
	bool bIsShow = true;
	switch (op) {
	case '+':
		result = Add_Int(a, b);
		break;
	case '-':
		result = Sub_Int(a, b);
		break;
	case '*':
		result = Mul_Int(a, b);
		break;
	case '/':
		bIsShow = false;
		if (0 == b) {
			printf("div by zeron error!\n");
		}
		else {
			result = Div_Int(a, b);
		}
		break;
	default:
		bIsShow = false;
		printf("op input error!\n");
		break;
	}
	if (bIsShow) {
		Show(a, b, op, result);
	}
}

/*
 * �ӷ���������뱻�ⲿ����,ʹ��static����
 * @param a �������1
 * @param b �������2
 */
 /*
 int Add_Int(int a, int b) {
	 return a + b;
 }
 */
static int Add_Int(int a, int b) {
	return a + b;
}

/*
 * ������������뱻�ⲿ����,ʹ��static����
 * @param a �������1
 * @param b �������2
 */
 /*
 int Sub_Int(int a, int b) {
	 return a - b;
 }
 */
static int Sub_Int(int a, int b) {
	return a - b;
}

/*
 * �˷���������뱻�ⲿ����,ʹ��static����
 * @param a �������1
 * @param b �������2
 */
 /*
 int Mul_Int(int a, int b) {
	 return a * b;
 }
 */
static int Mul_Int(int a, int b) {
	return a * b;
}

/*
 * ������������뱻�ⲿ����,ʹ��static����
 * @param a �������1
 * @param b �������2
 */
 /*
 int Div_Int(int a, int b) {
	 return a / b;
 }
 */
static int Div_Int(int a, int b) {
	return a / b;
}

/*
 * ��ʾ�����������뱻�ⲿ����,ʹ��static����
 * @param a �������1
 * @param b �������2
 * @param op �����
 * @param result ������
 */
 /*
 void Show(int a, int b, char op, int result) {
	 printf("%d %c %d = %d\n", a, op, b, result);
 }
 */
static void Show(int a, int b, char op, int result) {
	printf("%d %c %d = %d\n", a, op, b, result);
}
