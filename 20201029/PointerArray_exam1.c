#include <stdio.h>
int main(void)
{
	int idx = 1;
	
	/*char* pSt1 = "Programming"; //���ڿ� ����� �����Ͱ� �������ϴ� ����
	char* pSt2 = "Study";
	char* pSt3 = "Good" ;
	*/
	char* pArr[3]={"Programming","Study","Good"}; // ������ �迭

	printf("pArr size : %d \n", sizeof(pArr));
	// pArr[0] : "Programming" -- ���α׷����� �ּ�
	// pArr[1] : "Study" -- ���͵��� �ּ�
	// pArr[2] : "Good" -- ���� �ּ�

	/*printf("%s \n", pArr[0]);
	printf("%s \n", pArr[1]);
	printf("%s \n", pArr[2]);

	printf("%c \n", *pArr[0]);
	printf("%c \n", pArr[1][2]);
	printf("%c \n", pArr[2][3]);
	*/

	for(idx = 0; idx <3; ++idx)
	{
		int idxd = 0;
		while( pArr[idx][idxd] != '\0')
		{
			
			printf("%c", pArr[idx][idxd]);
			idxd++;
		}
		
		printf("\n");
	}



	return 0;
}
// %s : �ΰ��� ���� �� ���� ���ڿ� ���, �׷��� �ּҰ��� �־���Ѵ�. 
// p �ѹ��ڸ� �鿩�ٺ��� ���� ���� pArr[0]�� �޸� �ּҴϱ� �� ���� �鿩�ٺ� �� �ִ� *�� �ٿ�����Ѵ�.
// *pArr[0] �ٵ� �ش� �����̶� ������ pArr[0][1] �̴�.