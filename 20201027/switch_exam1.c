#include <stdio.h>

int main(void)

{

	int selmenu = 0;
	char temp = 0;
	while(1)
	{
			printf("1.�Է� 2.��� 3. ���� 4. ���� \n");
			printf("�޴� ���� : ");
			scanf_s("%d",&selmenu);
			while( (temp=getchar()) != '\n');//�Է½�Ʈ������ Ŭ����
			switch(selmenu)
			{
			case 1: //switch case�� �ݺ��� ���ǹ� if �� �� �� �ִ�.
				printf("1�� �޴��� ���� !! \n");
				break; //switchcase ���� Ż��
			case 2: //case �ڿ��� ������ ���� �� �ƴ϶� ���� ��� ���� �;��Ѵ�.
				printf("2�� �޴��� ���� !! \n");
				break;
			case 3:
				printf("3�� �޴��� ���� !! \n");
				break;
			case 4:
				printf("4�� �޴��� ���� !! \n");
				break;// switch-case ���� Ż�� ����
			default:// if_else ������ else ����
				printf("1~4�� �޴��� �������ּ���! \n");
			}
			if (selmenu ==4)
				break; //�ݺ��� �ϳ� Ż�� ����
	}
	printf("���α׷� ����!! \n");
return 0;
}