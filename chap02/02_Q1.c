///* Q1 �迭 ����� �ּڰ��� ���մϴ�. */
//#include <stdio.h>
//#include <stdlib.h>
//
///* --- ��ڼ� n�� �迭 a ����� �ּڰ��� ���մϴ�. --- */
//int minof(const int a[], int n)
//{
//	int i;
//	int min = a[0]; /* �ּڰ� */
//
//	for (i = 1; i < n; i++)
//		if (a[i] < min) min = a[i];
//
//	return min;
//}
//
//int main(void)
//{
//	int i;
//	int *height;		/* �迭�� ù ��° ��ҿ� ���� ������ */
//	int number;			/* �ο� = �迭 height�� ��ڼ� */
//
//	printf("�ο� :");
//	scanf("%d", &number);
//
//	height = calloc(number, sizeof(int)); /* ��ڼ� number�� �迭�� ���� */
//
//	printf("%d ���� Ű�� �Է��ϼ���.\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i);
//		scanf("%d", &height[i]);
//	}
//
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
//
//	free(height); /* �迭 height�� ���� */
//
//	return 0;
//}