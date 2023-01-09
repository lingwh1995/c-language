# include <stdio.h>
# include <stdbool.h>

/**
 * �ж��Ƿ�Ϊ����
 * @param year
 * @return
 */
int IsLeapYear(int year) {
    bool leap = false;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        leap = true;
    }
    return leap;
}


/**
 * �ж�ĳ�����ж�����,���� 2��29��,ƽ��2��28��
 * @return
 */
int GetDays(int year, int month) {
    int days = 0;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 2:
        days = IsLeapYear(year) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        break;
    }
    return days;
}


/**
 * ���չ�ʽ: ����������������ĳһ�������ڼ�
 * @param year ��
 * @param month ��
 * @param day ��
 * @return
 */
int getDayOfWeek(int year, int month, int day) {
    int c, y, week;
    //�ж�month�Ƿ�Ϊ1��2��
    if (month == 1 || month == 2) {
        year--;
        month += 12;
    }

    c = year / 100;
    y = year - c * 100;
    week = (c / 4) - 2 * c + (y + y / 4) + (13 * (month + 1) / 5) + day - 1;

    while (week < 0) {
        week += 7;
    }
    week %= 7;
    return week;
}


/**
 * ��ӡĳһ���µ�����
 * @param day ������ܹ��ж�����
 * @param wk  ����µĵ�1�������ڼ�
 */
void PrintCalendar(int year) {
    //��ǰ���
    for (int i = 1; i <= 12; i++) {
        //������ݺ��·ݻ�ȡ�����ж�����
        int days = GetDays(year, i);
        //��ǰ�µ�һ�������ڼ�
        int week = getDayOfWeek(year, i, 1);
        int k = 0;
        printf("   ���:%d     �·�:%d\n", year, i);
        printf("   ---------------------------------\n");
        printf("   ��   һ   ��   ��   ��   ��   ��\n");
        char str[] = { "     " };
        for (int j = 0; j < week; j++) {
            printf("%s", str);
            k = k + 1;
        }
        for (int l = 1; l <= 31; l++) {
            printf("%5d", l);
            k = k + 1;
            if (k % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n\n");
    }
}


int main() {
    //�������
    int year = 2022;
    PrintCalendar(year);
}

