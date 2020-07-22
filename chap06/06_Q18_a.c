///* Q18 퀵 정렬 (처음, 가운데, 끝 요소를 정렬한 다음 가운데 값을 피벗으로 : 재귀 버전) */
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)
//
//int sort3elem(int x[], int a, int b, int c)
//{
//	if (x[b] < x[a]) swap(int, x[b], x[a]);
//	if (x[c] < x[b]) swap(int, x[c], x[b]);
//	if (x[b] < x[a]) swap(int, x[b], x[a]);
//	return b;
//}
//
//void insertion(int a[], int n)
//{
//	int i, j;
//
//	for (i = 1; i < n; i++) {
//		int tmp = a[i];
//		for (j = i; j > 0 && a[j - 1] > tmp; j--)
//			a[j] = a[j - 1];
//		a[j] = tmp;
//	}
//}
//
//void quick(int a[], int left, int right)
//{
//	if (right - left < 9)
//		insertion(&a[left], right - left + 1);
//	else {
//		int pl = left;			
//		int pr = right;			
//		int x;					
//		int m = sort3elem(a, pl, (pl + pr) / 2, pr);
//		x = a[m];
//		swap(int, a[m], a[right - 1]);
//		pl++;
//		pr -= 2;
//
//		do {
//			while (a[pl] < x) pl++;
//			while (a[pr] > x) pr--;
//			if (pl <= pr) {
//				swap(int, a[pl], a[pr]);
//				pl++;
//				pr--;
//			}
//		} while (pl <= pr);
//
//		if (pr - left < right - pl) {
//			swap(int, pl, left);
//			swap(int, pr, right);
//		}
//		if (left < pr)  quick(a, left, pr);
//		if (pl < right) quick(a, pl, right);
//	}
//}
//
//int main(void)
//{
//	int i, nx;
//	int *x;		
//
//	puts("퀵 정렬");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	quick(x, 0, nx - 1);
//
//	puts("오름차순으로 정렬했습니다.");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//
//	free(x);	
//
//	return 0;
//}
