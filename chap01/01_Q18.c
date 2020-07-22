///* Q18 숫자 문자를 정렬하여 역방향 피라미드를 출력 */
//#include <stdio.h>
//
///*--- 숫자 문자를 정렬하여 역방향 피라미드를 출력 ---*/
//void nrpira(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {							/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= i - 1; j++)					/* i-1 개의 ' '을 출력 */
//			putchar(' ');
//		for (j = 1; j <= (n - i) * 2 + 1; j++)			/* (n-i) * 2 + 1개의 숫자를 출력 */
//			printf("%d", i % 10);
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
//	nrpira(n);
//
//	return 0;
//}