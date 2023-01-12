#include <stdio.h>
#include <time.h>
#include <assert.h>
#define n 100

/*
 * 使用函数实现模块化设计
 * 使用断言校验参数
 *	断言和if else区别: 断言不通过会弹出窗口,if else不会弹出窗口
*/

/*
 * 初始化数组
 */
void InitArr(int *arr, int length) {
	//使用传统if else 判断参数是否合法
	//if (NULL == arr || n < 1) return;
	//使用断言判断参数是否合法,表达式为真,继续向下执行,表达式为假,弹出窗提示
	assert(NULL != arr);
	srand((unsigned)time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100 + 1;
	}
}

/*
 * 交换两个数
 */
void Swap(int *ap, int *bp) {
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}

/*
 * 冒泡排序
 */
void BubbleSort(int *arr, int length) {
	//使用传统if else 判断参数是否合法
	//if (NULL == arr || n < 1) return;
	//使用断言判断参数是否合法,表达式为真,继续向下执行,表达式为假,弹出窗提示
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
 * 打印数组
 */
void PrintArr(int* arr, int length) {
	//使用传统if else 判断参数是否合法
	//if (NULL == arr || n < 1) return;
	//使用断言判断参数是否合法,表达式为真,继续向下执行,表达式为假,弹出窗提示
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