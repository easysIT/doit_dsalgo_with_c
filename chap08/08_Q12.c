///* Q12 Boyer-Moore법으로 문자열 검색(검색 과정 출력) */
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//
//int _print(const char txt[], const char pat[], int txt_len, int pat_len, int pt, int pp)
//{
//	int i = 0, k = 0;
//
//	if (pp != pat_len - 1)
//		printf("    ");
//	else {
//		printf("%2d  ", pt - pp);
//		k = pt - pp;
//	}
//	for (i = 0; i < txt_len; i++)
//		printf("%c ", txt[i]);
//	putchar('\n');
//
//	printf("%*s%c\n", pt * 2 + 4, "", (txt[pt] == pat[pp]) ? '+' : '|');
//
//	printf("%*s", (pt - pp) * 2 + 4, "");
//	for (i = 0; i < pat_len; i++)
//		printf("%c ", pat[i]);
//	printf("\n\n");
//}
//
//int bm_match(const char txt[], const char pat[])
//{
//	int pt;							
//	int pp;							
//	int txt_len = strlen(txt);		
//	int pat_len = strlen(pat);		
//	int skip[UCHAR_MAX + 1];		
//
//	for (pt = 0; pt <= UCHAR_MAX; pt++)		
//		skip[pt] = pat_len;
//	for (pt = 0; pt < pat_len - 1; pt++)
//		skip[pat[pt]] = pat_len - pt - 1;
//	/* pt == pat_len - 1 である */
//	while (pt < txt_len) {
//		pp = pat_len - 1;					
//
//		while (_print(txt, pat, txt_len, pat_len, pt, pp), txt[pt] == pat[pp]) {
//			if (pp == 0)
//				return pt;
//			pp--;
//			pt--;
//		}
//		pt += (skip[txt[pt]] > pat_len - pp) ? skip[txt[pt]] : pat_len - pp;
//	}
//
//	return -1;
//}
//
//int main(void)
//{
//	int idx;
//	char s1[256]; /* 텍스트 */
//	char s2[256]; /* 패턴 */
//
//	puts("Boyer-Moore법");
//
//	printf("텍스트: ");
//	scanf("%s", s1);
//
//	printf("패턴: ");
//	scanf("%s", s2);
//
//	idx = bm_match(s1, s2);
//
//	if (idx == -1)
//		puts("텍스트에 패턴이 없습니다.");
//	else
//		printf("%d번째 문자와 일치합니다.\n", idx + 1);
//
//	return 0;
//}