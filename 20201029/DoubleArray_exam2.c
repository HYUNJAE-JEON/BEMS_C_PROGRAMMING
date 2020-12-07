#include <stdio.h>
int main(void)
{


	int arrdb[3][5] = {
		{3,6,7}, // 첫 번째 행 초기화
		{6,7,8,9}, // 두 번째 행 초기화
		{2,3} // 세 번째 행 초기화
	}; // 2차원 배열 
	int (*pAr)[5] = arrdb; // 길이가 5인 int형 2차원 배열을 가리키는 배열 포인터 선언.

	char Buf[5][30];
	char (*pB)[30] = Buf;



#if(0)
	printf("arrdb : 0x%p \n", arrdb); // 2차원 배열의 배열명(배열의 시작주소)
	printf("&arrdb[0][0] : 0x%p \n", &arrdb[0][0]);
	
	printf("arrdb[0] : %d \n", arrdb[0]); //첫번째 행의 시작주소
	printf("arrdb[0] : %d \n", arrdb[0]+2);

	// 최신 컴파일러는 중간에 변수선언 가능하다. 
	printf("arrdb[1] : %d \n", arrdb[1]); //두번째 행의 시작주소
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
