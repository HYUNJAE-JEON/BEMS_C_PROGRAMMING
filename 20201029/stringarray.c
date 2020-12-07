#include <stdio.h>
void AlphaFind(char* pS, char* pD);
int main(void)
{
	char Src[50] = "#S*T9U@#d!Y";
	char Dest[50];

	//char * pS = Src

	AlphaFind(Src, Dest);

	printf("Dest : %s \n", Dest);
	return 0;

}

void AlphaFind(char* pS, char* pD)
{
		int idxd = 0;
		int idx = 0;
		while(pS[idx] != '\0')
		{
			if(((pS[idx] >= 'A') && (pS[idx] <= 'Z')) || ((pS[idx] >= 'a') && (pS[idx] <= 'z')))
			{	
				pD[idxd] = pS[idx];
				idx++;
				idxd++;
			}
			else
			{	
				idx++;
			}
			pD[idxd] = '\0';
		}

		
}
		//Src 배열의 문자열 중 영문자(대,소문자포함)만 추출해서 Dest 배열로 복사