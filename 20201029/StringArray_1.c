#include <stdio.h>
int AlphaCount(char* pB, char ch);
int main(void)
{

	char Buf[] = "Programming Good";
	int res = 0;
	res = AlphaCount(Buf, 'G');

	//char* pB = Buf

	printf("res : %d \n", res);

	return 0 ;
}


int AlphaCount(char* pB, char ch)
{
	
	int idx = 0;
	int count = 0;
	while(pB[idx] != '\0')
	{
		if(pB[idx] == ch)
		{
			idx++;
			count++;
		}
		else
		{
			idx++;
		}
	}

	return count;

}
