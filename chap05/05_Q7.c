///* 하노이 탑(비재귀) */
///* 
//	이 프로그램의 컴파일에는 
//	IntStack.h와 IntStack.c가 필요합니다. 
//*/
//
//#include <stdio.h>
//#include "IntStack.h"
//
///*--- 원반[1] ~ 원반[no]을 x 기둥에서 y 기둥으로 이동 ---*/
//void move(int no, int x, int y)
//{
//	int sw = 0;
//	IntStack xstk, ystk, sstk;		/* 스택 */
//
//	Initialize(&xstk, 100);
//	Initialize(&ystk, 100);
//	Initialize(&sstk, 100);
//
//	while (1) {
//		if (sw == 0 && no > 1) {
//			Push(&xstk, x);				/* x 값을 푸시 */
//			Push(&ystk, y);				/* y 값을 푸시 */
//			Push(&sstk, sw);			/* sw 값을 푸시 */
//			no = no - 1;
//			y = 6 - x - y;
//			continue;
//		}
//
//		printf("원반[%d]를 %d 기둥에서 %d 기둥으로 이동\n", no, x, y);
//
//		if (sw == 1 && no > 1) {
//			Push(&xstk, x);				/* x 값을 푸시 */
//			Push(&ystk, y);				/* y 값을 푸시 */
//			Push(&sstk, sw);			/* sw 값을 푸시 */
//			no = no - 1;
//			x = 6 - x - y;
//			if (++sw == 2) sw = 0;
//			continue;
//		}
//		do {
//			if (IsEmpty(&xstk))			/* 스택이 비어있는 상태라면 */
//				return;
//			Pop(&xstk, &x);				/* x를 팝 */
//			Pop(&ystk, &y);				/* y를 팝 */
//			Pop(&sstk, &sw);			/* sw를 팝 */
//			sw++;
//			no++;
//		} while (sw == 2);
//	}
//
//	Terminate(&xstk);
//	Terminate(&ystk);
//	Terminate(&sstk);
//}
//
//int main(void)
//{
//	int n;		/* 원반의 개수 */
//
//	printf("하노이 탑\n원반 개수 : ");
//	scanf("%d", &n);
//
//	move(n, 1, 3);
//
//	return 0;
//}
