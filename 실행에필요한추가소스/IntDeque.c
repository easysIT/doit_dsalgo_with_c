///* int형 덱 IntDequeue*/
//#include <stdio.h>
//#include <stdlib.h>
//#include "IntDequeue.h"
//
///*--- 덱 초기화 ---*/
//int Initialize(IntDequeue *q, int max)
//{
//	q->num = q->front = q->rear = 0;
//	if ((q->que = calloc(max, sizeof(int))) == NULL) {
//		q->max = 0;								/* 배열 확보 실패 */
//		return -1;
//	}
//	q->max = max;
//	return 0;
//}
//
///*--- 맨 앞의 데이터를 인큐 ---*/
//int EnqueFront(IntDequeue *q, int x)
//{
//	if (q->num >= q->max)
//		return -1;							/* 큐가 가득 참 */
//	else {
//		q->num++;
//		if (--q->front < 0)
//			q->front = q->max - 1;
//		q->que[q->front] = x;
//		return 0;
//	}
//}
//
///*--- 맨 뒤의 데이터를 인큐 ---*/
//int EnqueRear(IntDequeue *q, int x)
//{
//	if (q->num >= q->max)
//		return -1;							/* 큐가 가득 참 */
//	else {
//		q->num++;
//		q->que[q->rear++] = x;
//		if (q->rear == q->max)
//			q->rear = 0;
//		return 0;
//	}
//}
//
///*--- 맨 앞의 데이터를 디큐 ---*/
//int DequeFront(IntDequeue *q, int *x)
//{
//	if (q->num <= 0)						/* 큐가 비어 있음 */
//		return -1;
//	else {
//		q->num--;
//		*x = q->que[q->front++];
//		if (q->front == q->max)
//			q->front = 0;
//		return 0;
//	}
//}
//
///*--- 맨 뒤의 데이터를 디큐 ---*/
//int DequeRear(IntDequeue *q, int *x)
//{
//	if (q->num <= 0)						/* 큐가 비어 있음 */
//		return -1;
//	else {
//		q->num--;
//		if (--q->rear < 0)
//			q->rear = q->max - 1;
//		*x = q->que[q->rear];
//		return 0;
//	}
//}
//
///*--- 맨 앞의 데이터를 피크 ---*/
//int PeekFront(const IntDequeue *q, int *x)
//{
//	if (q->num <= 0)							/* 큐가 비어 있음 */
//		return -1;
//	*x = q->que[q->front];
//	return 0;
//}
//
///*--- 맨 뒤의 데이터를 피크 ---*/
//int PeekRear(const IntDequeue *q, int *x)
//{
//	if (q->num <= 0)							/* 큐가 비어 있음 */
//		return -1;
//	*x = q->que[q->rear];
//	return 0;
//}
//
///*--- 모든 데이터 삭제 ---*/
//void Clear(IntDequeue *q)
//{
//	q->num = q->front = q->rear = 0;
//}
//
///*--- 큐의 최대 용량 ---*/
//int Capacity(const IntDequeue *q)
//{
//	return q->max;
//}
//
///*--- 큐에 저장된 데이터의 수 ---*/
//int Size(const IntDequeue *q)
//{
//	return q->num;
//}
//
///*--- 큐가 비어 있는지 확인 ---*/
//int IsEmpty(const IntDequeue *q)
//{
//	return q->num <= 0;
//}
//
///*--- 큐가 가득 찼는지 확인 ---*/
//int IsFull(const IntDequeue *q)
//{
//	return q->num >= q->max;
//}
//
///*--- 큐 검색 ---*/
//int Search(const IntDequeue *q, int x)
//{
//	int i, idx;
//
//	for (i = 0; i < q->num; i++) {
//		if (q->que[idx = (i + q->front) % q->max] == x)
//			return idx;		/* 검색 성공 */
//	}
//	return -1;				/* 검색 실패 */
//}
//
///*--- 큐 검색(논리적 검색) ---*/
//int Search2(const IntDequeue *q, int x)
//{
//	int i;
//
//	for (i = 0; i < q->num; i++) {
//		if (q->que[(i + q->front) % q->max] == x)
//			return i;		/* 검색 성공 */
//	}
//	return -1;				/* 검색 실패 */
//}
//
///*--- 전체 데이터 출력 ---*/
//void Print(const IntDequeue *q)
//{
//	int i;
//
//	for (i = 0; i < q->num; i++)
//		printf("%d ", q->que[(i + q->front) % q->max]);
//	putchar('\n');
//}
//
///*--- 큐 삭제 ---*/
//void Terminate(IntDequeue *q)
//{
//	if (q->que != NULL)
//		free(q->que);							/* 배열 해제 */
//	q->max = q->num = q->front = q->rear = 0;
//}
