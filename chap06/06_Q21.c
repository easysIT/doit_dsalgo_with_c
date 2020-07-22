///* Q21 범용 병합 정렬 */
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//static char *buff;			/* 작업용 배열 */
//
///*--- 범용 병합 정렬 ---*/
//void __mergesort(char *a, size_t left, size_t right, size_t size, int(*compar)(const void *, const void *))
//{
//	if (left < right) {
//		size_t center = (left + right) / 2;
//		size_t p = 0;
//		size_t i;
//		size_t j = 0;
//		size_t k = left;
//
//		__mergesort(a, left, center, size, compar);			/* 앞쪽 부분을 병합 정렬 */
//		__mergesort(a, center + 1, right, size, compar);	/* 뒤쪽 부분을 병합 정렬 */
//
//		for (i = left; i <= center; i++)
//			memcpy(&buff[p++ * size], &a[i * size], size);
//
//		while (i <= right && j < p)
//			memcpy(&a[k++ * size], compar((const void *)&buff[j * size], (const void *)&a[i * size]) <= 0 ?
//				&buff[j++ * size] : &a[i++ * size], size);
//
//		while (j < p)
//			memcpy(&a[k++ * size], &buff[j++ * size], size);
//	}
//}
//
///*--- 범용 병합 정렬 ---*/
//void m_sort(void *base, size_t nmemb, size_t size,
//	int(*compar)(const void *, const void *))
//{
//	if (nmemb > 0) {
//		buff = calloc(nmemb, size);
//
//		__mergesort(base, 0, nmemb - 1, size, compar);		/* 배열 전체를 병합 정렬 */
//
//		free(buff);
//	}
//}
//
//int int_cmp(const int *a, const int *b)
//{
//	return *a < *b ? -1 : *a > *b ? 1 : 0;
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("m_sort 함수로 정렬합니다.");
//	printf("요솟수：");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	m_sort(x,											/* 배열 */
//		nx,												/* 요솟수 */
//		sizeof(int),									/* 요소 하나의 크기 */
//		(int(*)(const void *, const void *))int_cmp		/* 비교 함수 */
//	);
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);
//
//	return 0;
//}
