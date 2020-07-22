/* ȸ�� ������ Member(���) */
#ifndef ___Member
#define ___Member

/*--- ȸ�� ������ ---*/
typedef struct {
	int no; 				/* ��ȣ */
	char name[20]; 		    /* �̸� */
} Member;

#define MEMBER_NO		1 	/* ��ȣ�� ��Ÿ���� ���� �� */
#define MEMBER_NAME		2 	/* �̸��� ��Ÿ���� ��� �� */

/*--- ȸ�� ��ȣ �� �Լ� ---*/
int MemberNoCmp(const Member *x, const Member *y);

/*--- ȸ�� �̸� �� �Լ� ---*/
int MemberNameCmp(const Member *x, const Member *y);

/*--- ȸ�� �����͸� ǥ��(�� �ٲ� ����) ---*/
void PrintMember(const Member *x);

/*--- ȸ�� �����͸� ǥ��(�� �ٲ� ����) ---*/
void PrintLnMember(const Member *x);

/*--- ȸ�� �����͸� �о� ���̱� ---*/
Member ScanMember(const char *message, int sw);
#endif