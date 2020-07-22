///* Q12 ��ü �˻� �����Ϳ� ����ü �迭(�÷� ������ �׷��� ������� ���) */
//#include <stdio.h>
//
//#define VMAX 21 /* �÷� �ִ� 2.1 �� 10 */
//
///*--- ��ü �˻� ������ ---*/
//typedef struct {
//	char name[20];		/* �̸� */
//	int height;			/* Ű */
//	double vision;		/* �÷� */
//} PhysCheck;
//
///*--- Ű�� ����� ���մϴ�. ---*/
//double ave_height(const PhysCheck dat[], int n)
//{
//	int i;
//	double sum = 0;
//
//	for (i = 0; i < n; i++)
//		sum += dat[i].height;
//
//	return sum / n;
//}
//
///*--- �÷��� ������ ���մϴ�. ---*/
//void dist_vision(const PhysCheck dat[], int n, int dist[])
//{
//	int i;
//
//	for (i = 0; i < VMAX; i++)
//		dist[i] = 0;
//
//	for (i = 0; i < n; i++)
//		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
//			dist[(int)(dat[i].vision * 10)]++;
//}
//
//int main(void)
//{
//	int i, j;
//	PhysCheck x[] = {
//		{ "������", 162, 0.3 },
//		{ "������", 173, 0.7 },
//		{ "������", 175, 2.0 },
//		{ "ȫ����", 171, 1.5 },
//		{ "�̼���", 168, 0.4 },
//		{ "�迵��", 174, 1.2 },
//		{ "�ڿ��", 169, 0.8 }
//	};
//	int nx = sizeof(x) / sizeof(x[0]);		/* �ο��� */
//	int vdist[VMAX];						/* �÷� ���� */
//
//	puts("�� �� �� ��ü �˻� ��� �� �� ��");
//	puts("�̸�                Ű   �÷�");
//	puts("----------------------------------");
//	for (i = 0; i < nx; i++)
//		printf("% - 18.18s % 4d % 5.1f \n", x[i].name, x[i].height, x[i].vision);
//
//	printf("\n��� Ű: %5.1fcm\n", ave_height(x, nx));
//
//	dist_vision(x, nx, vdist); /* �÷��� ������ ���մϴ�. */
//
//	printf("\n�÷��� ����\n");
//	for (i = 0; i < VMAX; i++) {
//		printf("%3.1f ~ : ", i / 10.0);
//		for (j = 0; j <vdist[i]; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}