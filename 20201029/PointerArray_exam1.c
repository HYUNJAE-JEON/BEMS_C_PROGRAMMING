#include <stdio.h>
int main(void)
{
	int idx = 1;
	
	/*char* pSt1 = "Programming"; //문자열 상수를 포인터가 포인팅하는 구조
	char* pSt2 = "Study";
	char* pSt3 = "Good" ;
	*/
	char* pArr[3]={"Programming","Study","Good"}; // 포인터 배열

	printf("pArr size : %d \n", sizeof(pArr));
	// pArr[0] : "Programming" -- 프로그래밍의 주소
	// pArr[1] : "Study" -- 스터디의 주소
	// pArr[2] : "Good" -- 굿의 주소

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
// %s : 널값이 나올 때 가지 문자열 출력, 그래서 주소값을 주어야한다. 
// p 한문자만 들여다보고 싶을 때는 pArr[0]이 메모리 주소니까 그 안을 들여다볼 수 있는 *를 붙여줘야한다.
// *pArr[0] 근데 해당 문법이랑 같은건 pArr[0][1] 이다.