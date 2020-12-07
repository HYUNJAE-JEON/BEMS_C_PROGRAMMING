#include <stdio.h>

int main(void)

{

	int rank = 0;
	int sumdata = 0;

	printf("rank ÀÔ·Â : ");
	scanf_s("%d",&rank);

	switch(rank)
	{
	case 1:
		sumdata += 300;
		break;
	case 2:
		sumdata += 200;
	case 3:
		sumdata += 100;
	}
	printf("sumdata : %d \n", sumdata);

return 0;

}