///* Q9 브루트-포스법으로 문자열 검색(검색 과정 출력) */
//#include <stdio.h>
//#include <string.h>
//
//int bf_match(const char txt[], const char pat[])
//{
//	int i, k = -1;
//	int count = 0;
//	int tlen = strlen(txt);
//	int plen = strlen(pat);
//	int pt = 0;		
//	int pp = 0;		
//
//	while (txt[pt] != '\0' && pat[pp] != '\0') {
//		if (k == pt - pp)
//			printf("    ");
//		else {
//			printf("%2d  ", pt - pp);
//			k = pt - pp;
//		}
//		for (i = 0; i < tlen; i++)
//			printf("%c ", txt[i]);
//		putchar('\n');
//
//		printf("%*s%c\n", pt * 2 + 4, "", (txt[pt] == pat[pp]) ? '+' : '|');
//
//		printf("%*s", (pt - pp) * 2 + 4, "");
//		for (i = 0; i < plen; i++)
//			printf("%c ", pat[i]);
//		printf("\n\n");
//		count++;
//
//		if (txt[pt] == pat[pp]) {
//			pt++;
//			pp++;
//		}
//		else {
//			pt = pt - pp + 1;
//			pp = 0;
//		}
//	}
//
//	printf("비교를 %d회 했습니다.\n", count);
//	if (pat[pp] == '\0')
//		return pt - pp;
//	return -1;
//}
//
//int main(void)
//{
//	int idx;
//	char s1[256]; /* 텍스트 */
//	char s2[256]; /* 패턴 */
//
//	puts("브루트-포스법");
//
//	printf("텍스트: ");
//	scanf("%s", s1);
//
//	printf("패턴: ");
//	scanf("%s", s2);
//
//	idx = bf_match(s1, s2); 
//
//	if (idx == -1)
//		puts("텍스트에 패턴이 없습니다.");
//	else
//		printf("%d번째 문자와 일치합니다.\n", idx + 1);
//
//	return 0;
//}