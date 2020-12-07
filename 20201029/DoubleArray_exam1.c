#include <stdio.h>
int main(void)
{
	/*int arr1[5] = {3,6,7}; // 1차원 일반배열 (선 개념)
	int arr2[5] = {6,7,8,9};
	int arr3[5] = {2,3};*/

	int arrdb[3][5] = {
		{3,6,7}, // 첫 번째 행 초기화
		{6,7,8,9}, // 두 번째 행 초기화
		{2,3} // 세 번째 행 초기화
	}; // 2차원 배열 

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
	
	printf("숫자를 입력해주세요: ");
	scanf_s("%d",&arrdb[1][1]);
	
	//이차원 배열을 초기화하고 수정하는 문법이다.

	for(low=0; low<3; low++)
	{
		for(col=0; col<5; col++)
		{
			printf("%d  ",arrdb[low][col]);

		}
		printf("\n");
	}
	// 60byte = 3 행 5 열 4byte 


	return 0;
}

// 포인트 배열은 배열의 길이에 따라서 4byte * 배열의 길이가 된다.
// 포인트 배열은 배열이다. 일반 배열은 데이터를 포인트 배열은 포인트를 묶어놓은 것이다.