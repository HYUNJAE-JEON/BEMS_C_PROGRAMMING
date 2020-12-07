#include <stdio.h>

int main(void)
{
	// 5개의 정수 데이터를 저장.
	// 관련성 있는 많은 양의 데이터를 효율적으로 관리, 처리하자!
	/*int data1 = 5;
	int data2 = 6;
	int data3 = 7;
	int data4 = 8;
	int data5 = 9;
	*/
	int len;
	int arr[5] = {5,6,7,8,9}; // 배열 선언과 동시에 초기화 //길이가 고정된 정적배열, 배열은 길이를 명시해줄 수 밖에 없다. 여기도 인덱스[0]으로 시작한다.
	// 빈 배열 쓰지말고 0으로 초기화해라.
	int idx = 0;
	int sumdata = 0;
	
	// [ ] 안에 들어간 숫자가 배열의 길이이자 요소의 개수이다. 
	// int는 배열 안의 값의 자료형
	// 0번부터 인덱스가 시작된다. 
	// 오버플로우가 안 일어나도록 해야한다. 
	len = sizeof(arr) / sizeof(int); //길이를 알고 싶다. 
	printf("arr.size : %d \n", sizeof(arr)); //배열의 총 바이트 수
	for(idx=0; idx<len; idx++)

	{
		
		printf("arr[%d] : %d \n", idx, arr[idx]); //arr[0]...arr[4]
		sumdata += arr[idx];
	}

	printf("sumdata : %d \n", sumdata);

	for(idx=0; idx<len; idx++)

	{

		printf("정수 데이터 입력 : ");
		scanf_s("%d",&arr[idx]);
	}
	for(idx=0; idx<len; idx++)

	{
		
		printf("arr[%d] : %d \n", idx, arr[idx]); //arr[0]...arr[4]
		
	}

	return 0;
}
// 변수명, 배열명 접근은 직접접근이다.