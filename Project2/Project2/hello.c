#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int GetSum(int num1, int num2);
//int GetFectorial(int num);

//int main(void) {

	//char arr[10] = "Hello";
	//printf("%d\n", sizeof(arr));
	//printf("%d", strlen(arr));
	//return 0;
	// 
	//int sum = 0;
	//int arr[5];
	//int size = sizeof(arr) / sizeof(int);
	//
	//for (int i = 0; i < size; i++) {
	//	scanf("%d", &arr[i]);
	//	sum = sum + arr[i];
	//}
	//printf("%d", sum);
	//
	//int x, y, sum;
	//scanf("%d %d", &x, &y);
	//sum = GetSum(x, y);
	//printf("%d", sum);
	//return 0;
	//
	//int input;
	//scanf("%d", &input);
	//printf("%d", GetFectorial(input));
	//return 0;
	//
	//    int num;
	//    scanf("%d", &num);
	//    printf("%d", &num);
	//    return 0;
	// 
	//    float num;
	//    int i_part;
	//    float f_part;
	//
	//    printf("실수를 입력하세요 : ");
	//    scanf("%f", &num);
	//
	//    i_part = num;
	//    f_part = num - i_part;
	//
	//    printf("%f의 정수부는 %d이고, 실수부는 %f입니다.\n", num, i_part, f_part);
	//    return 0;
	// 
	//int num, num2;
	//
	//printf("입력한 두 정수를 더합니다 : ");
	//scanf("%d %d", &num, &num2);
	//
	//int num3 = num + num2;
	//printf("답 : %d", num3);
	//return 0;
	//
	//char ch;
	//
	//scanf("%c", &ch);
	//printf("%c 문자의 ASCII 코드 : %d (%x)\n", ch, ch, ch);
	//return 0;
	//
	//int num;
	//char ch;
	//double db;
	//printf("ch의 바이트 크기 : %d\n", sizeof ch);
	//printf("int의 바이트 크기 : %d\n", sizeof num);
	//printf("double의 바이트 크기 : %d\n", sizeof db);
	//printf("3.14의 바이트 크기 : %d\n", sizeof 3.14f);
	//
	//int a = 100;
	//double b = 3;
	//printf("%f", a / b);
	//
	//int num1, num2;
	//scanf("%d %d", &num1, &num2);
	//printf("%f", (float)num1 / num2);
	//return 0;
	//
	//int score;
	//char grade;
	//
	//printf("점수를 입력하세요 : ");
	//scanf("%d", &score);
	//
	//if (score >= 90) {
	//	grade = 'A';
	//}
	//else if (score >= 80) {
	//	grade = 'B';
	//}
	//else if (score >= 70) {
	//	grade = 'C';
	//}
	//else if (score >= 60) {
	//	grade = 'D';
	//}
	//else{
	//	grade = 'E';
	//}
	//printf("등급 : %c", grade);
	//
	//int a, b;
	//char op;
	//printf("수식을 입력하세요 : ");
	//scanf("%d %c %d", &a, &op, &b);
	//
	//switch (op) {
	//case '+':
	//	printf("%d + %d = %d\n", a, b, a + b);
	//	break;
	//case '-':
	//	printf("%d - %d = %d\n", a, b, a - b);
	//	break;
	//case '*':
	//	printf("%d * %d = %d\n", a, b, a * b);
	//	break;
	//case '/':
	//	printf("%d / %d = %d\n", a, b, a / b);
	//	break;
	//default:
	//	printf("계산할 수 없습니다.");
	//	break;
	//}
	//return 0;
	//
	//int num;
	//scanf("%d", &num);
	//for (int i = 1; i <= num; i++)
	//	printf("%d", i);
	// 
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 1; j <= 9; j++)
	//		printf("%d * %d = %2d ", j, i, i * j);
	//	printf("\n");
	//}
	//return 0;
	//
	//for (int i = 1; i <= num; i++) {
	//	for (int h = num-i; h >= 1; h--) {
	//		printf(" ");
	//	}
	//	for (int j = 1; j <= i * 2-1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
	//for (int i = num-1; i >= 1; i--) {
	//	for (int h = num - i; h >= 1; h--) {
	//		printf(" ");
	//	}
	//	for (int j = 1; j <= i * 2 - 1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
	//for (int i = 1; i <= num; i++) {
	//	for (int h = num - i; h >= 1; h--) {
	//		printf(" ");
	//	}
	//	for (int j = 1; j <= i * 2 - 1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
	//for (int i = 1; i <= num-1; i++) {
	//	for (int h = 1; h <= i; h++) {
	//		printf(" ");
	//	}
	//	for (int j = 1; j < num * 2 - (i * 2); j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//
	//	int num;
	//
	//	while (1)
	//	{
	//		printf("값 입력 : ");
	//		scanf("%d", &num);
	//		if (num == 0)
	//			break;
	//
	//		for (int i = 1; i <= num; i++) {
	//			for (int h = num - i; h >= 1; h--) {
	//				printf(" ");
	//			}
	//			for (int j = 1; j <= i * 2 - 1; j++) {
	//				printf("*");
	//			}
	//			printf("\n");
	//		}
	//
	//		for (int i = 1; i <= num - 1; i++) {
	//			for (int h = 1; h <= i; h++) {
	//				printf(" ");
	//			}
	//			for (int j = 1; j < num * 2 - (i * 2); j++) {
	//				printf("*");
	//			}
	//			printf("\n");
	//		}
	//	}
	//}
	//
	// 
	//int GetSum(int num1, int num2) {
	//	return  num1 + num2;
	//}
	// 
	//int GetFectorial(int num) {
	//
	//	int sum = 1;
	//
	//	for (int i = 1; i <= num; i++) {
	//		sum = sum * i;
	//	}
	//	return sum;
	//
	//}