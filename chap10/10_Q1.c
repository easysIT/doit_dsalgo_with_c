///* Q1 PrintTreeReverse 함수 작성 */
//
///*--- 모든 노드를 키 값의 내림차순으로 출력 ---*/
//void PrintTreeReverse(const BinNode *p)
//{
//	if (p != NULL) {
//		PrintTreeReverse(p->right);
//		PrintLnMember(&p->data);
//		PrintTreeReverse(p->left);
//	}
//}