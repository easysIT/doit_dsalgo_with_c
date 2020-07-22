///* int�� �� Intdequeue */
//#ifndef ___IntDequeue
//#define ___IntDequeue
//
///*--- ť�� �����ϴ� ����ü ---*/
//typedef struct {
//	int max;		/* ť�� �ִ� �뷮 */
//	int num;		/* ���� ��ڼ� */
//	int front;		/* �� �� ��Ҹ� ����Ű�� Ŀ�� */
//	int rear;		/* �� �� ��Ҹ� ����Ű�� Ŀ�� */
//	int *que;		/* ť�� ����Ű�� ������ */
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
