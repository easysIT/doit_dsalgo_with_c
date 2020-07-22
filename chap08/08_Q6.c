///* Q6 strchr 함수 수정 */
//#include <stdio.h>
//
//char *str_rchr(const char *s, int c)
//{
//	const char *p = NULL;			
//
//	c = (char)c;
//	while (1) {
//		if (*s == c)				
//			p = s;
//		if (*s == '\0')				
//			break;
//		s++;
//	}
//	return (char *)p;
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
//	if ((idx = str_rchr(str, ch)) == -1)
//		printf("문자 '%c'는 문자열 안에 없습니다.\n", ch);
//	else
//		printf("문자 '%c'는 %d번째에 있습니다.\n", ch, (idx - str) + 1);
//
//	return 0;
//}