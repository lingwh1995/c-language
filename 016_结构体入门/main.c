#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/**
 * �½�����:
 *      �ṹ�����,��Ϊ�ṹ���Ǳ���,���Կ���ʹ��������ʽ
 *      ����һ��ȫ�ֽṹ����������ַ���
 *      ��ʽһ:
 *          struct Student {
 *              char id[32];
 *              char name[50];
 *              int age;
 *          }Stud;
 *      ��ʽ��:
 *          struct Student {
 *              char id[32];
 *              char name[50];
 *              int age;
 *          };
 *      struct Student Stud;
 *
 *      ע��:
 *          1.�ṹ��������Ϊ�����Եļ���
 *          2.�ṹ����Զ�����������֮��,Ҳ���Զ�����������֮��
 *          3.ȫ�ֽṹ��Ĭ���ǹ��е�,����ζ�����еķ����������޸Ľṹ����������Ե�ֵ,������һ�������и����Ը�ֵ
 *           ֮��,����һ��������Ҳ���Ի�ȡ���ñ����޸ĺ�ĵ�ֵ
 */

/**
* ����ṹ��Ͷ���ṹ�����:
*  ��ʽһ: �ȶ���ṹ��,�ٶ���ṹ�����
*/
//����structĬ����ȫ�ֵ�,��Ϊ������main()����֮��
struct Student {
    char id[32];
    char name[50];
    int age;
};
//������ṹ��(����һ�д���ſ��ᱨ��,��Ϊû���ڱ���ǰ��struct)
//Student student_g;
//��ȷ����ṹ�壬�˴�����Ľṹ�����Ϊȫ�ֱ���
struct Student student_g;

/**
 * ����ṹ��Ͷ���ṹ�����:
 *  ��ʽ��: ����ṹ���ͬʱ����ṹ�����
 */
 //����structĬ����ȫ�ֵ�,��Ϊ������main()����֮��
struct User {
    char id[32];
    char name[50];
    int age;
} user_g, * pUser_g; //�ṹ�����,�˴�����Ľṹ�����Ϊȫ�ֱ���,������������ֱ�ӳ�ʼ���ṹ�����

/**
 * ����������������ʹ��ȫ�ֽṹ�����
 */
void GolbalStructTest() {
    //Ϊʲô�������ʹ��user_g����ṹ�����?��Ϊ����ṹ�������ȫ�ֵ�,�൱���ǹ�����,һ�������и�ֵ,����������Ҳ���Ի�ȡ��ֵ
    printf("����������������ʹ��ȫ�ֽṹ��,user_g.age = %d\n", user_g.age);
}

int main() {    
    /**
     * ���Է�ʽһ����Ľṹ��
     */      
    //ȫ�ֽṹ�岿��
        //����ṹ�岢��ʼ��(����һ��ȫ�ֽṹ��)
    //struct User user_g = {"001","����",20};

    //����ṹ�岢��ʼ��(����һ���ֲ��ṹ��)
    struct Student student = { "001","����",20 };
    //��ͨ�������ʽṹ���Ա����
    printf("id:%s\n", student.id);
    printf("name:%s\n", student.name);
    printf("age:%d\n", student.age);
    printf("------------------------------\n");

    //ʹ��ָ����ʽṹ���Ա����
    struct Student* pStudent = &student;
    printf("id:%s\n", (*pStudent).id);
    printf("name:%s\n", (*pStudent).name);
    printf("age:%d\n", (*pStudent).age);
    printf("------------------------------\n");

    //ָ���ͷ���ʽṹ���Ա����,ע��: ʹ�ü�ͷ����: ǰ�治��Ҫ��*
    printf("id:%s\n", pStudent->id);
    printf("name:%s\n", pStudent->name);
    printf("age:%d\n", pStudent->age);

    printf("------------------------------\n");

    /**
     * ���Է�ʽ������Ľṹ��
     */
    //���������ͱ�����ֵʹ��strcpy()����
    strcpy(user_g.id, "002");
    strcpy(user_g.name, "lisi");
    user_g.age = 20;

    //����������������ʹ��ȫ�ֽṹ�����
    GolbalStructTest();

    //��ͨ�������ʽṹ���Ա����
    printf("id:%s\n", user_g.id);
    printf("name:%s\n", user_g.name);
    printf("age:%d\n", user_g.age);

    //ʹ��ָ����ʽṹ���Ա����
    pUser_g = &user_g;
    printf("id:%s\n", (*pUser_g).id);
    printf("name:%s\n", (*pUser_g).name);
    printf("age:%d\n", (*pUser_g).age);

    //ָ���ͷ���ʽṹ���Ա����,ע��: ʹ�ü�ͷ����: ǰ�治��Ҫ��*
    printf("id:%s\n", pUser_g->id);
    printf("name:%s\n", pUser_g->name);
    printf("age:%d\n", pUser_g->age);
    printf("------------------------------\n");


    /**
     * ����һ���ֲ��ṹ��
     */
    struct Person {
        char id[32];
        char name[32];
        int age;
    };
    //����һ���ṹ�����
    struct Person person = { "003","wangwu",36 };
    //��ͨ�������ʽṹ���Ա����
    printf("id:%s\n", person.id);
    printf("name:%s\n", person.name);
    printf("age:%d\n", person.age);

    //ʹ��ָ����ʽṹ���Ա����
    struct Person* pPerson = &person;
    printf("id:%s\n", (*pPerson).id);
    printf("name:%s\n", (*pPerson).name);
    printf("age:%d\n", (*pPerson).age);

    //ָ���ͷ���ʽṹ���Ա����,ע��: ʹ�ü�ͷ����: ǰ�治��Ҫ��*
    printf("id:%s\n", pPerson->id);
    printf("name:%s\n", pPerson->name);
    printf("age:%d\n", pPerson->age);
    printf("------------------------------\n");
}