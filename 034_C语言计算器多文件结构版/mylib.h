/*
	��ֹͷ�ļ���������õ����ַ�ʽ:
		1.#pragma once���Ƽ�ʹ��,�����ţ�
		2.#ifndef + #define�����Ǻ궨���ʹ�ó���֮һ,��Ԥ����׶ν��д���
*/
//#pragma once
#ifndef MYLIB_H
#define MYLIB_H
/*
	��ȷ��ʹ��ͷ�ļ��ķ���:
		ֻ��ͷ�ļ���ʹ��extern�ؼ�������ȫ�ֱ����ͺ���,ȫ�ֱ�����ֵ�ͺ�����д��Դ�ļ���
	extren�ؼ���:
		ʹ��extern�ؼ�������ȫ�ֱ����ͺ�����,��ȫ�ֱ����ͺ��������������ļ���ʹ��
*/
extern int g;
extern int add(int a, int b);
/*
	�����ʹ��ͷ�ļ��ķ���:
		��ͷ�ļ��ж�����ȫ�ֱ�������,���������test_1.c��test_2.c��ͬʱʹ�� # include "mylib.h" �����ͷ�ļ�,���ɽ������ʱ�ᱨ��
*/
/*
int g = 0;
int add(int a, int b) {
	return a + b;
}
*/

#endif // !MYLIB_H
