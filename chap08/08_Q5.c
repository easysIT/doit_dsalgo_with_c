///* Q5 strchr 함수 수정 */
//#include <stdio.h>
//
//char *str_chr(const char *s, int c)
//{
//	c = (char)c;
//	while (*s != c) {
//		if (*s == '\0')				/* 발견되지 않으면 */
//			return NULL;
//		s++;
//	}
//	return (char *)s;
//}
//
//int main(void)
//{
//	char str[64];				
//	char tmp[64];
//	int  ch;					
//	char *idx;
//
//	printf("문자열：");
//	scanf("%s", str);
//
//	printf("검색：");
//	scanf("%s", tmp);		
//	ch = tmp[0];				
//
//	if ((idx = str_chr(str, ch)) == -1)				
//		printf("문자 '%c'는 문자열 안에 없습니다.\n", ch);
//	else
//		printf("문자 '%c'는 %d번째에 있습니다.\n", ch, (idx - str) + 1);
//
//	return 0;
//}
