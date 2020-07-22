///* Q3 int�� ť ArrayIntQueue�� ��� */
//#include <stdio.h>
//#include "ArrayIntQueue.h"
//
//int main(void)
//{
//	ArrayIntQueue que;
//
//	if (Initialize(&que, 64) == -1) {
//		puts("ť ������ �����߽��ϴ�.");
//		return 1;
//	}
//
//	while (1) {
//		int m, x;
//		int idx;
//
//		printf("���� �������� ����%d / %d\n", Size(&que), Capacity(&que));
//		printf("(1)��ť (2)��ť (3)��ũ (4)��� (5)�˻� (6)Ŭ���� (7)�� ���� / ���� �� ���� (0)���� : ");
//		scanf("%d", &m);
//
//		if (m == 0) break;
//
//		switch (m) {
//		case 1: /*--- ��ť ---*/
//			printf("�����ͣ�");   scanf("%d", &x);
//			if (Enque(&que, x) == -1)
//				puts("\a���� : ��ť�� �����߽��ϴ�.");
//			break;
//
//		case 2: /*--- ��ť ---*/
//			if (Deque(&que, &x) == -1)
//				puts("\a���� : ��ť�� �����߽��ϴ�.");
//			else
//				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
//			break;
//
//		case 3: /*--- ��ũ ---*/
//			if (Peek(&que, &x) == -1)
//				puts("\a���� : ��ũ�� �����߽��ϴ�.");
//			else
//				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
//			break;
//
//		case 4: /*--- ��� ---*/
//			Print(&que);
//			break;
//
//		case 5: /*--- �˻� ---*/
//			printf("�˻� ������ : ");
//			scanf("%d", &x);
//			if ((idx = Search(&que, x)) == -1)
//				puts("\a���� : �˻��� �����߽��ϴ�.");
//			else
//				printf("�����ʹ� �ε��� %d ��ġ�� �ֽ��ϴ�.\n", idx);
//			break;
//
//		case 6: /*--- Ŭ���� ---*/
//			Clear(&que);
//			break;
//
//		case 7: /*--- �� ���� / ���� �� ���� �Ǵ� ---*/
//			printf("ť�� ��� ��%s.\n", IsEmpty(&que) ? "���ϴ�" : "�� �ʽ��ϴ�");
//			printf("ť�� ���� %s.\n", IsFull(&que) ? "á���ϴ�" : "���� �ʾҽ��ϴ�");
//			break;
//		}
//	}
//
//	Terminate(&que);
//
//	return 0;
//}
