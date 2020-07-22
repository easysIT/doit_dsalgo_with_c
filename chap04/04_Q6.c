///* Q6 int형 덱 IntDequeue의 사용 */
//#include <stdio.h>
//#include "IntDequeue.h"
//
//int main(void)
//{
//	IntDequeue que;
//
//	if (Initialize(&que, 64) == -1) {
//		puts("큐의 생성에 실패했습니다.");
//		return 1;
//	}
//
//	while (1) {
//		int m, x;
//		int idx;
//
//		printf("현재 데이터의 수 : %d / %d\n", Size(&que), Capacity(&que));
//		printf("(1)맨 앞에 데이터 인큐 (2)맨 앞의 데이터 디큐 (3)맨 앞 피크 (4)출력\n"
//			"(5)맨 뒤에 데이터 인큐 (6)맨 뒤의 데이터 디큐 (7)맨 뒤 피크 (8)검색\n"
//			"(9)초기화 (10)비어 있는 상태 / 가득 찬 상태 (0)종료 : ");
//		scanf("%d", &m);
//
//		if (m == 0) break;
//
//		switch (m) {
//		case 1: /*--- 맨 앞에 데이터 인큐 ---*/
//			printf("데이터：");   scanf("%d", &x);
//			if (EnqueFront(&que, x) == -1)
//				puts("\a오류 : 인큐에 실패했습니다.");
//			break;
//
//		case 2: /*--- 맨 앞의 데이터 디큐 ---*/
//			if (DequeFront(&que, &x) == -1)
//				puts("\a오류 : 디큐에 실패했습니다.");
//			else
//				printf("디큐한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 3: /*--- 맨 앞 피크 ---*/
//			if (PeekFront(&que, &x) == -1)
//				puts("\a오류 : 피크에 실패했습니다.");
//			else
//				printf("피크한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 4: /*--- 덱 출력 ---*/
//			Print(&que);
//			break;
//
//		case 5: /*--- 맨 뒤에 데이터 인큐 ---*/
//			printf("データ：");   scanf("%d", &x);
//			if (EnqueRear(&que, x) == -1)
//				puts("\a오류 : 인큐에 실패했습니다.");
//			break;
//
//		case 6: /*--- 맨 뒤의 데이터 디큐 ---*/
//			if (DequeRear(&que, &x) == -1)
//				puts("\a오류 : 디큐에 실패했습니다.");
//			else
//				printf("디큐한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 7: /*--- 맨 뒤 피크 ---*/
//			if (PeekRear(&que, &x) == -1)
//				puts("\a오류 : 피크에 실패했습니다.");
//			else
//				printf("피크한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 8: /*--- 검색 ---*/
//			printf("검색 데이터：");
//			scanf("%d", &x);
//			if ((idx = Search(&que, x)) == -1)
//				puts("\a오류 : 검색에 실패했습니다.");
//			else {
//				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//				printf("큐의 맨 앞에서 %d만큼 뒤에 위치합니다.\n", Search2(&que, x));
//			}
//			break;
//
//		case 9: /*--- 초기화 ---*/
//			Clear(&que);
//			break;
//
//		case 10: /*--- 빈 상태 / 가득 찬 상태 판단 ---*/
//			printf("큐가 비어 있%s.\n", IsEmpty(&que) ? "습니다" : "지 않습니다");
//			printf("큐가 가득 %s.\n", IsFull(&que) ? "찼습니다" : "차지 않았습니다");
//			break;
//		}
//	}
//
//	Terminate(&que);
//
//	return 0;
//}
