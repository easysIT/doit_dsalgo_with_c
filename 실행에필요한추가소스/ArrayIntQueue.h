///* int형 큐 ArrayIntQueue */
//#ifndef ___ArrayIntQueue
//#define ___ArrayIntQueue
//
///*--- 큐를 구현하는 구조체 ---*/
//typedef struct {
//	int max;		/* 큐의 최대 용량 */
//	int num;		/* 현재의 요솟수 */
//	int *que;		/* 큐를 가리키는 포인터 */
//} ArrayIntQueue;
//
//int Initialize(ArrayIntQueue *q, int max);
//
//int Enque(ArrayIntQueue *q, int x);
//
//int Deque(ArrayIntQueue *q, int *x);
//
//int Peek(const ArrayIntQueue *q, int *x);
//
//void Clear(ArrayIntQueue *q);
//
//int Capacity(const ArrayIntQueue *q);
//
//int Size(const ArrayIntQueue *q);
//
//int IsEmpty(const ArrayIntQueue *q);
//
//int IsFull(const ArrayIntQueue *q);
//
//int Search(const ArrayIntQueue *q, int x);
//
//void Print(const ArrayIntQueue *q);
//
//void Terminate(ArrayIntQueue *q);
//
//#endif
