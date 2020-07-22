///* Q14 strrstr 함수와 같은 함수 */
//#include <stdio.h>
//#include <string.h>
//
//char *str_rstr(const char *s1, const char *s2)
//{
//	int s1_len = strlen(s1);		
//	int s2_len = strlen(s2);		
//	int pt = s1_len - s2_len;		
//	int pp;							
//
//	while (pt >= 0) {
//		pp = 0;
//		while (s1[pt] == s2[pp]) {
//			if (pp == s2_len - 1)
//				return &s1[pt - pp];
//			pp++;
//			pt++;
//		}
//		pt = pt - pp - 1;
//	}
//
//	return NULL;
//}
//
//int main(void)
//{
//	char s1[256], s2[256];
//	char *p;
//
//	puts("str_rstr 함수");
//
//	printf("텍스트: ");
//	scanf("%s", s1);
//
//	printf("패턴: ");
//	scanf("%s", s2);
//
//	p = str_rstr(s1, s2);
//
//	if (p == NULL)
//		printf("텍스트에 패턴이 없습니다.\n");
//	else {
//		int ofs = p - s1;
//		printf("\n%s\n",	s1);
//		printf("%*s|\n",	ofs, "");
//		printf("%*s%s\n",	ofs, "", s2);
//	}
//
//	return 0;
//}