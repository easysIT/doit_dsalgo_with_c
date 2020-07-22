///* Q3 버블 정렬로 배열이 정렬을 마쳤는지 검사하기 */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)
//
///*--- 버블 정렬 응용 ---*/
//int is_sorted(int a[], int n)
//{
//	int i;
//
//	for (i = n - 1; i > 0; i--)
//		if (a[i - 1] > a[i])
//			return 0;
//	return 1;
//}
//
//int main(void)
//{
//	int i, nx, sorted;
//	int *x;		
//
//	puts("버블 정렬 응용(배열 정렬 검사)");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	sorted = is_sorted(x, nx);		/* 배열 x가 정렬되었는지 확인 */
//
//	if (sorted)
//		puts("배열이 정렬되어 있습니다.");
//	else
//		puts("배열이 정렬되어있지 않습니다.");
//
//	free(x);	
//
//	return 0;
//}
