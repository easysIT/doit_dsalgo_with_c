///* Q6 bsearch 함수를 사용하여 내림차순으로 정렬된 배열 검색 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 정수를 비교하는 함수 (long형 내림차순)---*/
//int long_cmpr(const long *a, const long *b)
//{
//	if (*a < *b)
//		return 1;
//	else if (*a > *b)
//		return -1;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int i, nx, ky;
//	long *x;	
//	long *p;	
//
//	puts("bsearch 함수를 사용하여 검색");
//	printf("요솟수: ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(long));	
//
//	printf("내림차순으로 입력하세요.\n", nx);
//
//	printf("x[0] : ");
//	scanf("%ld", &x[0]);
//
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf("%ld", &x[i]);
//		} while (x[i] > x[i - 1]);	/* 바로 앞의 값보다 작으면 다시 입력 */
//	}
//
//	printf("검색 값: ");
//	scanf("%d", &ky);
//
//	p = bsearch(&ky,					/* 검색 값에 대한 포인터 */
//		x,								/* 배열 */
//		nx,								/* 요솟수 */
//		sizeof(int),					/* 요소의 크기 */
//		(int(*)(const void *, const void *))long_cmpr	/* 비교 함수 */
//	);
//
//	if (p == NULL)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%ld는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//
//	free(x);	
//
//	return 0;
//}
