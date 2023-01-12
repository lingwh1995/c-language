#include <stdio.h>
#include <time.h>
#include <assert.h>
#define n 100

/*
 * ʹ�ú���ʵ��ģ�黯���
 * ʹ�ö���У�����
 *	���Ժ�if else����: ���Բ�ͨ���ᵯ������,if else���ᵯ������
*/

/*
 * ��ʼ������
 */
void InitArr(int *arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || n < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr);
	srand((unsigned)time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100 + 1;
	}
}

/*
 * ����������
 */
void Swap(int *ap, int *bp) {
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}

/*
 * ð������
 */
void BubbleSort(int *arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || n < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr);
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 -i; j++) {
			if (arr[j] > arr[j+1]) {
				Swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

/*
 * ��ӡ����
 */
void PrintArr(int* arr, int length) {
	//ʹ�ô�ͳif else �жϲ����Ƿ�Ϸ�
	//if (NULL == arr || n < 1) return;
	//ʹ�ö����жϲ����Ƿ�Ϸ�,���ʽΪ��,��������ִ��,���ʽΪ��,��������ʾ
	assert(NULL != arr);
	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
	int arr[n] = {0};
	int* pArr = NULL;
	int val = 1;
	if (0 == val) {
		pArr = &arr;
	}
	InitArr(pArr, n);
	BubbleSort(pArr, n);
	PrintArr(pArr, n);
	return 0;
}