///* Q2 �迭 ����� �հ踦 ���մϴ�. */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- ��ڼ� n�� �迭 a�� ����� �հ踦 ���մϴ�. ---*/
//int sumof(const int a[], int n)
//{
//	int i;
//	int sum = 0; /* �հ� */
//
//	for (i = 0; i <n; i++)
//		sum += a[i];
//
//	return sum;
//}
//
//int main(void)
//{
//	int i;
//	int *height;		/* �迭�� ù ��° ��ҿ� ���� ������ */
//	int number;			/* �ο� = �迭 height�� ��ڼ� */
//
//	printf("�ο� : ");
//	scanf("%d", &number);
//
//	height = calloc(number, sizeof(int)); /* ��ڼ��� number �迭�� ���� */
//
//	printf("%d ���� Ű�� �Է��ϼ���.\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height [%d] : ", i);
//		scanf("%d", &height[i]);
//	}
//
//	printf("�հ�� %d�Դϴ�.\n", sumof(height, number));
//
//	free(height); /* �迭 height�� ���� */
//
//	return 0;
//}