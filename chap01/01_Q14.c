///* Q14 정사각형 출력 */
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int n; /* 몇 단으로 쌓을지 입력합니다. */
//
//	puts("정사각형을 표시합니다.");
//	do {
//		printf("단수 : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}