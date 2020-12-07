#include <stdio.h>
void MyStringCpy(char * pS, char * pD);
int main(void)
{

	char Src[50] = "Programming Good";
	char Dest[50];

	MyStringCpy(Src, Dest);

	printf("Dest : %s \n", Dest); //"Programming Good"

	return 0;
}
void MyStringCpy(char * pS, char * pD)
{
	int idx =0;
	while(pS[idx] != '\0')
	{
		
		pD[idx] = pS[idx];
		idx++;
	}
	 pD[idx] = '\0';
}
	
