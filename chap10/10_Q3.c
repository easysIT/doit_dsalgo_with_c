///* Q3 GetMinNode, GetMaxNode �Լ� �ۼ� */
//
///*--- �ּ� Ű ���� ������ ��带 �˻� ---*/
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
///*--- �ִ� Ű ���� ������ ��带 �˻� ---*/
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