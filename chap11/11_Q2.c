/* Q2 키 값을 이름으로 하는 ClosedHash 프로그램 */
#include <stdio.h>
#include "Member.h"
#include "ClosedHash.h"

typedef enum {
	TERMINATE, ADD, DELETE, SEARCH, CLEAR, DUMP
} Menu;

Menu SelectMenu(void)
{
	int ch;

	do {
		printf("(1)추가 (2)삭제 (3)검색 (4)전체 삭제 (5)덤프 (0)종료 : ");
		scanf("%d", &ch);
	} while (ch < TERMINATE || ch > DUMP);
	return (Menu)ch;
}

int main(void)
{
	Menu menu;				
	ClosedHash hash;		

	Initialize(&hash, 13);	

	do {
		int  result;
		Member x;
		Bucket *temp;

		switch (menu = SelectMenu()) {
		case ADD:		
			x = ScanMember("추가", MEMBER_NO | MEMBER_NAME);
			result = Add(&hash, &x);
			if (result)
				printf("\a오류 : 추가에 실패했습니다.(%s)\n",
				(result == 1) ? "이미 등록 됨" : "메모리 부족");
			break;

		case DELETE:	
			x = ScanMember("삭제", MEMBER_NAME);
			result = Remove(&hash, &x);
			if (result == 1)
				printf("\a오류 : 그 번호의 데이터가 존재하지 않습니다.\n");
			break;

		case SEARCH:	
			x = ScanMember("검색", MEMBER_NAME);
			temp = Search(&hash, &x);
			if (temp == NULL)
				printf("\a검색에 실패했습니다.\n");
			else {
				printf("\a검색에 성공했습니다.\n");
				PrintLnMember(&temp->data);
			}
			break;

		case CLEAR:  
			Clear(&hash);
			break;

		case DUMP:  
			break;
		}
	} while (menu != TERMINATE);

	Terminate(&hash);							

	return 0;
}
