#include <stdio.h>
int main(void)
{
	/*int arr1[5] = {3,6,7}; // 1���� �Ϲݹ迭 (�� ����)
	int arr2[5] = {6,7,8,9};
	int arr3[5] = {2,3};*/

	int arrdb[3][5] = {
		{3,6,7}, // ù ��° �� �ʱ�ȭ
		{6,7,8,9}, // �� ��° �� �ʱ�ȭ
		{2,3} // �� ��° �� �ʱ�ȭ
	}; // 2���� �迭 

	int low,col;
	for(low=0; low<3; low++)
	{
		for(col=0; col<5; col++)
		{
			printf("%d  ",arrdb[low][col]);

		}
		printf("\n");
	}
	//arrdb[1][1] = 30;
	
	printf("���ڸ� �Է����ּ���: ");
	scanf_s("%d",&arrdb[1][1]);
	
	//������ �迭�� �ʱ�ȭ�ϰ� �����ϴ� �����̴�.

	for(low=0; low<3; low++)
	{
		for(col=0; col<5; col++)
		{
			printf("%d  ",arrdb[low][col]);

		}
		printf("\n");
	}
	// 60byte = 3 �� 5 �� 4byte 


	return 0;
}

// ����Ʈ �迭�� �迭�� ���̿� ���� 4byte * �迭�� ���̰� �ȴ�.
// ����Ʈ �迭�� �迭�̴�. �Ϲ� �迭�� �����͸� ����Ʈ �迭�� ����Ʈ�� ������� ���̴�.