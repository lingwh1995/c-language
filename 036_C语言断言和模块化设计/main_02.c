#include <stdio.h>
#include "mylib_2.h"
#define ARSIZE 100

/*
 * ʹ�ú���ʵ��ģ�黯��� V3.0��ʹ�ö��ļ��ṹ,�����ߺ�����ȡ��mylib_2.h��mylib_2.c��(ȥ���������ظ�Ԫ�ذ汾)
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
	InitArrV3(pArr, ARSIZE);
	BubbleSortV3(pArr, ARSIZE);
	PrintArrV3(pArr, ARSIZE);
	return 0;
}
#if 0
#endif // 0