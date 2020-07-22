///* Q4 세 정수를 입력해 중간값을 구합니다(모든 대소 관계에 대해 확인). */
///* 
//	!편집자주
//	중간값을 구한다는 것은 average를 의미하는 것이 아니라 
//	말 그대로 가운데 있는 값을 구한다는 뜻입니다. 
//*/
//
//#include <stdio.h>
//
///*--- a, b, c의 중간값을 구합니다. ---*/
//int med3(int a, int b, int c)
//{
//	if (a >= b)
//		if (b >= c)
//			return b;
//		else if (a <= c)
//			return a;
//		else
//			return c;
//	else if (a > c)
//		return a;
//	else if (b > c)
//		return c;
//	else
//		return b;
//}
//
//int main(void)
//{
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 1, med3(3, 2, 1));  /* [A] a > b > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 2, med3(3, 2, 2));  /* [B] a > b = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 1, 2, med3(3, 1, 2));  /* [C] a > c > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 3, med3(3, 2, 3));  /* [D] a = c > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 1, 3, med3(2, 1, 3));  /* [E] c > a > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 2, med3(3, 3, 2));  /* [F] a = b > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 3, med3(3, 3, 3));  /* [G] a = b = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 2, 3, med3(2, 2, 3));  /* [H] c > a = b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 1, med3(2, 3, 1));  /* [I] b > a > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 2, med3(2, 3, 2));  /* [J] b > a = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 1, 3, 2, med3(1, 3, 2));  /* [K] b > c > a */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 3, med3(2, 3, 3));  /* [L] b = c > a */
//	printf("med3 (%d %d %d) = %d입니다.\n", 1, 2, 3, med3(1, 2, 3));  /* [M] c > b > a */
//
//	return 0;
//}