///* Q5 배열의 요소를 역순으로 정렬합니다. */
///*
//	!편집자주
//	'정렬'이라는 말 때문에 내림차순이 오름차순으로 정렬(또는 반대로)된다고 생각하면 안 됩니다.
//	이 문제는 주어진 배열의 요소를 앞뒤로 뒤집는 것입니다.
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- type 형의 x와 y의 값을 교환 ---*/
//#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)
//
///*--- 요솟수 n인 배열 a의 요소를 차례로 출력 ---*/
//void ary_print(const int a[], int n)
//{
//	int i;
//	for (i = 0; i  <n; i++)
//		printf("%d", a[i]);
//	putchar('\n');
//}
//
///*--- 요솟수 n인 배열 a의 요소를 역순으로 정렬 ---*/
//void ary_reverse(int a[], int n)
//{
//	int i;
//
//	for (i = 0; i < n / 2; i++) {
//		ary_print(a, n);
//		printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i - 1);
//		swap(int, a[i], a[n - i - 1]);
//	}
//	ary_print(a, n);
//	puts("역순정렬이 끝났습니다.");
//}
//
//int main(void)
//{
//	int i;
//	int *x;			/* 배열의 첫 번째 요소에 대한 포인터 */
//	int nx;			/* 배열 x의 요솟수 */
//
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));					/* 요솟수 nx인 int 형 배열 x를 생성 */
//
//	printf("%d 개의 정수를 입력하세요.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	ary_reverse(x, nx);								/* 배열 x의 요소를 역순으로 정렬 */
//
//	printf("배열 요소를 역순으로 정렬했습니다.\n");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d입니다.\n", i, x[i]);
//
//	free(x); /* 배열 x를 해제 */
//
//	return 0;
//}