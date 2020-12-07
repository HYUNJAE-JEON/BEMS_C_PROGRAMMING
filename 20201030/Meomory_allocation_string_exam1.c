#include <stdio.h>
#include <stdlib.h> 
char* InsertString(void);
void DisplayString(char* pD);
int main(void)
{
	char* pSt = NULL;
	pSt = InsertString();
	DisplayString(pSt);
	free(pSt);
	return 0;
}
char* InsertString(void)
{

	
	char* pNew;
	char num[100];
	int len = 0;
	printf("문자열을 입력해주세요 : ");
	scanf_s("%s", num, 100); //배열에 문자열이 입력

	
	while(num[len] != '\0')
	{
		len++;
	}

	printf("len : %d \n", len);
 
	pNew = (char*) malloc( sizeof(char) * len + 1); //널문자 포함한 100문자를 저장할 수 있음. //+1을 해야지 null문자까지 확보가 가능한 크기가 된다. //문자열은 문자열 길이만큼 메모리확보해야 한다.
	
	len = 0;
	while(num[len] != '\0')
	{
		pNew[len] = num[len];
		len++;
	}
	pNew[len] = '\0';

	//4단계 : 배열에 입력된 문자열을 동적 메모리로 복사


	return pNew;
	//5단계 동적 메모리 리턴

}

void DisplayString(char* pD) // pD는 pSt를 복사하는 것이다. //pD가 heap 메모리를 가르킨다.
{

	printf("출력 : %s \n", pD);
	printf("출력 : %c \n", *pD); // pD[0]과 일치

}
