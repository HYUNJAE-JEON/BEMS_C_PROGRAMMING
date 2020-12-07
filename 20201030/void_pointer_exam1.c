#include <stdio.h>

int main(void)
{
	char data = 'A'
	//int data = 60;
	void* pT = &data; //void형 포인터 : 어떤 변수의 주소값도 저장이 가능한 포인터

	//*pT = 90; //자료형을 void로 바꾸면서 접근 시 문제가 된다.
	// 접근 시 몇 바이트를 접근할지 강제 형변환 해서 접근해야한다.
	*((char*)pT) = 'K';
	//해당 문법을 임베디드에서 되게 많이 쓴다.

	printf("data : %c \n", data);

	return 0;
}