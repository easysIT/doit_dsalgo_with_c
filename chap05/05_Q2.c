///* Q2 유클리드 호제법으로 최대 공약수의 값은 비재귀적으로 구합니다. */
//#include <stdio.h>
//
///*--- 정수 x, y의 최대 공약수 반환 ---*/
//int gcd(int x, int y)
//{
//	while (y != 0) {
//		int temp = y;
//		y = x % y;
//		x = temp;
//	}
//	return x;
//}
//
//int main(void)
//{
//	int x, y;
//
//	puts("두 정수의 최대 공약수를 구합니다.");
//
//	printf("정수를 입력하세요. : ");
//	scanf("%d", &x);
//
//	printf("정수를 입력하세요. : ");
//	scanf("%d", &y);
//
//	printf("최대 공약수는 %d입니다.\n", gcd(x, y));
//
//	return 0;
//}
