#include <stdio.h>
int main(void)
{

	char* pSt = "Programming"; 
	// ���ڿ� ����� �����ͺ����� ������ �ϴ� ����
	printf("pSt : %s \n", pSt);// ���ڿ� �б�
	printf("pSt[0] : %c \n", pSt[0]);//�ѹ��� �б�
	
	printf("test : %s \n", "testexam");
	
	pSt[0] = 'k'; // ���ڿ� ��� ������ �����ϴ� �ڵ�. ���ڿ� ����� ������ �� ����. 

	return 0;

}