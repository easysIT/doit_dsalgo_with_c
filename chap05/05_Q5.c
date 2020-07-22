///* Q5 함수 recur3을 비재귀적으로 구현 */
///* 
//	이 프로그램의 컴파일에는 
//	IntStack.h와 IntStack.c가 필요합니다. 
//*/
//
//#include <stdio.h>
//#include "IntStack.h"
//
///*--- 재귀를 제거한 recur3 함수 ---*/
//void recur3(int n)
//{
//	int sw = 0;
//	IntStack nstk, sstk;			/* 스택 */
//
//	Initialize(&nstk, 100);
//	Initialize(&sstk, 100);
//
//	while (1) {
//		if (n > 0) {
//			Push(&nstk, n);
//			Push(&sstk, sw);
//
//			if (sw == 0)
//				n = n - 1;
//			else if (sw == 1) {
//				n = n - 2;
//				sw = 0;
//			}
//			continue;
//		}
//		do {
//			Pop(&nstk, &n);
//			Pop(&sstk, &sw);
//			sw++;
//
//			if (sw == 2) {
//				printf("%d\n", n);
//				if (IsEmpty(&nstk))
//					return;
//			}
//		} while (sw == 2);
//	}
//
//	Terminate(&nstk);
//	Terminate(&sstk);
//}
//
//int main(void)
//{
//	int x;
//
//	printf("정수를 입력하세요. : ");
//	scanf("%d", &x);
//
//	recur3(x);
//
//	return 0;
//}
