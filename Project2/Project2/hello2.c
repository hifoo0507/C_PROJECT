#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//float CircleArea(float radius);
//float CircleCirum(float radius);
// 
//struct student
//{
//	char name[20];
//	int korean, english, math;
//	double average;
//};	
//
//struct coordinate
//{
//	int x, y;
//
//};
//struct point
//{
//	int x, y;
//
//};
//struct person {
//	char name[20];
//	char sex;
//	int job_code;
//	union
//	{
//		char company_name[20];
//		char school_name[20];
//	}job_info;
//};

//enum week
//{
//	sun, mon, tue, wed, thu, fri, sat
//};

//int main(void) {

	// 1�� ����
	//int num;
	//int sum = 0;
	//printf("���� �Է� : ");
	//scanf("%d", &num);
	//for (int i = 1; i <= num; i++) {
	//	sum = sum + i;
	//}
	//printf("%d", sum);

	// 2�� ����
	//char ch;
	//printf("���� �Է� : ");
	//scanf("%c", &ch);
	//
	//if (ch >= 33 && ch <= 47) {
	//	printf("Ư������ �Դϴ�.");
	//}
	//else if (ch >= 48 && ch <= 57) {
	//	printf("���� �Դϴ�");
	//}
	//else if (ch >= 58 && ch <= 64) {
	//	printf("Ư������ �Դϴ�.");
	//}
	//else if (ch >= 65 && ch <= 90) {
	//	printf("(����)�빮�� �Դϴ�.");
	//}
	//else if (ch >= 91 && ch <= 96) {
	//	printf("Ư������ �Դϴ�.");
	//}
	//else if (ch >= 97 && ch <= 122) {
	//	printf("(����)�ҹ��� �Դϴ�.");
	//}
	//else if (ch >= 123 && ch <= 126) {
	//	printf("Ư������ �Դϴ�.");
	//}
	//
	//printf("%d", ch);
	// 
	// 3�� ����
	//char arr[20];
	//char length[128] = { 0 };
	//printf("���ڿ� �Է� : ");
	//gets(arr);
	//for (int i = 0; i < strlen(arr); i++) {
	//	length[arr[i]]++;
	//}
	//for (int i = 0; i < sizeof(length); i++)
	//{
	//	if (length[i] != 0) {
	//		printf("%c�� ���� : %d  ", i, length[i]);
	//	}
	//}
	
	// 4�� ����



	//enum week weekday;
	//
	//weekday = mon;
	//
	//switch (weekday)
	//{
	//case sun:
	//	printf("�Ͽ���");
	//	break;
	//case mon:
	//	printf("������");
	//	break;
	//case tue:
	//	printf("ȭ����");
	//	break;
	//default:
	//	break;
	//}
	//struct person s1, s2;
	//strcpy(s1.name, "������");
	//s1.sex = "��";
	//s1.job_code = 1;
	//strcpy(s1.job_info.school_name, "����");
	//
	//strcpy(s2.name, "�󸶹�");
	//s1.sex = "��";
	//s2.job_code = 2;
	//strcpy(s2.job_info.company_name, "īī��");
	//
	//printf("%s", s1.job_info.school_name);
	//printf("%d", s2.job_code);
	//
	// 1.
	//struct student s1, s2;
	//int num;
	//s1.korean = 50;
	//strcpy(s1.name, "������");
	//
	// 2.
	//struct student s1 = {"ȫ�浿", 90, 80, 70, 80.0};
	//int num;
	//return 0;
	// 
	//struct student s1 = { "ȫ�浿", 93, 83, 72 };
	//s1.average = (double)(s1.korean + s1.english + s1.math) / 3;
	//printf("%.2f", s1.average);
	//
	// ���� ������ �Ÿ� 1.
	//struct coordinate d1, d2;
	//double answ;
	//printf("ù��° �� ��ǥ : ");
	//scanf("%d %d", &d1.x, &d1.y);
	//printf("ù��° �� ��ǥ : ");
	//scanf("%d %d", &d2.x, &d2.y);
	//answ = sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
	//printf("�� �� ������ �Ÿ� : %.2f\n", answ);
	//
	// ���� ������ �Ÿ� 2.
	//struct point p[2];
	//struct point* pt;
	//pt = &p[0];
	//float distance;
	// 	
	//for (int i = 0; i <= 1; i++)
	//{
	//	printf("%d��° ���� ��ǥ : ", i + 1);
	//	scanf("%d %d", &p[i].x, &p[i].y);
	//
	//}
	//distance = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
	//printf("�� �� ������ �Ÿ� : %.2f", distance);

	//scanf("%d %d", &p[1].x, &p[1].y);
	//printf("�ι�° �� ��� :  %d %d\n", pt->x, pt->y);

	//return 0;
	//float num;
	//
	//printf("�Է��� ������ : ");
	//scanf("%f", &num);
	//
	//printf("%.2f\n", CircleArea(num));
	//printf("%.2f", CircleCirum(num));
	//return 0;
	//char str1[20], str2[20];
	//scanf("%s", str1);
	//strcpy(str2, "Hello");
	//
	//printf("���ڿ� ���� : %d\n", strlen(str1));
	//if (strcmp(str1, str2) == 0) {
	//	printf("��ġ\n");
	//}
	//else
	//{
	//	printf("����ġ\n");
	//}
	//
	//strcat(str2, str1);
	//printf("%s", str2);
	//
	//return 0;
	// 	 
	//char name[20], msg[40];
	// 
	//printf("�̸��� �Է��ϼ��� : ");
	//gets(name);
	// 
	//sprintf(msg, "%s��, �ȳ��ϼ���?", name);
	//puts(msg);
	// 
	//return 0;
	//
	//int num;
	//int* p;
	//p = &num;
	//*p = 10;
	//printf("%d\n", *p);
	//printf("%p\n", &p);
	//printf("%p\n", p);
	// 
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int* p = &arr[0];
	//for (int i = 0; i <= 9; i++) {
	//	printf("%d", *(p+i));
	//}
	//return 0;
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int* p = arr;
	// 
	//printf("%p\n", &arr[3]);
	//printf("%p\n", p+3);
	//printf("%p\n", arr+3);
	//printf("%p\n\n", &p[3]);
	// 
	//printf("%d\n", *(p+3));
	//printf("%d\n", p[3]);
	//printf("%d\n", *(arr + 3));
	//printf("%d\n", arr[3]);
	// 

//}

//int GetFactorial(int num) {
//	int output = 1;
//	if (num == 0) {
//		return 1;
//	}
//	else {
//		return num * GetFactorial(num - 1);
//	}
//}
//float CircleArea(float radius) {
//	return radius * radius * 3.14;
//}
//
//float CircleCirum(float radius) {
//	return (radius + radius) * 3.14;
//}