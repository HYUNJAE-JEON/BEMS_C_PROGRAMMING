#include <stdio.h>
// 사용자 정의 함수이지만 printf와 scanf에 대해서 함수원형선언이 필요하다. 
// c하고 h 파일이 있으면 호출이 가능ㅎ다.
//void의 의미는 전달함수 없고 매개변수도 없다.
//전달인자없음, 리턴값도 없음.

void Display(void) //정의 //들어오는 값도 없고 나가는 값도 없다.
{
	printf("C Programming \n");
}


int InputData(void) // 들어오는 값은 없는데 나가는 값은 있는 함수
{
	int num = 0;
	printf("정수 하나를 입력하세요: ");
	scanf_s("%d", &num);
	return num;
}

void OutputData(int m_r) //전달인자 있는데 리턴 값 없다.
{
	printf("result : %d \n", m_r + 30);
}