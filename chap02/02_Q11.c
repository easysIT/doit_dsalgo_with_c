///* Q11 한 해의 지난 날의 수를 구합니다. */
//#include <stdio.h>
//
///* - 월별 날짜 - */
//int mdays[][12] = {
//	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
//	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
//};
//
///*--- year 연도는 윤년인지 알아보는 함수 ---*/
//int isleap(int year)
//{
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//
///*--- y년 m월 d일의 그 해의 지난 날의 수를 구합니다. ---*/
//int dayofyear(int y, int m, int d)
//{
//	while (--m)
//		d += mdays[isleap(y)][m - 1];
//	return (d);
//}
//
//int main(void)
//{
//	int year, month, day;	/* 년 월 일 */
//	int retry;				/* 다시 한 번? */
//
//	do {
//		printf("년 : "); scanf("%d", &year);
//		printf("월 : "); scanf("%d", &month);
//		printf("일 : "); scanf("%d", &day);
//
//		printf("%d 일째 \n", dayofyear(year, month, day));
//
//		printf("다시 한 번 할까요?(1 예 / 0 아니오): ");
//		scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}