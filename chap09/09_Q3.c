///* Q3 Purge, Retrieve 함수 작성 */

///*--- 비교 함수를 사용하여 같은 노드를 삭제 ---*/
//void Purge(List *list, int compare(const Member *x, const Member *y))
//{
//	Index ptr = list->head;
//
//	while (ptr != Null) {
//		Index ptr2 = ptr;
//		Index pre = ptr;
//
//		while (list->n[ptr2].next != Null) {
//			ptr2 = list->n[pre].next;
//			if (!compare(&list->n[ptr].data, &list->n[ptr2].data)) {
//				list->n[pre].next = list->n[ptr2].next;
//				DeleteIndex(list, ptr2);
//			}
//			else {
//				pre = ptr2;
//			}
//		}
//		ptr = list->n[ptr].next;
//	}
//	list->crnt = list->head;
//}

///*--- n번째 노드의 커서(포인터)를 반환 ---*/
//Index Retrieve(List *list, int n)
//{
//	Index ptr = list->head;
//
//	while (n >= 0 && ptr != Null) {
//		if (n-- == 0) {
//			list->crnt = ptr;
//			return ptr;					/* 검색 성공 */
//		}
//		ptr = list->n[ptr].next;		/* 다음 노드 선택 */
//	}
//	return Null;
//}
