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
//    printf("�Ǽ��� �Է��ϼ��� : ");
//    scanf("%f", &num);
//
//    i_part = num;
//    f_part = num - i_part;
//
//    printf("%f�� �����δ� %d�̰�, �Ǽ��δ� %f�Դϴ�.\n", num, i_part, f_part);
//    return 0;
//}

int main(void) {
	int num;
	int num2;

	scanf("&d�� %d�� ���մϴ�.", &num, &num2);

	int num3 = num + num2;
	printf("�� : %d" num3);
}