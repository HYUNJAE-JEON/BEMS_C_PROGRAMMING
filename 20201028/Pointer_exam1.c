#include <stdio.h>

int main(void)
{
	int temp = 5050; //일반 변수 선언과 동시 초기화
	int* pT = &temp; //포인터 변수 선언과 동시 초기화

	printf("temp : %d \n", temp);
	printf("temp addr : 0x%p \n", &temp);

	printf("&pT : 0x%p \n", &pT); //포인터변수의 시작주소
	// *pT : 포인터변수 메모리 내용을 간접접근해서 읽기

	printf("*pT : %d \n", *pT); //포인터변수가 가리키는 내용을 참조해라! == temp == 50)


	//pT ? == &temp
	// *pT ? == *&(temp) == temp == 50
	// &pT ? == 포인터변수의 시작주소

	//간접접근으로 메모리 내용을 쓰기
	*pT = 80; //간접접근
	//포인터변수의 자료형 역할 : 메모리 참조 시 몇 바이트를 접근할지 결정하는 역할
	printf("temp : %d \n", temp);
	return 0;
}
