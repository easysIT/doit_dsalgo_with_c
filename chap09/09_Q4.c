///* Q4 Purge, Retrieve 함수 작성 */
//
///*--- 비교 함수를 사용하여 같은 노드 삭제 ---*/
//void Purge(Dlist *list, int compare(const Member *x, const Member *y))
//{
//	Dnode *ptr = list->head->next;
//
//	while (ptr != list->head) {
//		Dnode *ptr2 = ptr;
//		Dnode *pre = ptr;
//
//		while (pre->next != list->head) {
//			ptr2 = pre->next;
//			if (!compare(&ptr->data, &ptr2->data)) {
//				pre->next = ptr2->next;
//				free(ptr2);
//			}
//			else {
//				pre = ptr2;
//			}
//		}
//		ptr = ptr->next;
//	}
//	list->crnt = list->head;
//}
//
///*--- n번째 노드의 커서(포인터)를 반환 ---*/
//Dnode *Retrieve(Dlist *list, int n)
//{
//	Dnode *ptr = list->head->next;
//
//	while (n >= 0 && ptr != list->head) {
//		if (n-- == 0) {
//			list->crnt = ptr;
//			return ptr;				
//		}
//		ptr = ptr->next;			
//	}
//	return NULL;					
//}