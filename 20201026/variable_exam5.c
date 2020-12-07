#include <stdio.h>
void input(int* temp); //함수 원형
int main(void)  
{
	int temp = 3;
	printf("temp : %d \n", temp);

	input(&temp); //호출

	printf("temp : %d \n", temp);

	return 0;

}
void input(int* temp) //정의
{
	*temp = 80;
}