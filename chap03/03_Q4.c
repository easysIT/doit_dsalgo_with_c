///* Q4 2진 검색 (검색 과정 출력) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 요소수 n인 배열 a에서 key와 일치하는 요소를 2진 검색 ---*/
//int bin_search(const int a[], int n, int key)
//{
//	int i;
//	int pl = 0;			/* 검색 범위의 첫 인덱스 */
//	int pr = n - 1;		/*     ··      끝 인덱스 */
//	int pc;				/*     ··      가운데 인덱스 */
//
//	printf("   |");
//	for (i = 0; i < n; i++) printf("%4d", i);
//	printf("\n---+");
//	for (i = 0; i < n; i++) printf("----", i);
//	printf("--\n");
//
//	do {
//		pc = (pl + pr) / 2;
//
//		printf("   |");
//		for (i = 0; i < 4 * pl; i++) printf(" ");
//		printf(" <-");
//		for (i = 0; i < 4 * (pc - pl); i++) printf(" ");
//		printf("+");
//		for (i = 0; i < 4 * (pr - pc) - 2; i++) printf(" ");
//		printf("->\n");
//
//		printf("%3d|", pc);
//		for (i = 0; i < n; i++)
//			printf("%4d", a[i]);
//		putchar('\n');
//
//		if (a[pc] == key)		/* 검색 성공 */
//			return pc;
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);
//
//	return -1;					/* 검색 실패 */
//}
//
//int main(void)
//{
//	int i, nx, ky, idx;
//	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */
//
//	puts("2진 검색");
//	printf("요소수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* 요소수 nx인 int 형 배열을 생성 */
//
//	printf("오름차순으로 입력하세요.\n");
//	printf("x[0] : ");
//	scanf("%d", &x[0]);
//
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf("%d", &x[i]);
//		} while (x[i] < x[i - 1]);	/* 하나 앞의 값보다 작으면 다시 입력 */
//	}
//	printf("검색 값 : ");
//	scanf("%d", &ky);
//
//	idx = bin_search(x, nx, ky);	/* 배열 x에서 값이 ky 인 요소를 2진 검색 */
//
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", ky, idx);
//
//	free(x);	/* 배열을 해제 */
//
//	return 0;
//}
