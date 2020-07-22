///* Q14 퀵 정렬(비재귀 버전) */
///* 이 프로그램의 컴파일에는 IntStack.h와 IntStack.c가 필요합니다. */
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "IntStack.h"
//
//#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)
//
///*--- 퀵 정렬(비재귀 버전) ---*/
//void quick(int a[], int left, int right)
//{
//	IntStack lstack;		/* 분할하는 앞쪽 요소의 인덱스를 저장할 스택 */
//	IntStack rstack;		/* 분할하는 뒤쪽 요소의 인덱스를 저장할 스택 */
//
//	Initialize(&lstack, right - left + 1);
//	Initialize(&rstack, right - left + 1);
//
//	Push(&lstack, left);
//	Push(&rstack, right);
//
//	printf("a[%d] ~ a[%d]를 스택에 푸시합니다.\n", left, right);
//	printf("Lstack:");   Print(&lstack);
//	printf("Rstack:");   Print(&rstack);
//
//	while (!IsEmpty(&lstack)) {
//		int pl = (Pop(&lstack, &left), left);		/* 왼쪽 커서 */
//		int pr = (Pop(&rstack, &right), right);		/* 오른쪽 커서 */
//		int x = a[(left + right) / 2];				/* 피벗(가운데 요소 선택) */
//		
//		printf("====================================================\n");
//		printf("스택에서 꺼낸 배열의 범위는 a[%d] ~ a[%d]입니다.\n", left, right);
//		printf("====================================================\n");
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
//		if (left < pr) {
//			Push(&lstack, left);	/* 왼쪽 그룹의 범위 */
//			Push(&rstack, pr);		/* 인덱스 푸시 */
//
//			printf("a[%d] ~ a[%d]를 스택에 푸시합니다.\n", left, pr);
//			printf("Lstack:");   Print(&lstack);
//			printf("Rstack:");   Print(&rstack);
//		}
//		if (pl < right) {
//			Push(&lstack, pl);		/* 오른쪽 그룹의 범위 */
//			Push(&rstack, right);	/* 인덱스 푸시 */
//
//			printf("a[%d] ~ a[%d]를 스택에 푸시합니다.\n", pl, right);
//			printf("Lstack:");   Print(&lstack);
//			printf("Rstack:");   Print(&rstack);
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