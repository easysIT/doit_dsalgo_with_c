///* Q7　단순 선택 정렬(정렬 과정 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)
//
///*--- 단순 선택 정렬(정렬 과정 출력)---*/
//void selection(int a[], int n)
//{
//	int i, j, m;
//
//	for (i = 0; i < n - 1; i++) {
//		int min = i;
//		for (j = i + 1; j < n; j++)
//			if (a[j] < a[min])
//				min = j;
//		for (m = 0; m < n; m++)
//			printf((m == i) ? "  * " : (m == min) ? "  + " : "    ");
//		putchar('\n');
//
//		for (m = 0; m < n; m++)
//			printf("%3d ", a[m]);
//		putchar('\n');
//
//		swap(int, a[i], a[min]);
//	}
//	putchar('\n');
//	for (m = 0; m < n; m++)
//		printf("%3d ", a[m]);
//	putchar('\n');
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("단순 선택 정렬");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	selection(x, nx);				
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	
//
//	return 0;
//}
