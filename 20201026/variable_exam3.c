#include <stdio.h>
int main(void)  
{
	double data = 0.0;

	//표준 출력(모니터)함수
	printf("data : %.3lf \n", data);
	printf("data input : ");
	//표준 입력(키보드) 함수
	scanf_s("%lf", &data);

	printf("data : %.3lf \n", data);
	return 0;
	//처음에 자료형 선언할 때 double로 선언했으면 서식문자를 lf로 써야하고
	//자료형이 float 이면 서식문자를 f 로 쓴다. 
}