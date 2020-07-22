///* Q8 대소 문자를 구별하지 않는 문자열 비교 */
//#include <ctype.h>
//#include <stdio.h>
//#include <string.h>
//
//int str_cmpic(const char *s1, const char *s2)
//{
//	while (toupper(*s1) == toupper(*s2)) {
//		if (*s1 == '\0')			
//			return 0;
//		s1++;
//		s2++;
//	}
//	return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
//}
//
//int str_ncmpic(const char *s1, const char *s2, size_t n)
//{
//	while (n && *s1 && *s2) {
//		if (toupper(*s1) != toupper(*s2))			
//			return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
//		s1++;
//		s2++;
//		n--;
//	}
//	if (!n)  return 0;
//	if (*s1) return toupper(*s1);
//	return toupper(*s2);
//}
//
//int main(void)
//{
//	int n, retry;
//	char s1[256], s2[256];
//
//	puts("대/소문자를 구별하지 않는 비교");
//
//	do {
//		printf("s1 : "); scanf("%s", s1);
//		printf("s2 : "); scanf("%s", s2);
//		printf("비교 문자수 : "); scanf("%d", &n);
//
//		printf("str_ncmp (\"%s\", \"%s\") = %d\n", s1, s2, str_cmpic(s1, s2));
//		printf("str_ncmpic (\"%s\", \"%s\", %d) = %d\n", s1, s2, n, str_ncmpic(s1, s2, n));
//		printf("다시 한 번? [0 … No / 1 … Yes] : ");
//		scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}
