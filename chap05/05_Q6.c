///* 하노이 탑(기둥 이름을 출력했습니다) */
//#include <stdio.h>
//
///*--- 원반[1] ~ 원반[no]을 x 기둥에서 y 기둥으로 이동 ---*/
//void move(int no, int x, int y)
//{
//	char *name[] = { "Ａ기둥", "Ｂ기둥", "Ｃ기둥" };
//
//	if (no > 1)
//		move(no - 1, x, 6 - x - y);		/* 그룹을 시작 기둥에서 중간 기둥으로 */
//
//	printf("원반[%d]를 %s에서 %s로 이동\n", no, name[x - 1], name[y - 1]);	/* 바닥을 목적 기둥으로 */
//
//	if (no > 1)
//		move(no - 1, 6 - x - y, y);		/* 그룹을 중간 기둥에서 목표 기둥으로 */
//}
//
//int main(void)
//{
//	int n;		/* 円盤の枚数 */
//
//	printf("하노이 탑\n원반 개수 : ");
//	scanf("%d", &n);
//
//	move(n, 1, 3);
//
//	return 0;
//}
