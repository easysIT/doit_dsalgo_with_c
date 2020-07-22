///* ü�ι����� ������ �ؽ�(���) */
//#ifndef ___ChainHash
//#define ___ChainHash
//
//#include "Member.h"
//
///*--- ��Ŷ�� ��Ÿ���� ��� ---*/
//typedef struct __node {
//	Member data;			/* ������ */
//	struct __node *next;	/* ���� ��忡 ���� ������ */
//} Node;
//
///*--- �ؽ� ���̺� ---*/
//typedef struct {
//	int size;				/* �ؽ� ���̺��� ũ�� */
//	Node **table;			/* �ؽ� ���̺��� ù ��° ��ҿ� ���� ������ */
//} ChainHash;
//
///*--- �ؽ� ���̺� �ʱ�ȭ ---*/
//int Initialize(ChainHash *h, int size);
//
///*--- �˻� ---*/
//Node *Search(const ChainHash *h, const Member *x);
//
///*--- ������ �߰� ---*/
//int Add(ChainHash *h, const Member *x);
//
///*--- ������ ���� ---*/
//int Remove(ChainHash *h, const Member *x);
//
///*--- �ؽ� ���̺� ����(dump) ---*/
//void Dump(const ChainHash *h);
//
///*--- ��� ������ ���� ---*/
//void Clear(ChainHash *h);
//
///*--- �ؽ� ���̺� ���� ---*/
//void Terminate(ChainHash *h);
//#endif