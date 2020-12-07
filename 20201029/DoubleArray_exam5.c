#include <stdio.h>
void MyStringCpy(char** pSS, char (*pArr)[30]);
void DisplayString(char (*pArr)[30]);
int main(void)
{

	char* pSt[3] = {"Happy", "World", "Good"};
	//문자열 상수들은 read only기 때문에 걔네들이 주소가 된다. 
	char arrdb[3][30];

	MyStringCpy(pSt, arrdb); // 포인터 배열이 참조하는 모든 문자열을 2차원 배열로 복사

	DisplayString(arrdb); // arrdb 2차원 배열의 문자열을 출력 (포인트배열이 참조하는 내용)

	return 0;
}
void MyStringCpy(char** pSS, char (*pArr)[30])
{
	int idx = 0;
	for(idx =0; idx<3; idx++)
	{
		int idxd = 0;
		while(pSS[idx][idxd] != '\0')
		{
			
			pArr[idx][idxd] = pSS[idx][idxd];
			idxd++;
		}
		pArr[idx][idxd] = '\0'; //마지막에 널문자를 넣어줘야 문자열 배열이 성립된다.
	}

}
void DisplayString(char (*pArr)[30])
{
	int idx = 0;
	for(idx = 0; idx<3; idx++)
	{	
		/*int idxd = 0;
		while(pArr[idx][idxd] != '\0')
		{	
			printf("%c",pArr[idx][idxd]);
			idxd++;
		}*/
		printf("%s \n", pArr[idx]);

		//%s는 null 값이 나올때까지 출력한다.
	}
}