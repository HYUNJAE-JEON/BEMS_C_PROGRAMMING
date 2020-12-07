#include <stdio.h>
#include <stdlib.h> 

int main(void)
{

	// 동적할당 : 런타임 / 프로그램 실행 중 메모리를 확보/할당 하는 것.(Hean 메모리)
	// Hean 메모리 공간은 사용자가 메모리 할당 요청해서 사용하고
	// 메모리 해제 요청을 하기 전까지 계속 남아 있음.
	// 메모리 할당 함수 : malloc()
	// 메모리 해제 함수 : free()
	int idx = 0;
	void* malloc(unsigned int _size); //메모리 할당 요청하는 함수
	//unsigned int 는 0부터 양의 정수까지
	typedef unsigned int size_t; // typedef 키워드 : 기존 자료형의 이름을 새로운 자료형 이름으로 부여

	malloc(sizeof(int) * 5); // 20byte 동적 메모리 할당
	// 길이에 따라서 사이즈가 달라진다. 
	// 메모리 확보 성공시 해당 메모리 시작주소를 반환
	int* pNew = (int*) malloc(sizeof(int) * 5); //동적 메모리 주소 가지고 있는 건 pNew

	// 확보 실패 시 Null 포인터 반환
	if (pNew == NULL)

	{
		printf("메모리 확보 실패 시 :\n");
			exit(1); //강제 종료 라이브러리
	}
	//*((int*)pNew) = 20;
	//*((int*)pNew+1) = 80;
		
			//형을 지정해줬기 때문에 위처럼 할 필요 없이 
//	*(pNew + 0) = 20;


	printf("정수 데이터 입력: ");
	scanf_s("%d",&pNew[3]);
	printf("정수 데이터 입력: ");
	scanf_s("%d",&pNew[4]);


	for(idx=0;idx<5; idx++)
	{
		printf("정수 출력 : %d \n", pNew[idx]);
	}

	//동적 메모리 해제 
	free(pNew); //동적 메모리 시작 주소를 전달하면 동적 메모리 자동으로 알아서 해제 //hean메모리에 올라가 있는 상태이다.

	return 0;
}