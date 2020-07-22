///* Q9 8퀸 문제 풀이(비재귀적으로 해결) */
///* 
//	이 프로그램의 컴파일에는 
//	IntStack.h와 IntStack.c가 필요합니다. 
//*/
//#include <stdio.h>
//#include "IntStack.h"
//
//int flag_a[8];		/* 각 행에 퀸이 이미 배치되었는가? */
//int flag_b[15];		/* ↗ 대각선에 퀸이 이미 배치되었는가? */
//int flag_c[15];		/* ↘ 대각선에 퀸이 이미 배치되었는가? */
//int pos[8];			/* 각 열의 퀸의 위치 저장 */
//
///*--- 체스판(각 열의 퀸의 위치)를 출력 ---*/
//void print(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//		printf("%2d", pos[i]);
//	putchar('\n');
//}
//
///*--- i 번째 열의 알맞은 위치에 퀸을 배치(비재귀적 해결) ---*/
//void set(int i)
//{
//	int j;
//	IntStack jstk;
//	Initialize(&jstk, 8);
//
//Start:
//	while (1) {
//		j = 0;
//		while (1) {
//			while (j < 8) {
//				if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
//					pos[i] = j;
//					if (i == 7)				// 전체 열 배치 마침
//						print();
//					else {
//						flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
//						i++;
//						Push(&jstk, j);		// i 번째 열의 행을 푸시
//						goto Start;
//					}
//				}
//				j++;
//			}
//			if (--i == -1) return;
//			Pop(&jstk, &j);					// i 번째 열의 행을 팝
//			flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
//			j++;
//		}
//	}
//	Terminate(&jstk);
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
