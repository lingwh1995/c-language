#include <stdio.h>
#include "mylib.h"
#define ARSIZE 100

/*
 * ʹ�ú���ʵ��ģ�黯��� V2.0��ʹ�ö��ļ��ṹ,�����ߺ�����ȡ��mylib.h��mylib.c��
 * ʹ�ö���У�����
 *	���Ժ�if else����: ���Բ�ͨ���ᵯ������,if else���ᵯ������
 * �������ԭ��
 *	��������ԽСԽ��
 *  Ҫ�Բ����ĺϷ��Խ���У��,��Ҫ�ж�ָ���Ƿ�Ϊ��
 */

int main() {
	int arr[ARSIZE] = { 0 };
	int* pArr = NULL;
	int val = 0;
	if (0 == val) {
		pArr = &arr;
	}
	InitArrV2(pArr, ARSIZE);
	BubbleSortV2(pArr, ARSIZE);
	PrintArrV2(pArr, ARSIZE);
	return 0;
}