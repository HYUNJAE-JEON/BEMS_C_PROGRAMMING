#include <stdio.h>
int main(void)
{

	char* pSt = "Programming"; 
	// 문자열 상수를 포인터변수가 포인팅 하는 구조
	printf("pSt : %s \n", pSt);// 문자열 읽기
	printf("pSt[0] : %c \n", pSt[0]);//한문자 읽기
	
	printf("test : %s \n", "testexam");
	
	pSt[0] = 'k'; // 문자열 상수 내용을 수정하는 코드. 문자열 상수는 수정할 수 없다. 

	return 0;

}