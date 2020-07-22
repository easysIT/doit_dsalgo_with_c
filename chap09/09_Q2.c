///* Q2 Retrieve 함수 작성 */
//
///*--- n번째 노드의 커서(포인터)를 반환 ---*/
//Node *Retrieve(List *list, int n)
//{
//	Node *ptr = list->head;
//
//	while (n >= 0 && ptr != NULL) {
//		if (n-- == 0) {
//			list->crnt = ptr;
//			return ptr;				/* 검색 성공 */
//		}
//		ptr = ptr->next;			/* 다음 노드 선택 */
//	}
//	return NULL;					/* 검색 실패 */
//}