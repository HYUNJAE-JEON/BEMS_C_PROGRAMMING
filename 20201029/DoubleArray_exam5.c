#include <stdio.h>
void MyStringCpy(char** pSS, char (*pArr)[30]);
void DisplayString(char (*pArr)[30]);
int main(void)
{

	char* pSt[3] = {"Happy", "World", "Good"};
	//���ڿ� ������� read only�� ������ �³׵��� �ּҰ� �ȴ�. 
	char arrdb[3][30];

	MyStringCpy(pSt, arrdb); // ������ �迭�� �����ϴ� ��� ���ڿ��� 2���� �迭�� ����

	DisplayString(arrdb); // arrdb 2���� �迭�� ���ڿ��� ��� (����Ʈ�迭�� �����ϴ� ����)

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
		pArr[idx][idxd] = '\0'; //�������� �ι��ڸ� �־���� ���ڿ� �迭�� �����ȴ�.
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

		//%s�� null ���� ���ö����� ����Ѵ�.
	}
}