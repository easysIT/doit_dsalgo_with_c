///* Q3 �� ������ �ּڰ��� ���մϴ�. */
//
//#include <stdio.h>
//
///*--- a, b, c, d�� �ּڰ��� ���մϴ�. ---*/
//int min4(int a, int b, int c, int d)
//{
//	int min = a;	/* �ּڰ� */
//
//	if (b < min) min = b;
//	if (c < min) min = c;
//	if (d < min) min = d;
//
//	return min;
//}
//
//int main(void)
//{
//	int a, b, c, d;
//
//	printf("�� ������ �ּڰ��� ���մϴ�.\n");
//	printf("a�� �� : ");	scanf("%d", &a);
//	printf("b�� �� : ");	scanf("%d", &b);
//	printf("c�� �� : ");	scanf("%d", &c);
//	printf("d�� �� : ");	scanf("%d", &d);
//
//	printf("�ּڰ��� %d�Դϴ�.\n", min4(a, b, c, d));
//
//	return 0;
//}