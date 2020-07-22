///* Q16 직각이등변삼각형 출력 */
///*
//	!편집자주
//	실제로 '이등변' 삼각형처럼 보이지 않아 당황할 수 있습니다!
//	그렇지만 별(*)의 개수를 잘 세어보세요 :D
//	이등변 삼각형이 맞답니다!
//*/
//#include <stdio.h>
//
///*--- 직각이 왼쪽 아래인 경우 ---*/
//void triangleLB(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {			/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= i; j++)		/* i 개의 '*'를 출력 */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
///*---  직각이 왼쪽 위인 경우 ---*/
//void triangleLU(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i + 1; j++)		/* n - i + 1 개의 '*'를 출력 */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
///*--- 직각이 오른쪽 위인 경우 ---*/
//void triangleRU(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= i - 1; j++)			/* i - 1 개의 ' '을 출력 */
//			putchar(' ');
//		for (j = 1; j <= n - i + 1; j++)		/* n - i + 1개의 '*'를 출력 */
//			putchar('*');
//		putchar('\n'); 
//	}
//}
//
///*--- 직각이 오른쪽 아래인 경우 ---*/
//void triangleRB(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i 행 (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i; j++)			/* n - i 개의 ' '을 출력 */
//			putchar(' ');
//		for (j = 1; j <= i; j++)				/* i 개의 '*'를 출력 */
//			putchar('*');
//		putchar('\n'); 
//	}
//}
//
//int main(void)
//{
//	int n;
//
//	puts("직각 이등변 삼각형을 출력합니다.");
//	do {
//		printf("크기 : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	printf("\n 왼쪽   아래가 직각 \n"); triangleLB(n);
//	printf("\n 왼쪽   위가   직각 \n"); triangleLU(n);
//	printf("\n 오른쪽 위가   직각 \n"); triangleRU(n);
//	printf("\n 오른쪽 아래가 직각 \n"); triangleRB(n);
//
//	return 0;
//}