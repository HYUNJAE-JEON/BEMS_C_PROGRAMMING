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
			if(selmenu == 1) // ���ǹ� : ����񱳿����� ���� ���� ������ ����
			{
				printf("1�� �޴��� ���� !! \n");
			}
			else if(selmenu == 2)
			{
				printf("2�� �޴��� ���� !! \n");
			}
			else if(selmenu == 3)
			{
				printf("3�� �޴��� ���� !! \n");
			}
			else if(selmenu == 4)
			{
				printf("4�� �޴��� ���� !! \n");
				break; //�ݺ��� �ϳ��� Ż��
			}
			else
			{
				printf("1~4�� �޴��� �������ּ���! \n");
			}
	}
	printf("���α׷� ����! \n");
return 0;
}