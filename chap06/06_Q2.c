///* Q2 버블 정렬(정렬 과정을 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)
//
///*--- 버블 정렬 함수 ---*/
//void bubble(int a[], int n)
//{
//	int i, j, m;
//	int ccnt = 0;		/* 비교 횟수 */
//	int scnt = 0;		/* 교환 횟수 */
//
//	for (i = 0; i < n - 1; i++) {
//		printf("패스%d：\n", i + 1);
//		for (j = n - 1; j > i; j--) {
//			for (m = 0; m < n - 1; m++)
//				printf("%3d %c", a[m], (m != j - 1) ? ' ' :
//				(a[j - 1] > a[j]) ? '+' : '-');
//			printf("%3d\n", a[n - 1]);
//
//			ccnt++;
//			if (a[j - 1] > a[j]) {
//				scnt++;
//				swap(int, a[j - 1], a[j]);
//			}
//		}
//		for (m = 0; m < n; m++)
//			printf("%3d  ", a[m]);
//		putchar('\n');
//	}
//	printf("비교 %d회\n", ccnt);
//	printf("교환 %d회\n", scnt);
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("버블 정렬(과정 출력)");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	bubble(x, nx);				
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	
//
//	return 0;
//}
