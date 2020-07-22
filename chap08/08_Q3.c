///* Q3 두 문자열의 내용을 바꾸기 */
//#include <stdio.h>
//
///*--- 두 문자열 x, y를 교환합니다. ---*/
//void swap_str(char *x, char *y)
//{
//	char *temp;
//	while (*x && *y) {					/* 짧은 문자열의 끝까지 문자열을 교환 */
//		char t = *x; *x++ = *y; *y++ = t;
//	}
//	if (*x) {							/* x가 더 긴 문자열이라면 */
//		temp = x;
//		while (*x) { *y++ = *x++; }		/* x의 나머지를 y로 복사 */
//		*temp = *y = '\0';
//	}
//	else if (*y) {						/* y가 더 긴 문자열이라면 */
//		temp = y;
//		while (*y) { *x++ = *y++; }		/* y의 나머지를 x로 복사 */
//		*temp = *x = '\0';
//	}
//	else {
//		*x = *y = '\0';
//	}
//}
//
//int main(void)
//{
//	char s1[128], s2[128];
//
//	printf("문자열 S1 :");	scanf("%s", s1);
//	printf("문자열 S2 :");	scanf("%s", s2);
//
//	swap_str(s1, s2);	
//
//	printf("두 문자열을 교환했습니다.\n");
//	printf("문자열 S1 : %s\n", s1);
//	printf("문자열 S2 : %s\n", s2);
//
//	return 0;
//}
