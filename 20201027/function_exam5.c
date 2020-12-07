#include <stdio.h>
#define PI 3.14 // 매크로 상수
double CircleArea(void);
int main(void)  
{

	double Area = 0.0;

	Area = CircleArea(); //반지름을 입력하고 원의 넓이를 계산해서 리턴

	printf("Area : %.3lf \n", Area);

	return 0;
}

double CircleArea(void)
{
	double result = 0;
	double radius = 0;
	printf("반지름을 입력해주세요: ");
	scanf_s("%lf",&radius);
	result = PI * radius * radius;
	return result;

}
