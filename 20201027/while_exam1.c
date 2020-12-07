#include <stdio.h>
int main(void)  
{
	// while, for, do-while() : ~동안, 조건이 참인 경우 계속 반복 수행
	// 조건이 거짓인 경우는 반복 탈출 
	int idx = 1; //초기문
	int num = 0;
	int sumdata = 0;
	printf("num value input : ");
	scanf_s("%d",&num);

	while(idx <= num) // 5번 반복 구문 //while에는 조건문만 오는데
	{
		//수행구문
		printf("idx : %d \n", idx);
		// 반복문의 탈출 조건을 명시해주어야 한다. 
		sumdata += idx;
		idx++; //idx = idx + 1
		
	}

	printf("sumdata : %d \n", sumdata); //1부터 입력한 num변수 사이의 모든 정수의 합을 계산

	return 0;
}
