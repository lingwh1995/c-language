#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>

 /**
  * 返回最大值
  * @param a
  * @param b
  * @return max
  */
int GetMax(int a, int b) {
    return a > b ? a : b;
}


/**
 * 输入a、b、c三个数,输出最大值
 */
void Exercise1() {
    int a = 0, b = 0, c = 0;
    printf("请输入:\n");
    scanf("%d %d %d", &a, &b, &c);
    //函数的多次连续调用,这个也是一种编程思思想,就是把问题分开解决,而不是在一个函数中把所有的问题都解决
    int max = GetMax(GetMax(a, b), c);
    printf("a,b,c中最大值是: %d\n", max);
}

void Swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


/**
 * 求a,b,c三个数中间的数
 *      引入swap()函数实现,占用的空间复杂度较大
 */
void Exercise2() {
    int a = 0, b = 0, c = 0;
    printf("请输入:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        Swap(&a, &b);
    }
    if (b > c) {
        Swap(&b, &c);
    }
    if (a > b) {
        Swap(&a, &b);
    }
    printf("中位数是: %d\n", b);
}


/**
 * 求a,b,c三个数中间的数
 *      纯算法实现,占用的空间复杂度小
 */
void Exercise3() {
    int a = 0, b = 0, c = 0;
    printf("请输入:\n");
    scanf("%d %d %d", &a, &b, &c);
    int mid = b;
    if (a > b) {
        mid = a;
    }
    if (mid > c) {
        if (a > c) {
            mid = c;
        }
        else {
            mid = a;
        }
    }
    printf("中位数是: %d\n", mid);
}


/**
 * 打印99乘法表
 */
void Exercise4() {
    for (int i = 0; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, (j * i));
        }
        printf("\n");
    }
}


/**
 * 输入一个数字n,打印1-n之间所有的偶数的平方值
 */
void Exercise5() {
    printf("请输入:\n");
    int i = 2;
    int n = 0;
    scanf("%d", &n);
    while (i * i < n) {
        printf("%d\n", i * i);
        i = i + 2;
    }
}


/**
 * 小球从100米落下,每次落地后跳回原来的高度一半,再落下,求它在第10次落下时共经过多少米?反弹高度是多少?
 */
void Exercise6() {
    //下落经过的总高度
    double sumHeight = 100.00;
    //每一次的反弹高度
    double currentJumpHeight = sumHeight / 2;
    for (int i = 2; i <= 10; i++) {
        sumHeight = sumHeight + currentJumpHeight * 2;
        currentJumpHeight = currentJumpHeight / 2;
    }
    printf("经过的总高度 sumHeight = %f\n", sumHeight);
    printf("第10次反弹高度 currentJumpHeight = %f\n", currentJumpHeight);
}


/**
 * 有一对兔子,从出生后第三个月起每个月都生一对兔子,小兔子长到第三个月后又生一对兔子,假如兔子都不死,问每个月有多少对兔子?
 * 月份     1       2       3       4       5       6       7       8
 * 对数     1       1       2       3       5       8       13      21
 */
 //递归解决问题
//int fun7(int n) {
//    if(n == 1 || n == 2) {
//        return 1;
//    }
//    return fun7(n-1) + fun7(n-2);
//}
//非递归解决问题
int Exercise7(int n) {
    //c代表后续月份
    int a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        printf("第%d个月的兔子对数 = %d\n", i, c);
    }
    return 0;
}

/**
 * 如果一个数等于它的因子之和,则这个数称为完数 6 = 1 + 2 + 3
 */
 //只打印完数
void Exercise8() {
    int n = 1000;
    for (int i = 2; i <= n; i++) {
        int sum = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                sum = sum + j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}

//打印完数和因子
void Exercise9() {
    int n = 1000;
    for (int i = 2; i <= n; i++) {
        int sum = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                sum = sum + j;
            }
        }
        if (sum == i) {
            printf("%d=>", i);
            for (int x = 1; x < i; x++) {
                if (i % x == 0) {
                    printf("%d ", x);
                }
            }
            printf("\n");
        }
    }
}


/**
 * 多次输入年月日,输出最早的年月日
 */
void Exercise10() {
    int year, month, day, curyear, curmonth, curday;
    printf("输入年月日：\n");
    scanf("%d/%d/%d", &year, &month, &day);
    curyear = year;
    curmonth = month;
    curday = day;
    while (year != 0 || month != 0 || day != 0) {
        if (year < curyear) {
            curyear = year;
            curmonth = month;
            curday = day;
        }
        else if (year == curyear) {
            if (month < curmonth) {
                curmonth = month;
                curday = day;
            }
            else if (month == curmonth) {
                if (day < curday)
                    curday = day;
            }
        }
        scanf("%d/%d/%d", &year, &month, &day);
    }
    printf("最小的是日期是：%d/%d/%d\n", curyear, curmonth, curday);
}


/**
 * 多次输入年月日,输出最早的年月日
 */
void Exercise11() {
    printf("请输入日期yyyy/mm/dd:\n");
    int year, month, day, curyear, curmonth, curday;
    scanf("%d/%d/%d", &year, &month, &day);
    curyear = year;
    curmonth = month;
    curday = day;
    while (year != 0 || month != 0 || day != 0) {
        if (year < curyear) {
            curyear = year;
            curmonth = month;
            curday = day;
        }
        if (year == curyear && month < curmonth) {
            curmonth = month;
            curday = day;
        }
        if (year == curyear && month == curmonth && day < curday) {
            curday = day;
        }
        scanf("%d/%d/%d", &year, &month, &day);
    }
    printf("最小的是日期是：%d/%d/%d\n", curyear, curmonth, curday);
}

/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,数组中元素可以重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序普通版
 */
void Exercise12() {
    int nums[100] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    for (int i = 0; i < length; i++) {
        nums[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}


/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,数组中元素可以重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序优化版
 */
void Exercise13() {
    int nums[100] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    for (int i = 0; i < length; i++) {
        nums[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < length - 1; i++) {
        bool isExchange = false;
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                isExchange = true;
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
        if (!isExchange) {
            break;
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}


/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,要求数组中元素不能重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序优化版
 *  解法1: for循环加一些简单的算法
 */
void Exercise14() {
    int nums[100] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    for (int i = 0; i < length; i++) {
        while (true) {
            int r = rand() % 100 + 1;
            int j;
            for (j = 0; j < i; ++j) {
                if (nums[j] == r) {
                    break;
                }
            }
            if (i == 0 || (j == i && nums[j - 1] != r)) {
                nums[i] = r;
                break;
            }
        }
    }
    //冒泡排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}

/**
 * 查询数组中是否已经有某一个元素
 * @param arr
 * @param i
 * @param value
 * @return
 */
int FindValue(int arr[], int k, int value) {
    int position = -1;
    for (int i = 0; i < k; i++) {
        if (arr[i] == value) {
            position = i;
            break;
        }
    }
    return position;
}


/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,要求数组中元素不能重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序优化版
 *  解法2: for循环配合i--
 */
void Exercise14() {
    int nums[100] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    for (int i = 0; i < length; i++) {
        int r = rand() % 100 + 1;
        if (FindValue(nums, i, r) == -1) {
            nums[i] = r;
        }
        else {
            //如果FindValue()返回值不为-1,则说明数组中已经有一个元素的值和r相等,则让i--,这是很巧妙的处理方法
            i--;
        }
    }
    //冒泡排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}




/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,要求数组中元素不能重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序优化版
 *  解法3: while循环
 *      为什么使用while循环?
 *      for循环和for循环的区别: while循环进入下一轮循环的控制条件是全部写在方法体中,
 *          for循环控制下一轮循环的条件是一部分写在for后面,另一部分写在方法体中的,所
 *          以while非常适合处理控制下一轮是否继续进行
 *
 *      for循环实现打印偶数分析: 由于i++ 和 方法体中逻辑共同作用才能实现
 *      for(int i=0; i<100; i++) {
 *          if(i % 2 ==0) {
 *              printf("%d\n", i);
 *          }
 *      }
 *
 *      while循环实现打印偶数分析: 只控制方法体中i++执行 就可以实现
 *      int i = 0;
 *      while(i<100) {
 *          printf("%d\n", i);
 *          i = i+2;
 *      }
 *
 */
void Exercise15() {
    int nums[100] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    int i = 0;
    while (i < 100) {
        int r = rand() % 100 + 1;
        if (FindValue(nums, i, r) == -1) {
            nums[i] = r;
            i = i + 1;
        }
    }
    //冒泡排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}


/**
 * 定义大小为100的整形数组,使用随机函数给数组元素赋值,数值范围1-100,要求数组中元素不能重复,并且使用冒泡排序对数组元素进行排序
 *      冒泡排序普通版
 *  解法4: 创建一个新的数组,新数组的下标值就是nums数组中的元素的值
 */
void Exercise16() {
    int nums[100] = { 0 };
    //先初始化一个数组,所有元素初始化为0
    int arr_temp[100 + 1] = { 0 };
    srand((unsigned)time(NULL));
    int length = 100;
    int i = 0;
    int count = 0;
    while (i < 100) {
        count++;
        int r = rand() % 100 + 1;
        if (arr_temp[r] == 0) {
            nums[i] = r;
            i++;
            arr_temp[r] = 1;
        }
    }
    printf("while循环执行次数: %d\n", count);
    //冒泡排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}

int main() {
    //Exercise1();
    //Exercise2();
    //Exercise3();
    //Exercise4();
    //Exercise5();
    //Exercise6();
    //Exercise7(8);
    //Exercise8();
    //Exercise9();
    //Exercise10();
    //Exercise11();
    //Exercise12();
    //Exercise13();
    //Exercise14();
    Exercise15();

    return 0;
}
