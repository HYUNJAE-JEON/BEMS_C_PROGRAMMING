#include <stdio.h>
int main(void)  
{
#if(0)
	int val = 0;
	int multiplesquare = 0;
	int result = 0;
	printf("����ϰ��� �ϴ� �������� �ܼ��� �Է��ϼ���: ");
	scanf_s("%d", &multiplesquare);

	for(val = 1; val<=9; val++) //for(�ʱⰪ; ���ǰ�; ���๮) //�ڵ� ���� ���� ���� �߰�ȣ�� �Է����־���Ѵ�. ��
	{
		result = multiplesquare * val;
		printf("%d * %d = %d \n",multiplesquare,val,result);
	}

#elif(0)

	int val = 0;
	int multiplesquare = 0;
	int result = 0;
//	printf("����ϰ��� �ϴ� �������� �ܼ��� �Է��ϼ���: ");
//	scanf_s("%d", &multiplesquare);


	for(multiplesquare = 2; multiplesquare <=9; multiplesquare++)
	{
			for(val = 1; val<=9; val++) 
		{
			result = multiplesquare * val;
			printf("%d * %d = %d \n",multiplesquare,val,result);
		}
			printf("--------------------------------\n");
	} 

#elif(0)
	// �ݺ����� break. continue
// break: �ڱ� �ڽ��� ���ΰ� �ִ� ���� ����� �ݺ��� �ϳ��� Ż��
//i

	int temp = 0;
	int num = 0;
	while(num < 3)
	{
		while(temp<5)
		{
			printf("temp : %d \n", temp);
			if(temp ==3)
				break;
			temp++;
		}
		temp = 0;
		num++;
	}

#else

	//�ݺ����� continue : �ݺ��� ���� �� continue �� ������ continue �Ʒ� ������ 
	//������� �ʰ� �ٽ� �ݺ��� ���� �ö󰡼� ���� 
	int num = 0;
	int sumdata = 0;
	while( num <10)
	{
		num++;
		if(num%3 == 0) //3�� ���
			continue;
		sumdata += num;

	}
	printf("sumdata : %d \n", sumdata);
#endif


	//����ϰ��� �ϴ� �������� �ܼ��� �Է�
	return 0;
}
