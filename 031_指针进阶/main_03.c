# include <stdio.h>

/*
 * ָ������ͺ����Ĺ�ϵ
*/

/**
 * �βε���������Ϊ����ʱ����δ����
 * ����������Ϊ�������β�ʱ,�������˻���ָ��,Ŀ����Ϊ�˽�ʡ�ռ��ʱ��
 *      ����ǰ��������鸴��һ�ݴ��ݸ�����,��ô���˷Ѿ޴�Ŀռ�,����Ҫ����һ������Ϊ50000������,��ô����Ҫ���⿪����ô��Ŀռ乩����ʹ��
 */
 //���淽��ʱ�����,�޷���ȷ��ӡ��������ÿһ��Ԫ��,��Ϊsizeof(nums)�����ָ��ĳ���,Ϊ8���ֽ�, 8/4 = 2,����ֻ�ܴ�ӡ�����ֽ�
void PrintArr1(int nums[]) {
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
    printf("------------------------------\n");
}


/**
 * ��ӡ����
 * @param nums ���������ָ��
 * @param n ����ĳ���
 */
void PrintArr2(int* nums, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }
    printf("------------------------------\n");
}


int main() {
    int nums[] = { 1,2,3,4,5 };
    PrintArr1(nums);
    int length = sizeof(nums) / sizeof(nums[0]);
    PrintArr2(nums, length);
    return 0;
}