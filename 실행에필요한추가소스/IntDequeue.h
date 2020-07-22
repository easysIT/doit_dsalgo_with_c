///* int형 덱 Intdequeue */
//#ifndef ___IntDequeue
//#define ___IntDequeue
//
///*--- 큐를 구현하는 구조체 ---*/
//typedef struct {
//	int max;		/* 큐의 최대 용량 */
//	int num;		/* 현재 요솟수 */
//	int front;		/* 맨 앞 요소를 가리키는 커서 */
//	int rear;		/* 맨 뒤 요소를 가리키는 커서 */
//	int *que;		/* 큐를 가리키는 포인터 */
//} IntDequeue;
//
//int Initialize(IntDequeue *q, int max);
//
//int EnqueFront(IntDequeue *q, int x);
//
//int EnqueRear(IntDequeue *q, int x);
//
//int DequeFront(IntDequeue *q, int *x);
//
//int DequeRear(IntDequeue *q, int *x);
//
//int PeekFront(const IntDequeue *q, int *x);
//
//int PeekRear(const IntDequeue *q, int *x);
//
//void Clear(IntDequeue *q);
//
//int Capacity(const IntDequeue *q);
//
//int Size(const IntDequeue *q);
//
//int IsEmpty(const IntDequeue *q);
//
//int IsFull(const IntDequeue *q);
//
//int Search(const IntDequeue *q, int x);
//
//int Search2(const IntDequeue *q, int x);
//
//void Print(const IntDequeue *q);
//
//void Terminate(IntDequeue *q);
//
//#endif
