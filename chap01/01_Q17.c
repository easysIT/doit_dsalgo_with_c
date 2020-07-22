///* Q17 특수문자 '*'로 피라미드를 출력 */
//#include <stdio.h>
//
///*--- 특수문자 '*'로 피라미드를 출력 ---*/
//void spira(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {						/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i; j++)				/* n-i 개의 ' '을 출력 */
//			putchar(' ');
//		for (j = 1; j <= (i - 1) * 2 + 1; j++)		/* (i-1)*2+1개의 '*'을 출력 */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
//int main(void)
//{
//	int n;
//
//	puts("피라미드를 출력합니다.");
//	do {
//		printf("단수 : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	spira(n);
//
//	return 0;
//}