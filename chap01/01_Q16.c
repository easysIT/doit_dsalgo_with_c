///* Q16 �����̵�ﰢ�� ��� */
///*
//	!��������
//	������ '�̵' �ﰢ��ó�� ������ �ʾ� ��Ȳ�� �� �ֽ��ϴ�!
//	�׷����� ��(*)�� ������ �� ������� :D
//	�̵ �ﰢ���� �´�ϴ�!
//*/
//#include <stdio.h>
//
///*--- ������ ���� �Ʒ��� ��� ---*/
//void triangleLB(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {			/* i �� (i = 1, 2, ..., n) */
//		for (j = 1; j <= i; j++)		/* i ���� '*'�� ��� */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
///*---  ������ ���� ���� ��� ---*/
//void triangleLU(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i �� (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i + 1; j++)		/* n - i + 1 ���� '*'�� ��� */
//			putchar('*');
//		putchar('\n');
//	}
//}
//
///*--- ������ ������ ���� ��� ---*/
//void triangleRU(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i �� (i = 1, 2, ..., n) */
//		for (j = 1; j <= i - 1; j++)			/* i - 1 ���� ' '�� ��� */
//			putchar(' ');
//		for (j = 1; j <= n - i + 1; j++)		/* n - i + 1���� '*'�� ��� */
//			putchar('*');
//		putchar('\n'); 
//	}
//}
//
///*--- ������ ������ �Ʒ��� ��� ---*/
//void triangleRB(int n)
//{
//	int i, j;
//
//	for (i = 1; i <= n; i++) {					/* i �� (i = 1, 2, ..., n) */
//		for (j = 1; j <= n - i; j++)			/* n - i ���� ' '�� ��� */
//			putchar(' ');
//		for (j = 1; j <= i; j++)				/* i ���� '*'�� ��� */
//			putchar('*');
//		putchar('\n'); 
//	}
//}
//
//int main(void)
//{
//	int n;
//
//	puts("���� �̵ �ﰢ���� ����մϴ�.");
//	do {
//		printf("ũ�� : ");
//		scanf("%d", &n);
//	} while (n <= 0);
//
//	printf("\n ����   �Ʒ��� ���� \n"); triangleLB(n);
//	printf("\n ����   ����   ���� \n"); triangleLU(n);
//	printf("\n ������ ����   ���� \n"); triangleRU(n);
//	printf("\n ������ �Ʒ��� ���� \n"); triangleRB(n);
//
//	return 0;
//}