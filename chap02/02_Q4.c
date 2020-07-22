///* 
//	Q4 배열 요소의 최댓값을 구합니다. 
//	인원수를 난수로 생성하여 최댓값을 구합니다.
//*/
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요솟수 n인 배열 a의 요소의 최댓값을 구합니다. ---*/
//int maxof(const int a[], int n)
//{
//	int i;
//	int max = a[0]; /* 최댓값 */
//
//	for (i = 1; i < n; i++)
//		if (a[i] > max) max = a[i];
//
//	return max;
//}
//
//int main(void)
//{
//	int i;
//	int *height;			/* 배열의 첫 번째 요소에 대한 포인터 */
//	int number;				/* 인원 = 배열 ​​height의 요솟수 */
//
//	srand(time(NULL));										/* 시간으로 난수의 seed(씨앗)를 초기화 */
//
//	number = 5 + rand() % 16;								/* 인원을 5 ~ 20 사이의 난수로 결정 */
//
//	height = calloc(number, sizeof(int));					/* 요솟수 number인 배열을 생성 */
//
//	for (i = 0; i  <number; i++) {
//		height[i] = 100 + rand() % 90;						/* 100 ~ 189 사이의 난수를 생성, 대입 */
//		printf("height[%d] = %d입니다.\n", i, height[i]);
//	}
//
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
//
//	free(height); /* 배열 height를 해제 */
//
//	return 0;
//}