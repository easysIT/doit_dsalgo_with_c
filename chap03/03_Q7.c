///* Q7 bsearch 함수와 같은 형식의 선형 검색 함수 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- base가 가리키는 요소의 크기가 size이고 요솟수가 nmemb인 배열에서 key와 일치하는 요소를
//비교 함수 compar을 사용하여 선형 검색 ---*/
//void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size,
//	int(*compar)(const void *, const void *))
//{
//	size_t i;
//	char   *x = (char *)base;
//
//	for (i = 0; i < nmemb; i++)
//		if (!compar((const void *)&x[i * size], key))
//			return (&x[i * size]);
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
//	puts("seqsearch 함수를 사용하여 검색");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int형 배열을 생성 */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	printf("검색 값 : ");
//	scanf("%d", &ky);
//
//	p = seqsearch(&ky,								/* 검색 값에 대한 포인터 */
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
