///* Q5 2진 검색 (가장 앞쪽에 있는 요소를 검색) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a에서 key와 일치하는 요소를 2진 검색 (가장 앞쪽에 있는 요소를 검색) ---*/
//int bin_search2(const int a[], int n, int key)
//{
//	int pl = 0;			/* 검색 범위의 첫 인덱스 */
//	int pr = n - 1;		/*     ··      끝 인덱스 */
//	int pc;				/*     ··      가운데 인덱스 */
//
//	do {
//		pc = (pl + pr) / 2;
//		if (a[pc] == key) {		/* 검색 성공 */
//			while (pc > pl && a[pc - 1] == key)
//				pc--;
//			return pc;
//		}
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);
//
//	return -1;					/* 검색 실패 */
//}
//
//int main(void)
//{
//	int i, nx, ky, idx;
//	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */
//
//	puts("２진 검색");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	
//
//	printf("오름차순으로 입력하세요.\n");
//	printf("x[0] : ");
//	scanf("%d", &x[0]);
//
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf("%d", &x[i]);
//		} while (x[i] < x[i - 1]);	/* 바로 앞의 값보다 작으면 다시 입력 */
//	}
//	printf("검색 값: ");
//	scanf("%d", &ky);
//
//	idx = bin_search2(x, nx, ky);	/* 배열 x에서 값이 ky인 요소를 2진 검색 */
//
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", ky, idx);
//
//	free(x);
//
//	return 0;
//}
