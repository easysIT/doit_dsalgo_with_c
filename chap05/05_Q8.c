///* Q8 8퀸 문제 풀이(기호 출력) */
///*
//	!편집자주
//	연습 문제 Q9와의 속도 차이를 느껴보세요!
//	재귀 호출과 비재귀 호출의 실행 속도는 차이가 매우 크답니다.
//*/
//#include <stdio.h>
//
//int flag_a[8];		/* 각 행에 퀸이 이미 배치되었는가? */
//int flag_b[15];		/* ↗ 대각선에 퀸이 이미 배치되었는가? */
//int flag_c[15];		/* ↘ 대각선에 퀸이 이미 배치되었는가? */
//int pos[8];			/* 각 열의 퀸의 위치 저장 */
//
///*--- 체스판(각 열의 퀸의 위치)를 출력 ---*/
//void print(void)
//{
//	int	 i, j;
//
//	for (i = 0; i < 8; i++) {
//		for (j = 0; j < 8; j++)
//			printf("%s", j == pos[i] ? "■" : "□");
//		putchar('\n');
//	}
//	putchar('\n');
//}
//
///*--- i 번째 열의 알맞은 위치에 퀸을 배치 ---*/
//void set(int i)
//{
//	int j;
//
//	for (j = 0; j < 8; j++) {
//		if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
//			pos[i] = j;
//			if (i == 7)		/* 모든 열에 배치 마침 */
//				print();
//			else {
//				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
//				set(i + 1);
//				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//		flag_a[i] = 0;
//	for (i = 0; i < 15; i++)
//		flag_b[i] = flag_c[i] = 0;
//
//	set(0);
//
//	return 0;
//}
