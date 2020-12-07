#include <stdio.h>


// 구조체는 자료형 (사용자 직접 정의한 자료형 ) //일반적인 자료형은 내장 자료형 컴퓨터가 알고 있는 자료형 - int double char 등등


//Structure  : 구조물 --> Struct 
typedef struct person
{
	char name[30]; // 30 //구조체 멤버 변수
	int age;	   // 4 // 멤버변수
	double weight; // 8 // 멤버변수
	//struct person* next; // 자기참조 포인터가 있을 때는 저기 위해 person을 붙여서 써야한다. 

}PER; //구조체 자료형 선언


// 현장에서 사용하는 것.


//typedef struct person PER; // struct person 자료형의 이름을 새로 PER로 부여

// struct person - 구조체 자료형 이름

void MyStringCpy(char* pDest, char* pSrc);
int main(void)
{
	PER val = {"Park", 50, 68.99 }; //구조체 변수 선언
	printf("PER size : %d \n", sizeof(PER)); //42가 아니라 48이 나왔다. 구조체 얼라이먼트 - 패딩바이트 추가해서 정렬 - 빠른 접근 할 수 있게 - 아무 의미 없는 것이다. 
	
	printf(" name : %s \n", val.name); // 초기화된 구조체 변수의 내용을 출력 
	printf(" age : %d \n", val.age);
	printf(" weight : %.3lf \n", val.weight);
		// 저기의 .을 구조체 멤버 직접접근 연산자, .은 멤버변수를 찾아가는 길이고 구체적으로는 name이라는 방에 물건을 찾아야한다. 



	/* name, age, weight 정보를 수정, */
	// 배열명은 포인터상수로 바꿀 수 없다. 상수니까

	//  배열명에 직접 문자열을 대입할 수 없다. 따라서 내용을 복사하는 깊은 복사가 되도록 코드 구현해야한다.
	MyStringCpy(val.name, "JEON");
	val.age = 26;
	val.weight = 74;

	printf(" name : %s \n", val.name); // 초기화된 구조체 변수의 내용을 출력 
	printf(" age : %d \n", val.age);
	printf(" weight : %.3lf \n", val.weight);
		// 저기의 .을 구조체 멤버 직접접근 연산자, .은 멤버변수를 찾아가는 길이고 구체적으로는 name이라는 방에 물건을 찾아야한다.

	return 0;
}
void MyStringCpy(char* pDest, char* pSrc)
{
	int idx = 0;
	while( pSrc[idx] != '\0')
	{
		pDest[idx] = pSrc[idx];
		idx++;
	}
	pDest[idx] = '\0';
}
