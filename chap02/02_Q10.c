///* Q10 배열의 모든 요소의 순서를 뒤섞습니다. */
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- type 형의 x와 y의 값을 교환 ---*/
//#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)
//
///*--- 요솟수 n인 배열 a의 모든 요소의 순서를 셔플 ---*/
//void shuffle(int a[], int n)
//{
//	int i;
//
//	srand(time(NULL));
//	for (i = n - 1; i> 0; i--) {		/* 배열 a를 셔플 */
//		int j = rand() % (i + 1);
//		if (i != j)
//			swap(int, a[i], a[j]);
//	}
//}
//
//int main(void)
//{
//	int i;
//	int * x;		/* 배열의 첫 번째 요소에 대한 포인터 */
//	int nx;			/* 배열 x의 요솟수 */
//
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));			/* 요솟수 nx인 int 형 배열 x를 생성 */
//
//	printf("%d 개의 정수를 입력하세요.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	shuffle(x, nx); /* 배열 x의 요소 순서를 셔플 */
//
//	printf("배열 요소의 순서를 셔플했습니다.\n");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x); /* 배열 x를 해제 */
//
//	return 0;
//}