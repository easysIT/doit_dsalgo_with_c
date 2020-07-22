///* Q15 직사각형 출력 */
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int height, width; /* 높이와 너비 */
//
//	puts("직사각형으로 표시합니다.");
//
//	do {
//		printf("높이 : ");
//		scanf("%d", &height);
//	} while (height <= 0);
//
//	do {
//		printf("가로 : ");
//		scanf("%d", &width);
//	} while (width <= 0);
//
//	for (i = 1; i <= height; i++) {
//		for (j = 1; j <= width; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}