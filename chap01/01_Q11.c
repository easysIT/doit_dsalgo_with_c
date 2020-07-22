///* Q11 양의 정수의 자릿수를 구합니다. */
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	int digits = 0; /* 자릿수 */
//
//	do {
//		printf("양의 정수 : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	while (n > 0) {
//		n /= 10; /* x를 10으로 나눕니다. */
//		digits++;
//	}
//
//	printf("이 수는 %d 자리입니다.\n", digits);
//
//	return 0;
//}