#include <stdio.h>
void input(int* temp); //�Լ� ����
int main(void)  
{
	int temp = 3;
	printf("temp : %d \n", temp);

	input(&temp); //ȣ��

	printf("temp : %d \n", temp);

	return 0;

}
void input(int* temp) //����
{
	*temp = 80;
}