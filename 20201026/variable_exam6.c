#include <stdio.h>

int main(void)
{

	char ch = 0;
	int temp = 0;
	double data = 0;

	printf("ch input : ");
	scanf_s("%c", &ch); //wirte
	printf("ch: %c \n", ch); // read

	printf("temp input : ");
	scanf_s("%d", &temp);
	printf("temp : %d \n", temp);

	printf("data input : ");
	scanf_s("%lf", &data);
	printf("data : %.3lf \n", data);

	return 0;
}