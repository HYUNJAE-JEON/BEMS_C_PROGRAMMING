#include <stdio.h>
int main(void)
{


	int arrdb[3][5] = {
		{3,6,7}, // ù ��° �� �ʱ�ȭ
		{6,7,8,9}, // �� ��° �� �ʱ�ȭ
		{2,3} // �� ��° �� �ʱ�ȭ
	}; // 2���� �迭 
	int (*pAr)[5] = arrdb; // ���̰� 5�� int�� 2���� �迭�� ����Ű�� �迭 ������ ����.

	char Buf[5][30];
	char (*pB)[30] = Buf;



#if(0)
	printf("arrdb : 0x%p \n", arrdb); // 2���� �迭�� �迭��(�迭�� �����ּ�)
	printf("&arrdb[0][0] : 0x%p \n", &arrdb[0][0]);
	
	printf("arrdb[0] : %d \n", arrdb[0]); //ù��° ���� �����ּ�
	printf("arrdb[0] : %d \n", arrdb[0]+2);

	// �ֽ� �����Ϸ��� �߰��� �������� �����ϴ�. 
	printf("arrdb[1] : %d \n", arrdb[1]); //�ι�° ���� �����ּ�
	printf("arrdb[2] : %d \n", arrdb[2]);

	printf("arrdb : %d \n", arrdb);
	printf("arrdb+1 : %d \n", arrdb + 1);
	printf("arrdb+2 : %d \n", arrdb + 2);


#endif

	printf("pAr[0][0] : %d \n", pAr[0][0]);
	printf("pAr[1][0] : %d \n", pAr[1][0]);
	printf("pAr[2][0] : %d \n", pAr[2][0]);


	printf("pAr size : %d \n", sizeof(*pAr));
	printf("pAr size : %d \n", sizeof(*pB));




	return 0;
}
// arrdb == &arrdb[0][0] == arrdb[0]
