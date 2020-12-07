#include <stdio.h>
void Swap_data(char *ps, char* pd);
int main(void)
{
	char src = 'A';
	char dest = 'K';

	//char* ps = &src
	//char* pd = &dest

		printf("src : %c, dest : %c \n", src, dest);

	Swap_data(&src, &dest);

		printf("src : %c, dest : %c \n", src, dest);
	return 0;

}

void Swap_data(char *ps, char* pd)
{
	char temp = 'B';
	temp = *ps;
	*ps = *pd;
	*pd = temp;

}
