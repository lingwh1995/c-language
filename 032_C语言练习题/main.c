#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>

 /**
  * �������ֵ
  * @param a
  * @param b
  * @return max
  */
int GetMax(int a, int b) {
    return a > b ? a : b;
}


/**
 * ����a��b��c������,������ֵ
 */
void Exercise1() {
    int a = 0, b = 0, c = 0;
    printf("������:\n");
    scanf("%d %d %d", &a, &b, &c);
    //�����Ķ����������,���Ҳ��һ�ֱ��˼˼��,���ǰ�����ֿ����,��������һ�������а����е����ⶼ���
    int max = GetMax(GetMax(a, b), c);
    printf("a,b,c�����ֵ��: %d\n", max);
}

void Swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


/**
 * ��a,b,c�������м����
 *      ����swap()����ʵ��,ռ�õĿռ临�ӶȽϴ�
 */
void Exercise2() {
    int a = 0, b = 0, c = 0;
    printf("������:\n");
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
    printf("��λ����: %d\n", b);
}


/**
 * ��a,b,c�������м����
 *      ���㷨ʵ��,ռ�õĿռ临�Ӷ�С
 */
void Exercise3() {
    int a = 0, b = 0, c = 0;
    printf("������:\n");
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
    printf("��λ����: %d\n", mid);
}


/**
 * ��ӡ99�˷���
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
 * ����һ������n,��ӡ1-n֮�����е�ż����ƽ��ֵ
 */
void Exercise5() {
    printf("������:\n");
    int i = 2;
    int n = 0;
    scanf("%d", &n);
    while (i * i < n) {
        printf("%d\n", i * i);
        i = i + 2;
    }
}


/**
 * С���100������,ÿ����غ�����ԭ���ĸ߶�һ��,������,�����ڵ�10������ʱ������������?�����߶��Ƕ���?
 */
void Exercise6() {
    //���侭�����ܸ߶�
    double sumHeight = 100.00;
    //ÿһ�εķ����߶�
    double currentJumpHeight = sumHeight / 2;
    for (int i = 2; i <= 10; i++) {
        sumHeight = sumHeight + currentJumpHeight * 2;
        currentJumpHeight = currentJumpHeight / 2;
    }
    printf("�������ܸ߶� sumHeight = %f\n", sumHeight);
    printf("��10�η����߶� currentJumpHeight = %f\n", currentJumpHeight);
}


/**
 * ��һ������,�ӳ��������������ÿ���¶���һ������,С���ӳ����������º�����һ������,�������Ӷ�����,��ÿ�����ж��ٶ�����?
 * �·�     1       2       3       4       5       6       7       8
 * ����     1       1       2       3       5       8       13      21
 */
 //�ݹ�������
//int fun7(int n) {
//    if(n == 1 || n == 2) {
//        return 1;
//    }
//    return fun7(n-1) + fun7(n-2);
//}
//�ǵݹ�������
int Exercise7(int n) {
    //c��������·�
    int a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        printf("��%d���µ����Ӷ��� = %d\n", i, c);
    }
    return 0;
}

/**
 * ���һ����������������֮��,���������Ϊ���� 6 = 1 + 2 + 3
 */
 //ֻ��ӡ����
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

//��ӡ����������
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
 * �������������,��������������
 */
void Exercise10() {
    int year, month, day, curyear, curmonth, curday;
    printf("���������գ�\n");
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
    printf("��С���������ǣ�%d/%d/%d\n", curyear, curmonth, curday);
}


/**
 * �������������,��������������
 */
void Exercise11() {
    printf("����������yyyy/mm/dd:\n");
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
    printf("��С���������ǣ�%d/%d/%d\n", curyear, curmonth, curday);
}

/**
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,������Ԫ�ؿ����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð��������ͨ��
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
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,������Ԫ�ؿ����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð�������Ż���
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
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,Ҫ��������Ԫ�ز����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð�������Ż���
 *  �ⷨ1: forѭ����һЩ�򵥵��㷨
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
    //ð������
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
 * ��ѯ�������Ƿ��Ѿ���ĳһ��Ԫ��
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
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,Ҫ��������Ԫ�ز����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð�������Ż���
 *  �ⷨ2: forѭ�����i--
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
            //���FindValue()����ֵ��Ϊ-1,��˵���������Ѿ���һ��Ԫ�ص�ֵ��r���,����i--,���Ǻ�����Ĵ�����
            i--;
        }
    }
    //ð������
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
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,Ҫ��������Ԫ�ز����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð�������Ż���
 *  �ⷨ3: whileѭ��
 *      Ϊʲôʹ��whileѭ��?
 *      forѭ����forѭ��������: whileѭ��������һ��ѭ���Ŀ���������ȫ��д�ڷ�������,
 *          forѭ��������һ��ѭ����������һ����д��for����,��һ����д�ڷ������е�,��
 *          ��while�ǳ��ʺϴ��������һ���Ƿ��������
 *
 *      forѭ��ʵ�ִ�ӡż������: ����i++ �� ���������߼���ͬ���ò���ʵ��
 *      for(int i=0; i<100; i++) {
 *          if(i % 2 ==0) {
 *              printf("%d\n", i);
 *          }
 *      }
 *
 *      whileѭ��ʵ�ִ�ӡż������: ֻ���Ʒ�������i++ִ�� �Ϳ���ʵ��
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
    //ð������
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
 * �����СΪ100����������,ʹ���������������Ԫ�ظ�ֵ,��ֵ��Χ1-100,Ҫ��������Ԫ�ز����ظ�,����ʹ��ð�����������Ԫ�ؽ�������
 *      ð��������ͨ��
 *  �ⷨ4: ����һ���µ�����,��������±�ֵ����nums�����е�Ԫ�ص�ֵ
 */
void Exercise16() {
    int nums[100] = { 0 };
    //�ȳ�ʼ��һ������,����Ԫ�س�ʼ��Ϊ0
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
    printf("whileѭ��ִ�д���: %d\n", count);
    //ð������
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
