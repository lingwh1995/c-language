#include "mylib.h"
#include <time.h>
#include <assert.h>

/*
 * ��ʼ������
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
void InitArrV2(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	srand((unsigned)time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100 + 1;
	}
}

/*
 * ����������
 * @param *ap �����һ������ָ��
 * @param *bp ����ڶ�������ָ��
 */
void SwapV2(int* ap, int* bp) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == ap || NULL == bp) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != ap && NULL != bp);
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}

/*
 * ð������
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
void BubbleSortV2(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				SwapV2(&arr[j], &arr[j + 1]);
			}
		}
	}
}

/*
 * ��ӡ����
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
void PrintArrV2(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
}