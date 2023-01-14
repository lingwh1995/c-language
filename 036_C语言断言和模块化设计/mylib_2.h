#ifndef MYLIB_2_H
#define MYLIB_2_H
/*
 * �������в��ҵ�ǰֵ,���ҵ�������������,���Ҳ�������-1
 * @param *arr ���������ָ��
 * @param n ��ǰԪ����Ŀ�������е�����
 * @param num Ҫȷ���Ƿ�����ڵ�ǰ�����е�ֵ
 */
int FindValueV3(const* arr, int n, int num);

/*
 * ��ʼ������
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
extern void InitArrV3(int* arr, int length);

/*
 * ����������
 * @param *ap �����һ������ָ��
 * @param *bp ����ڶ�������ָ��
 */
extern void SwapV3(int* ap, int* bp);

/*
 * ð������
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
extern void BubbleSortV3(int* arr, int length);

/*
 * ��ӡ����
 * @param *arr ���������ָ��
 * @param length ���鳤��
 */
extern void PrintArrV3(int* arr, int length);
#endif // !MYLIB_2_H
