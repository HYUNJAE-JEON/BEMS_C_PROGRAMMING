#include <stdio.h>
void InputString(char *pS);
void OutputString(char *pD);
int main(void)
{
	char Src[30];

	//char *pS = Src;

	InputString(Src); //함수 호출 : Src 배열에 임의의 문자열을 입력

	OutputString(Src); //함수 호출 : Src 배열에 입력된 문자열을 출력



	return 0;
}

void InputString(char *pS)
{
	printf("임의의 문자열을 입력하세요: ");
	scanf_s("%s",pS, 30); //마지막에 들어가는 건 범위를 지정해주는 것으로 그거 이상으로는 넣지마라 라고 하ㅡㄴ  것이다.
	gets_s(pS,30); //스페이스를 쳐도 넘어가고 엔터를 쳐야만 입력이 된다. 

}

void OutputString(char *pD)
{
	printf("Src : %s \n", pD);

}