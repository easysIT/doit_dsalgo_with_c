///* Q1 실습 7-2 프로그램(IntSet.c)에 8개 함수 추가 */
//#include <stdio.h>
//#include <stdlib.h>
//#include "IntSet.h"
//
///*--- ■ 표시가 있는 함수가 새로 추가된 8개의 함수 입니다. ---*/
//
//int Initialize(IntSet *s, int max)
//{
//	s->num = 0;
//	if ((s->set = calloc(max, sizeof(int))) == NULL) {
//		s->max = 0;								
//		return -1;
//	}
//	s->max = max;
//	return 0;
//}
//
//int IsMember(const IntSet *s, int n)
//{
//	int i;
//
//	for (i = 0; i < s->num; i++)
//		if (s->set[i] == n)
//			return i;			
//	return -1;					
//}
//
///*--- ■ 집합이 가득 찼다면 1, 아니면 0을 반환 ---*/
//int IsFull(const IntSet *s)
//{
//	return s->num >= s->max;
//}
//
//void Add(IntSet *s, int n)
//{
//	if (s->num < s->max && IsMember(s, n) == -1)	
//		s->set[s->num++] = n;						
//}
//
//void Remove(IntSet *s, int n)
//{
//	int idx;
//
//	if ((idx = IsMember(s, n)) != -1) {
//		s->set[idx] = s->set[--s->num];	
//	}
//}
//
//int Capacity(const IntSet *s)
//{
//	return s->max;
//}
//
//int Size(const IntSet *s)
//{
//	return s->num;
//}
//
//void Assign(IntSet *s1, const IntSet *s2)
//{
//	int i;
//	int n = (s1->max < s2->num) ? s1->max : s2->num;	
//
//	for (i = 0; i < n; i++)
//		s1->set[i] = s2->set[i];
//	s1->num = n;
//}
//
//int Equal(const IntSet *s1, const IntSet *s2)
//{
//	int i, j;
//
//	if (Size(s1) != Size(s2))
//		return 0;
//
//	for (i = 0; i < s1->num; i++) {
//		for (j = 0; j < s2->num; j++)
//			if (s1->set[i] == s2->set[j])
//				break;
//		if (j == s2->num)
//			return 0;
//	}
//	return 1;
//}
//
//IntSet *Union(IntSet *s1, const IntSet *s2, const IntSet *s3)
//{
//	int i;
//
//	Assign(s1, s2);
//	for (i = 0; i < s3->num; i++)
//		Add(s1, s3->set[i]);
//
//	return s1;
//}
//
//IntSet *Intersection(IntSet *s1, const IntSet *s2, const IntSet *s3)
//{
//	int i, j;
//
//	s1->num = 0;			/* s1を空集合にする */
//	for (i = 0; i < s2->num; i++)
//		for (j = 0; j < s3->num; j++)
//			if (s2->set[i] == s3->set[j])
//				Add(s1, s2->set[i]);
//	return s1;
//}
//
//IntSet *Difference(IntSet *s1, const IntSet *s2, const IntSet *s3)
//{
//	int i, j;
//
//	s1->num = 0;			/* s1を空集合にする */
//	for (i = 0; i < s2->num; i++) {
//		for (j = 0; j < s3->num; j++)
//			if (s2->set[i] == s3->set[j])
//				break;
//		if (j == s3->num)
//			Add(s1, s2->set[i]);
//	}
//	return s1;
//}
//
///*--- ■ 집합 s2, s3의 대칭 차를 s1에 대입하는 함수 ---*/
//IntSet *SymmetricDifference(IntSet *s1, const IntSet *s2, const IntSet *s3)
//{
//	int i;
//
//	s1->num = 0;			/* s1을 공집합으로 */
//
//	for (i = 0; i < s2->num; i++)
//		if (IsMember(s3, s2->set[i]) == -1)
//			Add(s1, s2->set[i]);
//
//	for (i = 0; i < s3->num; i++)
//		if (IsMember(s2, s3->set[i]) == -1)
//			Add(s1, s3->set[i]);
//
//	return s1;
//}
//
///*--- ■ 집합 s1에 s2의 모든 원소를 추가하는 함수(s1 포인터 반환) ---*/
//IntSet *ToUnion(IntSet *s1, const IntSet *s2)
//{
//	int i;
//
//	for (i = 0; i < s2->num; i++)
//		Add(s1, s2->set[i]);
//
//	return s1;
//}
//
///*--- ■ 집합 s1에서 s2에 들어 있지 않은 모든 원소를 삭제하는 함수(s1 포인터 반환) ---*/
//IntSet *ToIntersection(IntSet *s1, const IntSet *s2)
//{
//	int i = 0;
//
//	while (i < s1->num) {
//		if (IsMember(s2, s1->set[i]) == -1)
//			Remove(s1, s1->set[i]);
//		else
//			i++;
//	}
//	return s1;
//}
//
///*--- ■ 집합 s1에서 s2에 들어 있는 모든 원소를 삭제하는 함수(s1 포인터 반환) ---*/
//IntSet *ToDifference(IntSet *s1, const IntSet *s2)
//{
//	int i;
//
//	for (i = 0; i < s2->num; i++)
//		Remove(s1, s2->set[i]);
//
//	return s1;
//}
//
///*--- ■ 집합 s1이 s2의 부분집합이면 1, 아니면 0을 반환 ---*/
//int IsSubset(const IntSet *s1, const IntSet *s2)
//{
//	int i, j;
//
//	for (i = 0; i < s1->num; i++) {
//		for (j = 0; j < s2->num; j++)
//			if (s1->set[i] == s2->set[j])
//				break;
//		if (j == s2->num)					
//			return 0;
//	}
//	return 1;
//}
//
///*--- ■ 집합 s1이 s2의 진부분집합이면 1, 아니면 0을 반환 ---*/
//int IsProperSubset(const IntSet *s1, const IntSet *s2)
//{
//	int i;
//
//	if (s1->num >= s2->num)					
//		return 0;							
//
//	return IsSubset(s1, s2);
//}
//
//void Print(const IntSet *s)
//{
//	int i;
//
//	printf("{ ");
//	for (i = 0; i < s->num; i++)
//		printf("%d ", s->set[i]);
//	printf("}");
//}
//
//void PrintLn(const IntSet *s)
//{
//	Print(s);
//	putchar('\n');
//}
//
///*--- ■ 집합의 모든 원소를 삭제하는 함수 ---*/
//void Clear(IntSet *s)
//{
//	s->num = 0;
//}
//
//void Terminate(IntSet *s)
//{
//	if (s->set != NULL) {
//		free(s->set);							
//		s->max = s->num = 0;
//	}
//}
