#include <stdio.h>
int main(void)  
{
	// while, for, do-while() : ~����, ������ ���� ��� ��� �ݺ� ����
	// ������ ������ ���� �ݺ� Ż�� 
	int idx = 1; //�ʱ⹮
	int num = 0;
	int sumdata = 0;
	printf("num value input : ");
	scanf_s("%d",&num);

	while(idx <= num) // 5�� �ݺ� ���� //while���� ���ǹ��� ���µ�
	{
		//���౸��
		printf("idx : %d \n", idx);
		// �ݺ����� Ż�� ������ ������־�� �Ѵ�. 
		sumdata += idx;
		idx++; //idx = idx + 1
		
	}

	printf("sumdata : %d \n", sumdata); //1���� �Է��� num���� ������ ��� ������ ���� ���

	return 0;
}
