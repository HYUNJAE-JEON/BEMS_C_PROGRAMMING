#include <stdio.h>
#define MAX 200 // 매크로 상수 문법 : 전처리기 구문
#define PI * 3.14 //반지름을 구할 때 3.14 대신에 PI 쓰면된다.
int main(void) //main함수로 시작해서 main함수로 끝이 난다. main 함수 앞에는 리턴타입이 온다(자료형) : 리턴값의 자료형을 써줘야한다. 
{
	//서식화된 출력
	/*서식문자
	%c : 문자형태 입출력
	%d : 10진 정수 형태 입출력
	%x : 16진수 형태 입출력
	%lf: double형(실수)
	%f : float형(실수) 형태 입출력
	%p : 메모리 주소 출력 
	%s : 문자열 형태 입출력
	*/
	//'B','C' :문자상수 표현
	// "ABC" : 문자열 상수 표현
	// 30 : 정수 상수 표현
	// 57.6 : 실수 상수 표현
	const int temp = 50; //변수 선언과 동시 초기화 //const를 붙이면 변수의 상수화가 이루어진다. temp는 50으로만 사용된다. 
	//유사문법 #define - 전처리 구문 - 
	printf("temp addr : 0x%p \n", &temp);
	printf("문자열 출력 : %s \n", "programming");
	printf("문자 형태 출력 : 0x%x \n",'A'); // 'A' == 65 == 0x41(h) = 0100 0001(b)
	printf("실수 형태 출력 : %.2lf \n",35.67); //%.2면 2자리, %.4면 4자리
	printf("%d , %lf \n", 50, 58.99);

	printf("res: %d \n", MAX * 5);
	printf("res: %d \n", MAX * 3);

	/*
	정적할당 : 컴파일 타입 때 메모리 확보
	동적할당 : 프로그램 실행 중에 메모리 확보
	RO Data 영역 : Read Only
	Data 영역 (전역변수 : 프로그램 시작 동시에 메모리 올라가서 끝날 때 내려간다. stufit 변수 - 지역변수로 해당 안의 함수에서만 적용된다.
	heap영역 - 동적할당
	stack 영역 - 지역변수, 매개지역변수 last in first out  - 쌓여있는 동전을 꺼낸다.
	*/
	return 0;
}