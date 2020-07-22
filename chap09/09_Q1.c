///* Q1 Purge 함수 작성 */

///*--- 비교 함수를 사용하여 같은 노드를 삭제 ---*/
//void Purge(List *list, int compare(const Member *x, const Member *y))
//{
//	Node *ptr = list->head;
//
//	while (ptr != NULL) {
//		Node *ptr2 = ptr;
//		Node *pre = ptr;
//
//		while (pre->next != NULL) {
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