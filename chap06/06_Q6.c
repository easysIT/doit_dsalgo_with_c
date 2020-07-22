///* Q6 양방향 버블 정렬(셰이커 정렬) */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)
//
///*--- 양방향 버블 정렬(셰이커 정렬) ---*/
//void shaker(int a[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int last = right;
//
//	while (left < right) {
//		int j;
//		for (j = right; j > left; j--) {
//			if (a[j - 1] > a[j]) {
//				swap(int, a[j - 1], a[j]);
//				last = j;
//			}
//		}
//		left = last;
//
//		for (j = left; j < right; j++) {
//			if (a[j] > a[j + 1]) {
//				swap(int, a[j], a[j + 1]);
//				last = j;
//			}
//		}
//		right = last;
//	}
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("양방향 버블 정렬");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	shaker(x, nx);					
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	
//
//	return 0;
//}
