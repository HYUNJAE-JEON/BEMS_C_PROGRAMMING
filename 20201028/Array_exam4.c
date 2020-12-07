#include <stdio.h>
#define MAXLEN 8
void InputData(int * pa);
void OutputData(int *pa);
int main(void)
{

	int arr[MAXLEN];

	InputData(arr); //arr 배열의 5개의 정수를 입력 저장

	OutputData(arr); //arr 배열의 입력된 5개의 정수 데이터를 출력

	return 0;

}

void InputData(int * pa)
{
	int idx = 0;
	int num = 0;
	for(idx = 0; idx<MAXLEN; idx++)
	{
		printf("정수를 입력해주세요: \n");
		scanf_s("%d",&num);
		pa[idx] = num;
	}
}
void OutputData(int *pa)
{
	int idx = 0;
	for(idx = 0; idx<MAXLEN; idx++)
	{
		printf("arr[%d] : %d \n",idx,pa[idx]);
	}
}
//함수 안에서 포인트변수의 사이즈는 4BYTE 로 계산되니가 함수의 전달인자로 넘겨줘야한다.