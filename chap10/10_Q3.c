///* Q3 GetMinNode, GetMaxNode 함수 작성 */
//
///*--- 최소 키 값을 가지는 노드를 검색 ---*/
//BinNode *GetMinNode(const BinNode *p)
//{
//	if (p == NULL)
//		return NULL;
//	else {
//		while (p->left != NULL)
//			p = p->left;
//		return p;
//	}
//}
//
///*--- 최대 키 값을 가지는 노드를 검색 ---*/
//BinNode *GetMaxNode(const BinNode *p)
//{
//	if (p == NULL)
//		return NULL;
//	else {
//		while (p->right != NULL)
//			p = p->right;
//		return p;
//	}
//}