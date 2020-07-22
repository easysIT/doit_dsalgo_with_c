///* Q12 신체 검사 데이터용 구조체 배열(시력 분포를 그래프 모양으로 출력) */
//#include <stdio.h>
//
//#define VMAX 21 /* 시력 최댓값 2.1 × 10 */
//
///*--- 신체 검사 데이터 ---*/
//typedef struct {
//	char name[20];		/* 이름 */
//	int height;			/* 키 */
//	double vision;		/* 시력 */
//} PhysCheck;
//
///*--- 키의 평균을 구합니다. ---*/
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
///*--- 시력의 분포를 구합니다. ---*/
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
//		{ "박현규", 162, 0.3 },
//		{ "함진아", 173, 0.7 },
//		{ "최윤미", 175, 2.0 },
//		{ "홍연의", 171, 1.5 },
//		{ "이수진", 168, 0.4 },
//		{ "김영준", 174, 1.2 },
//		{ "박용규", 169, 0.8 }
//	};
//	int nx = sizeof(x) / sizeof(x[0]);		/* 인원수 */
//	int vdist[VMAX];						/* 시력 분포 */
//
//	puts("■ □ ■ 신체 검사 목록 ■ □ ■");
//	puts("이름                키   시력");
//	puts("----------------------------------");
//	for (i = 0; i < nx; i++)
//		printf("% - 18.18s % 4d % 5.1f \n", x[i].name, x[i].height, x[i].vision);
//
//	printf("\n평균 키: %5.1fcm\n", ave_height(x, nx));
//
//	dist_vision(x, nx, vdist); /* 시력의 분포를 구합니다. */
//
//	printf("\n시력의 분포\n");
//	for (i = 0; i < VMAX; i++) {
//		printf("%3.1f ~ : ", i / 10.0);
//		for (j = 0; j <vdist[i]; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}