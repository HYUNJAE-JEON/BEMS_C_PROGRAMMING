#include <stdio.h>
void Displaymenu(char** pS);
int main(void)
{

	char* pSt[3] = {"1.insert","2.Display","3.Exit"};

	

	Displaymenu(pSt);

	return 0;

}

void Displaymenu(char** pS)
{
	int num;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);

	printf("%s \n", pS[num]);

	int idx = 0;
	for (idx=0; idx<3; idx++)
		printf("%s  \n", pS[idx]);
	printf("%c \n", pS[1][2]);

	

}
// 포인터 배열의 전달인자는 이중포인터이다. 
// 배열 int * pd = arr 일 때 값을 가리킬 때 pd[0] == arr[0] 이랑 동일하다.