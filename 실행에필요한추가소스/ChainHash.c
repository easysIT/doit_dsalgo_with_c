///* 체인법에 의한 해시 */
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "Member.h"
//#include "ChainHash.h"
//
///*--- 해시 함수 (key의 해시 값을 반환) ---*/
//static int hash(const char * key, int size)
//{
//	unsigned long h = 0;
//
//	while (*key)
//		h += *(key++);
//	return h % size;
//}
//
///*--- 노드의 각 멤버에 값을 설정 ---- */
//static void SetNode(Node * n, const Member * x, const Node * next)
//{
//	n->data = *x;		/* 데이터 */
//	n->next = next;		/* 다음 노드에 대한 포인터 */
//}
//
///*--- 해시 테이블 초기화 ---*/
//int Initialize(ChainHash * h, int size)
//{
//	int i;
//
//	if ((h->table = calloc(size, sizeof(Node *))) == NULL) {
//		h->size = 0;
//		return 0;
//	}
//
//	h->size = size;
//	for (i = 0; i < size; i++)
//		h->table[i] = NULL;
//
//	return 1;
//}
//
///*--- 검색 ---*/
//Node * Search(const ChainHash * h, const Member * x)
//{
//	int key = hash(x->name, h->size);	/* 검색하는 데이터의 해시 값 */
//	Node *p = h->table[key];			/* 주목 노드 */
//
//	while (p != NULL) {
//		if (!strcmp(p->data.name, x->name))		/* 검색 성공 */
//			return p;
//		p = p->next;							/* 다음 노드에 주목 */
//	}
//	return NULL; /* 검색 실패 */
//}
//
///*--- 데이터 추가 ---*/
//int Add(ChainHash * h, const Member * x)
//{
//	int key = hash(x->name, h->size);			/* 추가하는 ​​데이터의 해시 값 */
//	Node *p = h->table[key];					/* 주목 노드 */
//	Node *temp;
//
//	while (p!= NULL) {
//		if (!strcmp(p->data.name, x->name))		/* 이 키는 이미 등록되어 있음 */
//			return 1;							/* 추가 ​​실패 */
//		p = p->next; /* 다음 노드에 주목 */
//	}
//	if ((temp = (Node *)calloc(1, sizeof(Node))) == NULL)
//		return 2;
//	SetNode(temp, x, h->table[key]);			/* 추가하는 ​​노드의 값을 설정 */
//	h->table[key] = temp;
//
//	return 0; /* 추가 ​​성공 */
//}
//
///*--- 데이터 삭제 ---*/
//int Remove(ChainHash * h, const Member * x)
//{
//	int key = hash(x->name, h->size);			/* 삭제하는 데이터의 해시 값 */
//	Node *p = h->table[key];					/* 주목 노드 */
//	Node **pp = &h->table[key];					/* 주목 노드에 대한 포인터 */
//
//	while (p!= NULL) {
//		if (!strcmp(p->data.name, x->name)) {	/* 있으면 */
//			*pp = p->next;
//			free(p);							/* 해제 */
//			return 0;							/* 삭제 성공 */
//		}
//		pp = &p->next;
//		p = p->next;							/* 다음 노드에 주목 */
//	}
//
//	return 1;									/* 삭제 실패(존재하지 않음) */
//}
//
///*--- 해시 테이블 덤프 ---*/
//void Dump(const ChainHash * h)
//{
//	int i;
//
//	for (i = 0; i <h->size; i++) {
//		Node *p = h->table[i];
//		printf("%02d", i);
//		while (p != NULL) {
//			printf("→ %d (% s)", p->data.no, p->data.name);
//			p = p->next;
//		}
//		putchar('\n');
//	}
//}
//
///*--- 전체 데이터 삭제 ---*/
//void Clear(ChainHash * h)
//{
//	int i;
//
//	for (i = 0; i < h->size; i++) {
//		Node *p = h->table[i];
//		while (p != NULL) {
//			Node *next = p->next;
//			free(p);
//			p = next;
//		}
//		h->table[i] = NULL;
//	}
//}
//
///*--- 해시 테이블 뒤처리 ---*/
//void Terminate(ChainHash * h)
//{
//	Clear(h);				/* 모든 데이터를 삭제 */
//	free(h->table);			/* 해시 테이블용 배열 저장소를 해제 */
//	h->size = 0;			/* 해시 테이블의 용량을 클리어 */
//}