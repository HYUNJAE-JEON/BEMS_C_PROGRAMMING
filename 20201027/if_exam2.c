#include <stdio.h>

int main(void)


{
	while(1)
	{
		char ch = 0;
		char temp = 0;
			printf("���ĺ� �ϳ� �Է�: ");
			scanf_s("%c", &ch);
			while( (temp=getchar()) != '\n'); //��Ʈ������ Ŭ���� ����
			if ((ch >= 'A') && (ch <= 'Z'))
			{
				printf("ch : %c \n", ch+32);
			}
			else if ((ch >= 'a') && (ch <= 'z'))
			{
				printf("ch : %c \n", ch-32);
			}
			else
			{
				printf("�Է��� ���ڰ� ���ĺ��� �ƴմϴ�! \n");
				break; //�ݺ��� Ż�� ȿ��
			}
	}
		return 0;
}