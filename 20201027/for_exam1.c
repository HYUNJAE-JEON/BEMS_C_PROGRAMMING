#include <stdio.h>
int main(void)  
{

#if(0) //���Ǻ�������
	int val = 0;
	int sumdata = 0;
	for(val=1; val <=100; val++) //�ʱ⹮�� �� �� ���� �ϰ� ���Ѵ�. 
	{
		printf("val : %d \n", val);
		if (val%2 ==0)
			sumdata += val;


	}
	printf("sumdata : %d \n", sumdata);

#else
	// while �ݺ����� Ȱ���ؼ� 0 �̻��� ���� �Էµ� ��� 
	// �ش� ���� ��� �����ؼ� ���� ���ϰ� 
	// ���� ���� ���� �Էµ� ��� �ݺ����� Ż���ϰ�
	// ���� ���� ������ ���� ������ �ո� ���


	int value = 0;
	int sumresult = 0;
	printf("���� �ϳ��� �Է�: ");
	scanf_s("%d",&value);
		
	while(value >= 0)
		{
			printf("sumresult : %d \n", sumresult);
			printf("���� �ϳ��� �Է�: ",value);
			sumresult += value;
			scanf_s("%d",&value);
			
		}
	printf("sumresult : %d \n", sumresult);


#endif
	return 0;
}