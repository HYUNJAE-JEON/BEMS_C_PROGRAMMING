#include <stdio.h>

int main(void)
{
	// 5���� ���� �����͸� ����.
	// ���ü� �ִ� ���� ���� �����͸� ȿ�������� ����, ó������!
	/*int data1 = 5;
	int data2 = 6;
	int data3 = 7;
	int data4 = 8;
	int data5 = 9;
	*/
	int len;
	int arr[5] = {5,6,7,8,9}; // �迭 ����� ���ÿ� �ʱ�ȭ //���̰� ������ �����迭, �迭�� ���̸� ������� �� �ۿ� ����. ���⵵ �ε���[0]���� �����Ѵ�.
	// �� �迭 �������� 0���� �ʱ�ȭ�ض�.
	int idx = 0;
	int sumdata = 0;
	
	// [ ] �ȿ� �� ���ڰ� �迭�� �������� ����� �����̴�. 
	// int�� �迭 ���� ���� �ڷ���
	// 0������ �ε����� ���۵ȴ�. 
	// �����÷ο찡 �� �Ͼ���� �ؾ��Ѵ�. 
	len = sizeof(arr) / sizeof(int); //���̸� �˰� �ʹ�. 
	printf("arr.size : %d \n", sizeof(arr)); //�迭�� �� ����Ʈ ��
	for(idx=0; idx<len; idx++)

	{
		
		printf("arr[%d] : %d \n", idx, arr[idx]); //arr[0]...arr[4]
		sumdata += arr[idx];
	}

	printf("sumdata : %d \n", sumdata);

	for(idx=0; idx<len; idx++)

	{

		printf("���� ������ �Է� : ");
		scanf_s("%d",&arr[idx]);
	}
	for(idx=0; idx<len; idx++)

	{
		
		printf("arr[%d] : %d \n", idx, arr[idx]); //arr[0]...arr[4]
		
	}

	return 0;
}
// ������, �迭�� ������ ���������̴�.