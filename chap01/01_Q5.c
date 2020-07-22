///* Q5 세 정수를 입력해 중간값을 구합니다(모든 대소 관계에 대해 확인). */
//#include <stdio.h>
//
///*
//	1. if ((b >= a && c <= a) || (b <= a && c >= a) 설명
//	여기서 (b >= a 및 b <= a)의 판단을 거꾸로 뒤집은 판단이 
//	다음 else 이후에 else if ((a > b && c < b) || (a < b && c > b)라는 식으로 이어집니다.	
//	첫 번째 if가 성립하지 않는 경우 두 번째 if에서도
//	같은 판단을 하므로 이 알고리즘은 효율적이지는 않습니다.
//*/
//
///*--- a, b, c의 중앙값을 구합니다. ---*/
//int med3(int a, int b, int c)
//{
//	if ((b >= a && c <= a) || (b <= a && c >= a))
//		return a;
//	else if ((a > b && c < b) || (a < b && c > b))
//		return b;
//	return c;
//}
//
//int main(void)
//{
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 1, med3(3, 2, 1));   /* [A] a > b > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 2, med3(3, 2, 2));   /* [B] a > b = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 1, 2, med3(3, 1, 2));   /* [C] a > c > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 3, med3(3, 2, 3));   /* [D] a = c > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 1, 3, med3(2, 1, 3));   /* [E] c > a > b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 2, med3(3, 3, 2));   /* [F] a = b > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 3, med3(3, 3, 3));   /* [G] a = b = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 2, 3, med3(2, 2, 3));   /* [H] c > a = b */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 1, med3(2, 3, 1));   /* [I] b > a > c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 2, med3(2, 3, 2));   /* [J] b > a = c */
//	printf("med3 (%d %d %d) = %d입니다.\n", 1, 3, 2, med3(1, 3, 2));   /* [K] b > c > a */
//	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 3, med3(2, 3, 3));   /* [L] b = c > a */
//	printf("med3 (%d %d %d) = %d입니다.\n", 1, 2, 3, med3(1, 2, 3));   /* [M] c > b > a */
//
//	return 0;
//}