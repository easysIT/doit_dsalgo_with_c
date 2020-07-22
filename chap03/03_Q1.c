///* Q1 선형 검색(보초법) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a에서 key와 일치하는 요소를 선형 검색 (보초법) ---*/
//int search(int a[], int n, int key)
//{
//	int i;
//
//	a[n] = key;					/* 보초를 추가 */
//
//	for (i = 0; i <n; i++)
//		if (a[i] == key)
//			break;				/* 찾은 경우 */
//
//	return i == n ? -1 : i;
//}
//
//int main(void)
//{
//	int i, nx, ky, idx;
//	int *x;						/* 배열의 첫 번째 요소에 대한 포인터 */
//
//	puts("선형 검색(보초법)");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx + 1, sizeof(int));		/* 요솟수 (nx + 1)인 int 형 배열을 생성 */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//	printf("검색 값 : ");
//	scanf("%d", &ky);
//
//	idx = search(x, nx, ky); /* 배열 x에서 값이 ky 인 요소를 선형 검색 */
//
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", ky, idx);
//
//	free(x); /* 배열을 해제 */
//
//	return 0;
//}