#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>
#include<string.h>

//#define MAX_STUDENT 5
typedef struct ListNode
{
	//char subject[20];
	int score;
	struct ListNode* next;
}LIST;

void Add_Rear(LIST* LinkedList, int new_num);
//, char* new_sub[20]
void Print_All(LIST* LinkedList);
LIST* MakeLinkedList();
//typedef struct student {
//	 	char name[20];
//	 	int korean, english, math;
//		double average;
//} STUDENT;
//typedef struct point
//{
//	int x;
//	int y;
//}POINT;
//void GetSumproduct(int x, int y, int* sum, int* product);
//void PrintPoint(POINT* p);
int main(void) {
	int choose = 1;
	//char subject[20];
	int score;
	struct ListNode* next;
	//STUDENT std[MAX_STUDENT];
	//int i;
	//FILE* fp = NULL;
	//for (i = 0; i < MAX_STUDENT; i++) {
	//	printf("학생 정보를 입력하세요 : ");
	//	scanf("%s %d %d %d", std[i].name,&std[i].korean, &std[i].english, &std[i].math);
	//	std[i].average = (double)(std[i].korean+std[i].english + std[i].math) / 3;
	//}
	//fp = fopen("report.txt", "w");
	//if (fp == NULL) {
	//	printf("파일열기 실패\n");
	//	return -1;
	//}
	//for (i = 0; i < MAX_STUDENT; i++)
	//{
	//	fprintf(fp, "%-10s %3d %3d %3d %6.2f\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	//}
	//fclose(fp);
	//return 0;
	//POINT p1 = { 100, 200 };
	//PrintPoint(&p1);
	//return 0;
	//int a, b;
	//int res1, res2;
	//
	//scanf("%d %d", &a, &b);
	//GetSumproduct(a, b, &res1, &res2);
	//
	//printf("%d * %d = %d\n", a, b, res1);
	//printf("%d ^ %d = %d\n", a, b, res2);
	//
	//return 0;
	//int n, count;
	//printf("양의 정수 입력 : ");
	//scanf("%d", &n);
	//for (int i = 0; i < 100; i+=n)
	//{
	//		printf("%d, ", i);
	//}
	//printf("\n%d의 배수의 개수 : %d", n, 100/n);
	//return 0;
	//
	//int n;
	//printf("수 입력 : ");
	//scanf("%d", &n);
	//if (n <= 0) {
	//	printf("잘못 입력 되었습니다.");
	//}
	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j < 6; j++)
	//	{
	//		int num = 1;
	//		for (int k = 0; k < j; k++)
	//		{
	//			num *= i;
	//		}
	//		printf("%d^%d=%d\n", i, j, num);
	//	}
	//}
	//return 0;
	//
	//char arr[2][10];
	//printf("문자열 입력 : ");
	//scanf("%s %s", &arr[0], &arr[1]);
	//if (strcmp(arr[0],arr[1]) == 0)
	//{
	//	printf("서로 일치 합니다. %s", arr[0]);
	//}
	//else {
	//	printf("서로 불일치 합니다.");
	//	if (strlen(arr[0])> strlen(arr[1]))
	//	{
	//		printf("%s", arr[0]);
	//	} else {
	//		printf("%s", arr[1]);
	//	}
	//}
	//return 0;
	//
	LIST* NewList = MakeLinkedList();// 리스트 생성
	while (choose != 0)
	{
		printf("기능 선택 -0번 종료 -1번 추가 -2번 출력 : ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1: //추가
			//printf("과목 : ");
			//gets(subject);
			printf("점수 : ");
			scanf("%d", &score);
			Add_Rear(NewList, score);
			break;
		case 2: // 출력
			Print_All(NewList);
			break;
		}
	}
	return 0;
}

LIST* MakeLinkedList() { //LinkedList 생성
	LIST* node = (LIST*)malloc(sizeof(LIST));
	//strcpy(node->subject, NULL);
	node->score = NULL;
	node->next = NULL;
	return node;
}
void Add_Rear(LIST* LinkedList, int new_num) {
	//char* new_sub[20]
	LIST* temp = LinkedList;

	if (temp->score == NULL)
	{
		//strcpy(temp->subject, new_sub); //과목 추가
		temp->score = new_num; //점수 추가
	}
	else
	{
		LIST* Newnode = (LIST*)malloc(sizeof(LIST));
		while (temp->next != NULL)
		{
			temp = temp->next;
		}temp->next = Newnode;
		Newnode->next = NULL;

		//strcpy(Newnode->subject new_sub); //과목 추가
		Newnode->score = new_num; //점수 추가
	}
}
void Print_All(LIST* LinkedList) {
	LIST* temp = LinkedList;
	while (temp)
	{
		printf("%d ", temp->score);
		temp = temp->next;
	}
	printf("\n");
}
//void PrintPoint(POINT* p) {
//	int y2;
//	y2 = p->y;
//	p->y = p->x;
//	p->x = y2;
//}
//void GetSumproduct(int x, int y, int* sum, int* product) {
//	*sum = x * y;
//	*product = pow(x, y);
//}