#include <stdio.h>
#include "myfuncexam.h" // 사용자 정의 헤더 파일

int main(void)  
{
	int res = 0;
	Display(); //함수호출
	res = InputData(); // 하나의 정수 데이터를 리턴
	OutputData(res); //전달인자 있음
	return 0;
}

