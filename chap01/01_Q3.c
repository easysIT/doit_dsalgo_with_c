///* Q3 네 정수의 최솟값을 구합니다. */
//
//#include <stdio.h>
//
///*--- a, b, c, d의 최솟값을 구합니다. ---*/
//int min4(int a, int b, int c, int d)
//{
//	int min = a;	/* 최솟값 */
//
//	if (b < min) min = b;
//	if (c < min) min = c;
//	if (d < min) min = d;
//
//	return min;
//}
//
//int main(void)
//{
//	int a, b, c, d;
//
//	printf("네 정수의 최솟값을 구합니다.\n");
//	printf("a의 값 : ");	scanf("%d", &a);
//	printf("b의 값 : ");	scanf("%d", &b);
//	printf("c의 값 : ");	scanf("%d", &c);
//	printf("d의 값 : ");	scanf("%d", &d);
//
//	printf("최솟값은 %d입니다.\n", min4(a, b, c, d));
//
//	return 0;
//}