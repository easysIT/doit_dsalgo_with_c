///* Q5 �迭�� ��Ҹ� �������� �����մϴ�. */
///*
//	!��������
//	'����'�̶�� �� ������ ���������� ������������ ����(�Ǵ� �ݴ��)�ȴٰ� �����ϸ� �� �˴ϴ�.
//	�� ������ �־��� �迭�� ��Ҹ� �յڷ� ������ ���Դϴ�.
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- type ���� x�� y�� ���� ��ȯ ---*/
//#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)
//
///*--- ��ڼ� n�� �迭 a�� ��Ҹ� ���ʷ� ��� ---*/
//void ary_print(const int a[], int n)
//{
//	int i;
//	for (i = 0; i  <n; i++)
//		printf("%d", a[i]);
//	putchar('\n');
//}
//
///*--- ��ڼ� n�� �迭 a�� ��Ҹ� �������� ���� ---*/
//void ary_reverse(int a[], int n)
//{
//	int i;
//
//	for (i = 0; i < n / 2; i++) {
//		ary_print(a, n);
//		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
//		swap(int, a[i], a[n - i - 1]);
//	}
//	ary_print(a, n);
//	puts("���������� �������ϴ�.");
//}
//
//int main(void)
//{
//	int i;
//	int *x;			/* �迭�� ù ��° ��ҿ� ���� ������ */
//	int nx;			/* �迭 x�� ��ڼ� */
//
//	printf("��ڼ� : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));					/* ��ڼ� nx�� int �� �迭 x�� ���� */
//
//	printf("%d ���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//
//	ary_reverse(x, nx);								/* �迭 x�� ��Ҹ� �������� ���� */
//
//	printf("�迭 ��Ҹ� �������� �����߽��ϴ�.\n");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d�Դϴ�.\n", i, x[i]);
//
//	free(x); /* �迭 x�� ���� */
//
//	return 0;
//}