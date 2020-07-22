///* Q1 배열 요소의 최솟값을 구합니다. */
//#include <stdio.h>
//#include <stdlib.h>
//
///* --- 요솟수 n인 배열 a 요소의 최솟값을 구합니다. --- */
//int minof(const int a[], int n)
//{
//	int i;
//	int min = a[0]; /* 최솟값 */
//
//	for (i = 1; i < n; i++)
//		if (a[i] < min) min = a[i];
//
//	return min;
//}
//
//int main(void)
//{
//	int i;
//	int *height;		/* 배열의 첫 번째 요소에 대한 포인터 */
//	int number;			/* 인원 = 배열 height의 요솟수 */
//
//	printf("인원 :");
//	scanf("%d", &number);
//
//	height = calloc(number, sizeof(int)); /* 요솟수 number의 배열을 생성 */
//
//	printf("%d 명의 키를 입력하세요.\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i);
//		scanf("%d", &height[i]);
//	}
//
//	printf("최솟값은 %d입니다.\n", minof(height, number));
//
//	free(height); /* 배열 height를 해제 */
//
//	return 0;
//}