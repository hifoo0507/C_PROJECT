#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void) {
//    int num;
//    scanf("%d", &num);
//    printf("%d", &num);
//    return 0;
//}

//int main(void) {
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
//}

int main(void) {
	int num;
	int num2;

	scanf("&d와 %d를 더합니다.", &num, &num2);

	int num3 = num + num2;
	printf("답 : %d" num3);
}