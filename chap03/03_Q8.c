///* Q8 bsearch 함수와 같은 함수 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- base가 가리키는 요소의 크기가 size이고 요솟수가 nmemb인 배열에서 key와 일치하는 요소를
//비교 함수 compar를 사용하여 2진 검색 ---*/
//void *binsearch(const void *key, const void *base, size_t nmemb, size_t size,
//	int(*compar)(const void *, const void *))
//{
//	size_t pl = 0;						/* 검색 범위의 첫 인덱스 */
//	size_t pr = nmemb - 1;				/* 검색 범위의 끝 인덱스 */
//	size_t pc;							/* 검색 범위의 가운데 인덱스 */
//	char   *x = (char *)base;
//
//	if (nmemb > 0) {
//		while (1) {
//			int comp = compar((const void *)&x[(pc = (pl + pr) / 2) * size], key);
//
//			if (comp == 0)	 				/* 검색 성공 */
//				return &x[pc * size];
//			else if (pl == pr)
//				break;
//			else if (comp < 0)
//				pl = pc + 1;				/* 검색 범위를 후반부로 좁혀감 */
//			else
//				pr = pc - 1;				/* 검색 범위를 전반부로 좁혀감 */
//		}
//	}
//
//	return NULL;							/* 검색 실패 */
//}
//
///*--- 정수를 비교하는 함수 ---*/
//int int_cmp(const int *a, const int *b)
//{
//	if (*a < *b)
//		return -1;
//	else if (*a > *b)
//		return 1;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int i, nx, ky;
//	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */
//	int *p;		/* 검색된 요소에 대한 포인터 */
//
//	puts("binsearch 함수를 사용하여 검색");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int형 배열을 생성 */
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
//
//	printf("검색 값 : ");
//	scanf("%d", &ky);
//
//	p = binsearch(&ky,								/* 검색 값에 대한 포인터 */
//		x,											/* 배열 */
//		nx,											/* 요솟수 */
//		sizeof(int),								/* 요소의 크기 */
//		(int(*)(const void *, const void *))int_cmp	/* 비교 함수 */
//	);
//
//	if (p == NULL)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//
//	free(x);
//
//	return 0;
//}
