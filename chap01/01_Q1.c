///* Q1 네 정수의 최댓값을 구합니다. */
//#include <stdio.h>
//
///*--- a, b, c, d의 최댓값을 구합니다. ---*/
//int max4(int a, int b, int c, int d)
//{
//	int max = a;	/* 최댓값 */
//
//	if (b > max) max = b;
//	if (c > max) max = c;
//	if (d > max) max = d;
//
//	return max;
//}
//
//int main(void)
//{
//	int a, b, c, d;
//
//	printf("네 정수의 최댓값을 구합니다.\n");
//	printf("a의 값 : ");	scanf("%d", &a);
//	printf("b의 값 : ");	scanf("%d", &b);
//	printf("c의 값 : ");	scanf("%d", &c);
//	printf("d의 값 : ");	scanf("%d", &d);
//
//	printf("최댓값은 %d입니다.\n", max4(a, b, c, d));
//
//	return 0;
//}