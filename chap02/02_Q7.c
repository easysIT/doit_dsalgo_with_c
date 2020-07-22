///* Q7 정수를 2 진수 ~  36 진수로 기수 변환(변환 과정을 출력하는 예제) */
//#include <stdio.h>
//
///*--- type 형의 x와 y의 값을 교환 ---*/
//#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)
//
///*--- 정수 x를 n 진수로 변환하고 배열 d의 아랫자리부터 넣음 ---*/
//int card_conv(unsigned x, int n, char d[])
//{
//	int i;
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0; /* 변환 뒤 자릿수 */
//
//	if (x == 0)										/* 0이면 */
//		d[digits++] = dchar[0];						/* 변환 뒤에도 0 */
//	else {											/* 0이 아니라면 */
//		while (x) {
//			printf("%2d | %7d ... %c\n", n, x, dchar[x % n]);
//			printf("   + ---------- \n");
//			d[digits++] = dchar[x % n];				 /* n으로 나눈 나머지를 넣어둠 */
//			x /= n;
//		}
//		printf("%12d\n", x);
//	}
//
//	/* d[0] ~ d[digits -1]의 값을 역순으로 정렬합니다. */
//	for (i = 0; i <digits / 2; i++)
//		swap(char, d[i], d[digits - i - 1]);
//
//	return digits;
//}
//
//int main(void)
//{
//	int i;
//	unsigned no;			/* 변환하는 정수 */
//	int cd;					/* 기수 */
//	int dno;				/* 변환 뒤 자릿수 */
//	char cno[512];			/* 변환 뒤 각 자리의 숫자를 넣어두는 문자 배열 */
//	int retry;				/* 다시 한 번? */
//
//	puts("10 진수를 기수로 변환합니다.");
//
//	do {
//		printf("변환하는 음이 아닌 정수 : ");
//		scanf("%u", &no);
//
//		do {
//			printf("무슨 진수로 변환합니까?(2 ~ 36) : ");
//			scanf("%d", &cd);
//		} while (cd < 2 || cd > 36);
//
//		dno = card_conv(no, cd, cno);		/* no를 cd 진수로 변환 */
//
//		printf("%d 진수로 ", cd);
//		for (i = 0; i <dno; i++)			/* 윗자리부터 표시 */
//			printf("%c", cno[i]);
//		printf("입니다.\n");
//
//		printf("다시 한 번 할까요?(1 예 / 0 아니오): ");
//		scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}