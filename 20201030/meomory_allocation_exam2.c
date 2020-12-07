#include <stdio.h>
#include <stdlib.h> 
int* InsertData(int* pNum);
int main(void)
{
	int* pSt = NULL; //널포인터
	int cnt = 0;
	int idx = 0;
	pSt = InsertData(&cnt); //입력받기 원한느 크기만큼 정수 데이터 출력 //pSt 가 동적 메모리를 가르킨다. 
	
	for(idx=0; idx<cnt; idx++)
	{
		printf("%d \n", pSt[idx]);
	}
	
	free(pSt);

	return 0;
}
int* InsertData(int* pNum)

{
	int num = 0;
	int* pNew;
	int idx = 0;
	printf("몇개의 정수 데이터 저장을 원합니까? :");
	scanf_s("%d", &num);

	*pNum = num;

    pNew = (int*) malloc( sizeof(int) * num ); //확보된 동적 메모리 시작 주소

	for(idx=0; idx<num; idx++)
	{
		printf("정수 데이터 입력 : ");
		scanf_s("%d", &pNew[idx]);

	}

	return pNew; //c는 오로지 리턴값이 하나다.
}

//pNew 는 지역변수 - stack 변수에 올라가있다.
//main함수 안에서 선언된 것은 지역변수다 그래서 pSt도 지역변수다.