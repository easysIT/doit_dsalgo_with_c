///* Q15 퀵 정렬 (요솟수가 작은 그룹을 먼저 분할 : 비재귀 버전) */
///* 이 프로그램의 컴파일에는 IntStack.h와 IntStack.c가 필요합니다. */
//#include <stdio.h>
//#include <stdlib.h>
//#include "IntStack.h"
//
//#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)
//
///*--- 퀵 정렬 (요솟수가 작은 그룹을 먼저 분할 : 비재귀 버전) ---*/
//void quick(int a[], int left, int right)
//{
//	IntStack lstack;		
//	IntStack rstack;		
//
//	Initialize(&lstack, right - left + 1);
//	Initialize(&rstack, right - left + 1);
//
//	Push(&lstack, left);
//	Push(&rstack, right);
//
//	while (!IsEmpty(&lstack)) {
//		int pl = (Pop(&lstack, &left), left);	
//		int pr = (Pop(&rstack, &right), right);	
//		int x = a[(left + right) / 2];			
//
//		do {
//			while (a[pl] < x) pl++;
//			while (a[pr] > x) pr--;
//			if (pl <= pr) {
//				swap(int, a[pl], a[pr]);
//				pl++;
//				pr--;
//			}
//		} while (pl <= pr);
//
//		if (pr - left < right - pl) {
//			swap(int, pl, left);
//			swap(int, pr, right);
//		}
//		if (left < pr) {
//			Push(&lstack, left);	
//			Push(&rstack, pr);		
//		}
//		if (pl < right) {
//			Push(&lstack, pl);		
//			Push(&rstack, right);	
//		}
//	}
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("퀵 정렬");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	quick(x, 0, nx - 1);
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	
//
//	return 0;
//}
