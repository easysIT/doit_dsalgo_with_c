///* Q17 Ư������ '*'�� �Ƕ�̵带 ��� */
//#include <stdio.h>
//
///*--- Ư������ '*'�� �Ƕ�̵带 ��� ---*/
//void spira(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {						/* i �� (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i; j++)				/* n-i ���� ' '�� ��� */
//			putchar(' ');
//		for (j = 1; j <= (i - 1) * 2 + 1; j++)		/* (i-1)*2+1���� '*'�� ��� */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
//int main(void)
//{
//	int n;
//
//	puts("�Ƕ�̵带 ����մϴ�.");
//	do {
//		printf("�ܼ� : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	spira(n);
//
//	return 0;
//}