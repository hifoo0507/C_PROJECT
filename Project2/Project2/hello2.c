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

	// 1번 문제
	//int num;
	//int sum = 0;
	//printf("숫자 입력 : ");
	//scanf("%d", &num);
	//for (int i = 1; i <= num; i++) {
	//	sum = sum + i;
	//}
	//printf("%d", sum);

	// 2번 문제
	//char ch;
	//printf("문자 입력 : ");
	//scanf("%c", &ch);
	//
	//if (ch >= 33 && ch <= 47) {
	//	printf("특수문자 입니다.");
	//}
	//else if (ch >= 48 && ch <= 57) {
	//	printf("숫자 입니다");
	//}
	//else if (ch >= 58 && ch <= 64) {
	//	printf("특수문자 입니다.");
	//}
	//else if (ch >= 65 && ch <= 90) {
	//	printf("(영어)대문자 입니다.");
	//}
	//else if (ch >= 91 && ch <= 96) {
	//	printf("특수문자 입니다.");
	//}
	//else if (ch >= 97 && ch <= 122) {
	//	printf("(영어)소문자 입니다.");
	//}
	//else if (ch >= 123 && ch <= 126) {
	//	printf("특수문자 입니다.");
	//}
	//
	//printf("%d", ch);
	// 
	// 3번 문제
	//char arr[20];
	//char length[128] = { 0 };
	//printf("문자열 입력 : ");
	//gets(arr);
	//for (int i = 0; i < strlen(arr); i++) {
	//	length[arr[i]]++;
	//}
	//for (int i = 0; i < sizeof(length); i++)
	//{
	//	if (length[i] != 0) {
	//		printf("%c의 수는 : %d  ", i, length[i]);
	//	}
	//}
	
	// 4번 문제



	//enum week weekday;
	//
	//weekday = mon;
	//
	//switch (weekday)
	//{
	//case sun:
	//	printf("일요일");
	//	break;
	//case mon:
	//	printf("월요일");
	//	break;
	//case tue:
	//	printf("화요일");
	//	break;
	//default:
	//	break;
	//}
	//struct person s1, s2;
	//strcpy(s1.name, "가나다");
	//s1.sex = "남";
	//s1.job_code = 1;
	//strcpy(s1.job_info.school_name, "양디고");
	//
	//strcpy(s2.name, "라마바");
	//s1.sex = "여";
	//s2.job_code = 2;
	//strcpy(s2.job_info.company_name, "카카오");
	//
	//printf("%s", s1.job_info.school_name);
	//printf("%d", s2.job_code);
	//
	// 1.
	//struct student s1, s2;
	//int num;
	//s1.korean = 50;
	//strcpy(s1.name, "가나다");
	//
	// 2.
	//struct student s1 = {"홍길동", 90, 80, 70, 80.0};
	//int num;
	//return 0;
	// 
	//struct student s1 = { "홍길동", 93, 83, 72 };
	//s1.average = (double)(s1.korean + s1.english + s1.math) / 3;
	//printf("%.2f", s1.average);
	//
	// 두점 사이의 거리 1.
	//struct coordinate d1, d2;
	//double answ;
	//printf("첫번째 점 좌표 : ");
	//scanf("%d %d", &d1.x, &d1.y);
	//printf("첫번째 점 좌표 : ");
	//scanf("%d %d", &d2.x, &d2.y);
	//answ = sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
	//printf("두 점 사이의 거리 : %.2f\n", answ);
	//
	// 두점 사이의 거리 2.
	//struct point p[2];
	//struct point* pt;
	//pt = &p[0];
	//float distance;
	// 	
	//for (int i = 0; i <= 1; i++)
	//{
	//	printf("%d번째 점의 좌표 : ", i + 1);
	//	scanf("%d %d", &p[i].x, &p[i].y);
	//
	//}
	//distance = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
	//printf("두 점 사이의 거리 : %.2f", distance);

	//scanf("%d %d", &p[1].x, &p[1].y);
	//printf("두번째 점 출력 :  %d %d\n", pt->x, pt->y);

	//return 0;
	//float num;
	//
	//printf("입력한 반지름 : ");
	//scanf("%f", &num);
	//
	//printf("%.2f\n", CircleArea(num));
	//printf("%.2f", CircleCirum(num));
	//return 0;
	//char str1[20], str2[20];
	//scanf("%s", str1);
	//strcpy(str2, "Hello");
	//
	//printf("문자열 길이 : %d\n", strlen(str1));
	//if (strcmp(str1, str2) == 0) {
	//	printf("일치\n");
	//}
	//else
	//{
	//	printf("불일치\n");
	//}
	//
	//strcat(str2, str1);
	//printf("%s", str2);
	//
	//return 0;
	// 	 
	//char name[20], msg[40];
	// 
	//printf("이름을 입력하세요 : ");
	//gets(name);
	// 
	//sprintf(msg, "%s씨, 안녕하세요?", name);
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