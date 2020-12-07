#include <stdio.h>
void print_ch(char ta, int tb);
int main(void)  
{
	print_ch('k', 5); // k คำ m n o
	return 0;
}

void print_ch(char ta, int tb)
{
	int i = 0;
	for(i=0;i<tb;i++)
	{	
		printf("%c ", ta+i);
	printf("\n");
	}

}