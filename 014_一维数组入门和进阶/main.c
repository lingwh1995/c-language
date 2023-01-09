#include <stdio.h>
#include <string.h>
#define LEN 10

/**
 * һά����Ķ���
 * һά����ĳ���
 * һά�������������
 * ��ͬ��������������ÿһ��Ԫ�����ڴ��е������ַ
 */

/**
 * һά����Ķ���
 */
void DefineOneDimensionalArrayTest() {
    //����Ķ�������ķ���
    int n = 3;
    //������,n����Ϊһ������
    //int arr_1[n] = {1,2,3};

    //��ȷ����:��ʽһ
    int arr_2[3];
    //��ȷ����:��ʽ��
    int arr_3[LEN] = { 1,2,3 };
    //��ȷ����:��ʽ��
    int arr_4[3] = { 1,2,3 };

    //����һ��δ֪��С����������
    int nums_1[] = { 1,2,3,4,5 };
    int l1 = sizeof(nums_1) / sizeof(nums_1[0]);
    printf("���鳤��:%d\n", l1);
    for (int i = 0; i < l1; i++) {
        printf("%d\n", nums_1[i]);
    }
    printf("--------------------------------\n");

    //����һ����֪��С����������
    int nums_2[5] = { 1,2,3,4,5 };
    int l2 = sizeof(nums_2) / sizeof(nums_2[0]);
    printf("���鳤��:%d\n", l2);
    for (int i = 0; i < l2; i++) {
        printf("%d\n", nums_2[i]);
    }
    printf("--------------------------------\n");

    //����һ����֪��С����������
    int nums_3[5];
    int l3 = sizeof(nums_3) / sizeof(nums_3[0]);
    printf("���鳤��:%d\n", l3);
    for (int i = 0; i < l3; i++) {
        printf("%d\n", nums_3[i]);
    }
    printf("--------------------------------\n");


    //���鳤��Ϊ5,����ֻ��������Ԫ��,��4���͵�5��Ԫ����Ϊû�б���ʼ��,����ΪֵΪ0
    int nums_4[5] = { 1,2,3 };
    int l4 = sizeof(nums_4) / sizeof(nums_4[0]);
    printf("���鳤��:%d\n", l4);
    for (int i = 0; i < l4; i++) {
        printf("%d\n", nums_4[i]);
    }
    printf("--------------------------------\n");


    //������
    //����������ĳ���Ϊ5,��ȴ��ʼ����10��Ԫ��,��������Ԫ�����޷����ʵ���
    //int nums_5[5] = { 1,2,3,4,5,6,7,8,9,10 };
}

/**
 * һά����ĳ���
 */
void LengthOfOneDimensionalArrayTest() {
    //�����������ʱ�涨������ĳ���,��ô������ʵ�ĳ����Ƕ���,������ĳ��ȶ���֮ǰ�涨�õĳ���
    int arr_1[10] = { 1,2,3,4,5 };
    //�����������ʱ�涨������ĳ���,��ô������ʵ�ĳ����Ƕ���,������ĳ��ȶ���֮ǰ�涨�õĳ���
    int arr_2[5] = { 1,2,3,4,5 };
    //�����������ʱû�й涨����ĳ���,�Ⱥ��ұ�д�˼���Ԫ��,����ĳ��Ⱦ��Ǽ�
    int arr_3[] = { 1,2,3,4,5 };
    printf("����ĳ��� = %d\n", sizeof(arr_1) / sizeof(arr_1[0]));
    printf("����ĳ��� = %d\n", sizeof(arr_2) / sizeof(arr_2[0]));
    printf("����ĳ��� = %d\n", sizeof(arr_3) / sizeof(arr_3[0]));


    /**
     * strlen()��������̽��
     *     ע��: Ϊʲô strlen(chars_2) �Ĳ���5?
     *     ��Ϊ strlen() ����ͳ�Ƴ���ʱ����\0�Ż����ͳ�Ƴ���,���ַ���ר�÷���,���������ַ�����
     */
    char str[] = { "hello" };
    char chars_1[] = { 'h','e','l','l','O','\0' };
    char chars_2[] = { 'h','e','l','l','O' };
    printf("str���� = %d, chars_1 = %d, chars_2 = %d\n", strlen(str), strlen(chars_1), strlen(chars_2));
}

/**
 * һά�������������
 *  ���������
 *  ����Ĵ�С
 */
void TwoAttributeOfOneDimensionalArrayTest() {
    //����������ռ�ռ��С�����ַ�ʽ
    int arr[5] = { 1,2,3,4,5 };
    int size1 = sizeof(int) * 5;
    printf("size1 = %d\n", size1);
    int size2 = sizeof(arr);
    printf("size2 = %d\n", size2);
    char str1[] = { "hello" };
    //ע��:�ַ����Ĵ�СΪ = �ַ����� * һ��char������ռ���� + \0�Ĵ�С = �ַ����� * 1 + 1
    //ע��size3��size4�Ĵ�С
    int size3 = sizeof(str1);
    printf("size3 = %d\n", size3);
    char str2[5] = { "hello" };
    //ע��size3��size4�Ĵ�С
    int size4 = sizeof(str2);
    printf("size4 = %d\n", size4);


    //�������鳤�ȴ�С
    int length1 = sizeof(arr) / sizeof(arr[0]);
    printf("length1 = %d\n", length1);
    char str3[] = { "hello" };
    //�����ַ�������ר�÷���
    int length2 = strlen(str3);
    printf("length2 = %d\n", length2);
}

/**
 * �鿴��ͬ��������������ÿһ��Ԫ�����ڴ��е������ַ
 */
void ViewMemoryPhysicalAddressOfOneDimensionalArrayTest() {
    //���������Ĺ۲쵽һ���ַ�ռ��һ���ֽ�
    char str[] = { "hello" };
    for (int i = 0; i < strlen(str); i++) {
        printf("%p\n", &str[i]);
    }
    printf("-----------------------------\n");

    //���������۲쵽һ��int��������ռ4���ֽ�
    int nums[] = { 1,2,3,4,5 };
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        printf("%p\n", &nums[i]);
    }
}

#if 0
int main() {
    //DefineOneDimensionalArrayTest();
    //LengthOfOneDimensionalArrayTest();
    //TwoAttributeOfOneDimensionalArrayTest();
    //ViewMemoryPhysicalAddressOfOneDimensionalArrayTest();
    return 0;
}
#endif // 0