///*--- Q4 큐에서 검색(논리적 인덱스 반환) ---*/
//int Search2(const IntQueue *q, int x)
//{
//	int i;
//
//	for (i = 0; i < q->num; i++) {
//		if (q->que[(i + q->front) % q->max] == x)
//			return i;		/* 검색 성공 */
//	}
//	return -1;				/* 검색 실패 */
//}