#include <stdio.h>

double Function_exam(double dm); //함수원형선언 
int main(void)  
{
	double data = 23.5;
	printf("data : %.1lf \n", data); //23.5
	data = Function_exam(data); //함수 호출 (전달인자)
	printf("data : %.1lf \n", data); //33.5
	return 0;
}

// 전달인자와 매개변수에는 대입이 생략되어있다. //함수 정의
//리턴타입 함수명(매개변수 선언)
// int dm = data;
double Function_exam(double dm)
{
	return dm + 10;
}
