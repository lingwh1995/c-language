# include <stdio.h>

/*
 * 指针数组和函数的关系
*/

/**
 * 形参的数据类型为数组时是如何处理的
 * 当把数组作为函数的形参时,数组名退化成指针,目的是为了节省空间和时间
 *      如果是把整个数组复制一份传递给函数,那么会浪费巨大的空间,假如要传递一个长度为50000的数组,那么就需要额外开辟这么大的空间供函数使用
 */
 //下面方法时错误的,无法正确打印出数组中每一个元素,因为sizeof(nums)求的是指针的长度,为8个字节, 8/4 = 2,所以只能打印两个字节
void PrintArr1(int nums[])
{
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", nums[i]);
    }
    printf("------------------------------\n");
}


/**
 * 打印数组
 * @param nums 代表数组的指针
 * @param n 数组的长度
 */
void PrintArr2(int* nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", nums[i]);
    }
    printf("------------------------------\n");
}


int main()
{
    int nums[] = { 1,2,3,4,5 };
    PrintArr1(nums);
    int length = sizeof(nums) / sizeof(nums[0]);
    PrintArr2(nums, length);
    return 0;
}