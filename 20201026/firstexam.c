// : 한 라인 주석 
/*
~~ : 여러 라인 주석 처리 
*/


// #구문은 : 전처리기 구문 - 컴파일은 기계어로 바뀌고 실행된다. 컴파일 전단계에 처리하는 구문 : 전처리기 구문)
// 컴파일은 syntax 오류, 메모리 체크하고 
#include <stdio.h> // stdio.h: 표준입출력 라이브러리 함수 원형에 대한 헤더파일 - 컴파일러야 일단 진행시켜줘 라고 알려주는 역할이다. 
// 내용을 위해 포함시켜라. 파이썬의 import 랑 비슷한 거라고 생각하면 된다. <standard input output header> <비쥬얼 컴파일이 놓인 함수위치>
// 내가 직접 만든 함수는 #include "mystd.h"
// stdio는 표준 입출력 함수 - printf(), scanf(), gets(), puts()
#include <stdlib.h>

int main(void) //main함수로 시작해서 main함수로 끝이 난다. main 함수 앞에는 리턴타입이 온다(자료형) : 리턴값의 자료형을 써줘야한다. 
{
	printf("first C Programming %c \n",65); // '\n' : 개행문자 : 줄바꿈
	printf("Good \n");
	printf("Stu\tdy \n");

	/*
	'\n': 개별문자, 줄바꿈: lf : 0x0A
	'\r': 캐리지리턴 : cr : 0x00 : 커서를 맨 앞으로 이동
	'\t': 탭 크기만큼 건너 뜀.
	*/
	// 표준 출력 장치에 해당 문자열을 출력해라! - 라이브러리 함수 - 이미 만들어진 함수를 쓰는 거다.
	// 어떤 함수든 해당 함수를 호출해서 사용하기 위해서는 해당파일에 함수원형(프로토타입) 은 꼭 존재해야한다.

	return 0; // 음의 정수, 0, 양의 정수 : 정수 -->  interger
	// 리턴 값이 없으면 void를 앞에 써준다. void main(void), main은 프로그램의 시작점 
}