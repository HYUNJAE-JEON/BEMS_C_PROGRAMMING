#include <stdio.h>
void InputString(char (*pS)[50]);
void OutputString(char (*pS)[50]);
int main(void)
{

	char Src[3][50];

	InputString(Src); // 3개의 문자열을 입력 처리
	OutputString(Src); // 입력된 문자열을 출력 처리

	return 0;
}
void InputString(char (*pS)[50]) // 길이가 50인 char형 2차원 배열을 가리키는 배열 포인터
{
	int idx = 0;
	for(idx = 0; idx<3; idx++)
	{	
		printf("문자열을 입력해주세요 : ");
		scanf_s("%s", pS[idx], 50);
	}
}
void OutputString(char (*pS)[50])
{
	int idx = 0;
	for(idx = 0; idx<3; idx++)
	{	
		printf("%s \n",pS[idx]);
		
	}

}
