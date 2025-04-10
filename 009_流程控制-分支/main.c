#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * 单分支
 *	if else
 * 多分支
 *  switch
 * 三元表达式
 */

/*
 * 单分支测试
 */
void SingleBranchTest()
{
    printf("请输入i和j的值,使用空格隔开:\n");
    int i, j, max;
    scanf("%d %d", &i, &j);
    if (i > j) {
        max = i;
    }
    else {
        max = j;
    }
    printf("两个值中最大的值 max = %d\n", max);
}

/*
 * 多分支测试
 */
void MultipleBranchTest()
{
    printf("请输入i的值:\n");
    int i;
    scanf("%d",&i);
    switch (i) {
        case 1:
            printf("您输入的值是: %d", 1);
            break;
        case 2:
            printf("您输入的值是: %d", 2);
            break;
        case 3:
            printf("您输入的值是: %d", 3);
            break;
        case 4:
            printf("您输入的值是: %d", 4);
            break;
        case 5:
            printf("您输入的值是: %d", 5);
            break;
        default:
            printf("您输入的值是其他值!");
            break;
    }
}

/*
 * 三元表达式测试
 */
void TernaryExpression()
{
    printf("请输入i和j的值,使用空格隔开:\n");
    int i, j, max;
    scanf("%d %d", &i, &j);
    max = i > j ? i : j;
    printf("两个值中最大的值 max = %d\n", max);
}

#if 0
int main()
{
    //SingleBranchTest();
    //MultipleBranchTest();
    TernaryExpression();
    return 0;
}
#endif // 0