#include <stdio.h>
#include <stdbool.h>

/**
  * ����ÿ�����ж�����
  *     �������Ӧ�ó���: ���
  * ֱ��ʹ����������ȡÿ���µ�����,��ʹ��switch-caseҪ��ܶ�
  * @param month
  */
int getDaysByMonth(int month) {
    //Ĭ��Ϊ����
    bool isLeap = true;
    static const int days[] = { 29,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (month == 2 && isLeap) {
        month = 0;
    }
    return days[month];
}


/**
 * �����·ݺ�����,��ȡ�ӵ�һ�쵽��������ܹ��ж�����
 * @param month
 * @param day
 * @return
 */
 //����ö����߳���׳��,�ô��ǿ�����getDays()����֮����������������Ĵ����߼�,������ֱ����getDays()��������������������Ĵ����߼�
 //����һ�ֺ����õı��˼ά,Ҳ����ʹ�ú궨����ʵ��������ö�ٵ�����,����ʵ�ָ��õķ�������߼����쳣�����߼�
enum {
    MONTH_ERROR = -1,
    DAY_ERROR = -2
};

int getDays(int month, int day) {
    //����-1����������·ݲ�����
    if (month < 1 || month > 12) {
        return MONTH_ERROR;
    }
    //����-2�������������������
    if (day < 1 || day > 31) {
        return DAY_ERROR;
    }
    int totalDays = 0;
    for (int i = 1; i < month; i++) {
        //���Բ��ʹ������
        totalDays += getDaysByMonth(i);
    }
    return totalDays = totalDays + day;
}

int main() {
    //��ȡ�ӵ�һ�쵽��������ܹ��ж�����
    int days = getDays(2, 1);
    switch (days) {
    case -1:
        printf("������·�����!\n");
        break;
    case -2:
        printf("�������������!\n");
        break;
    default:
        printf("������: %d\n", days);
        break;
    }

}