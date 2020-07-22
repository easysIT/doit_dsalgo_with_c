///* Q1 버블 정렬 */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)
//
///*--- 버블 정렬 함수 ---*/
//void bubble(int a[], int n)
//{
//	int i, j;
//
//	for (i = n - 1; i > 0; i--) {
//		for (j = 0; j < i; j++)
//			if (a[j] > a[j + 1])
//				swap(int, a[j], a[j + 1]);
//	}
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		/* 배열을 가리키는 포인터 */
//
//	puts("버블 정렬");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int형 배열을 생성 */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	bubble(x, nx);					/* 배열 x를 버블 정렬 */
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	/* 배열 해제 */
//
//	return 0;
//}
