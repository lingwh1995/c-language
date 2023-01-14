#include "mylib_2.h"
#include <time.h>
#include <assert.h>

/*
 * �������в��ҵ�ǰֵ,���ҵ�������������,���Ҳ�������-1
 * @param *arr ���������ָ��
 * @param n ��ǰԪ����Ŀ�������е�����
 * @param val Ҫȷ���Ƿ�����ڵ�ǰ�����е�ֵ
 */
/*
int FindValueV3(const* arr, int n, int val) {
	assert(NULL != arr);
	if (n < 1) return -1;
	int position = -1;
	for (int i = 0; i < n; i++) {
		if (val == arr[i]) {
			position = i;
		}
	}
	return position;
}
*/
int FindValueV3(const* arr, int n, int val) {
	assert(NULL != arr);
	if (n < 1) return -1;
	int position = n - 1;
	while (position >= 0 && arr[position] != val) {
		position--;
	}
	return position;
}

/*
 * ��ʼ������
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
void InitArrV3(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	srand((unsigned)time(NULL));
	int i = 0;
	while (i < 100) {
		int r = rand() % 100 + 1;
		int position = FindValueV3(arr, i, r);
		if (position == -1) {
			arr[i] = r;
			i++;
		}
	}
}

/*
 * ����������
 * @param *ap �����һ������ָ��
 * @param *bp ����ڶ�������ָ��
 */
void SwapV3(int* ap, int* bp) {
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
void BubbleSortV3(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				SwapV3(&arr[j], &arr[j + 1]);
			}
		}
	}
}

/*
 * ��ӡ����
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
void PrintArrV3(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || length < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr && length >= 1);
	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
}