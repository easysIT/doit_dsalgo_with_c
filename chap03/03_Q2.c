///* Q2 ���� �˻�(�˻� ���� ���) */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- ��ڼ� n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻� ---*/
//int search(const int a[], int n, int key)
//{
//	int i;
//
//	printf("   |");
//	for (i = 0; i < n; i++)
//		printf("%3d", i);
//	printf("\n---+");
//	for (i = 0; i < n; i++)
//		printf("---", i);
//	printf("-\n");
//
//	for (i = 0; i < n; i++) {
//		int j;
//		printf("   |");
//		printf("%*s", 3 * (i - 1) + 5, "");
//		printf("*\n");
//		printf("%3d|", i);
//		for (j = 0; j < n; j++)
//			printf("%3d", a[j]);
//		putchar('\n');
//
//		if (a[i] == key)
//			return i; /* �˻� ���� */
//
//		printf("   |\n");
//	}
//
//	return -1; /* �˻� ���� */
//}
//
//int main(void)
//{
//	int i, nx, ky, idx;
//	int *x;						/* �迭�� ù ��° ��ҿ� ���� ������ */
//
//	puts("���� �˻�");
//	printf("��ڼ� : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int)); /* ��ڼ� nx�� int �� �迭�� ���� */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//	printf("�˻� �� : ");
//	scanf("%d", &ky);
//
//	idx = search(x, nx, ky);	/* �迭 x���� ���� ky �� ��Ҹ� ���� �˻� */
//
//	if (idx == -1)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
//
//	free(x); /* �迭�� ���� */
//
//	return 0;
//}