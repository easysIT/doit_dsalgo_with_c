///*  Q2 배열 공유 int형 스택 IntStack2의 사용 예 */
//#include <stdio.h>
//#include "IntStack2.h"
//
//int main(void)
//{
//	IntStack s;
//
//	if (Initialize(&s, 12) == -1) {
//		puts("스택의 생성에 실패했습니다.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		int idx;
//
//		printf("현재 데이터 개수 : A:%d B:%d / %d\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
//		printf("1) A에 Push 2) A에서 Pop 3) A에서 Peek 4) A를 출력 5) A에서 검색 6) A를 초기화\n"
//				"7) B에 Push 8) B에서 Pop 9) B에서 Peek 10) B를 출력 11) B에서 검색 12) B를 초기화\n"
//				"13) 빈 상태 / 가득 찬 상태 0) 종료 : ");
//		scanf("%d", &menu);
//
//		if (menu == 0) break;
//
//		switch (menu) {
//		case 1: /*--- A에 푸시 ---*/
//			printf("데이터：");
//			scanf("%d", &x);
//			if (Push(&s, StackA, x) == -1)
//				puts("\a오류 : 푸시에 실패했습니다.");
//			break;
//
//		case 2: /*--- A에서 팝 ---*/
//			if (Pop(&s, StackA, &x) == -1)
//				puts("\a오류 : 팝에 실패했습니다.");
//			else
//				printf("팝한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 3: /*--- A에서 피크 ---*/
//			if (Peek(&s, StackA, &x) == -1)
//				puts("\a오류 : 피크에 실패했습니다.");
//			else
//				printf("피크한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 4: /*--- A 출력 ---*/
//			Print(&s, StackA);
//			break;
//
//		case 5: /*--- A에서 검색 ---*/
//			printf("검색 데이터：");
//			scanf("%d", &x);
//			if ((idx = Search(&s, StackA, x)) == -1)
//				puts("\a오류 : 검색에 실패했습니다.");
//			else
//				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//			break;
//
//		case 6: /*--- A 초기화 ---*/
//			Clear(&s, StackA);
//			break;
//
//		case 7: /*--- B로 푸시 ---*/
//			printf("데이터：");
//			scanf("%d", &x);
//			if (Push(&s, StackB, x) == -1)
//				puts("\a오류 : 푸시에 실패했습니다.");
//			break;
//
//		case 8: /*--- B에서 팝 ---*/
//			if (Pop(&s, StackB, &x) == -1)
//				puts("\a오류 : 팝에 실패했습니다.");
//			else
//				printf("팝한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 9: /*--- B에서 피크 ---*/
//			if (Peek(&s, StackB, &x) == -1)
//				puts("\a오류 : 피크에 실패했습니다.");
//			else
//				printf("피크한 데이터는 %d입니다.\n", x);
//			break;
//
//		case 10: /*--- B를 출력 ---*/
//			Print(&s, StackB);
//			break;
//
//		case 11: /*--- B에서 검색 ---*/
//			printf("검색 데이터：");
//			scanf("%d", &x);
//			if ((idx = Search(&s, StackB, x)) == -1)
//				puts("\a오류 : 검색에 실패했습니다.");
//			else
//				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//			break;
//
//		case 12: /*--- B 초기화 ---*/
//			Clear(&s, StackB);
//			break;
//
//		case 13: /*--- 빈 상태 / 가득 찬 상태 판단 ---*/
//			printf("스택 A는 비어 %s.\n", IsEmpty(&s, StackA) ? "있습니다" : "있지 않습니다");
//			printf("스택 B는 비어 %s.\n", IsEmpty(&s, StackB) ? "있습니다" : "있지 않습니다");
//			printf("스택은 가득 %s.\n", IsFull(&s) ? "찼습니다" : "차지 않았습니다");
//			break;
//		}
//	}
//
//	Terminate(&s);
//
//	return 0;
//}
