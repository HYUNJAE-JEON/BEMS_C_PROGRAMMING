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
void MyStringCpy(char* pDest, char* pSrc);
void SettingData(PER* res);
void Display(PER data);
int main(void)

{

		PER val = {"park", 50, 23.4};

#if(0)
	PER data = val; // 구조체 변수 대 구조체 변수는 멤버 대 멤버 자동 복사

	printf("data.name : %s \n", data.name);
	printf("data.age : %d \n", data.age);
	printf("data.weight : %.3lf \n", data.weight);
	
#endif
	SettingData( &val ); // 구조체 멤버 변수 데이터 정보를 수정
	Display(val);
	return 0;

}
void Display(PER data)
{
	printf("data.name : %s \n", data.name);
	printf("data.age : %d \n", data.age);
	printf("data.weight : %.3lf \n", data.weight);


}
void SettingData(PER* res)
{
	/*MyStringCpy(res->name, "JEON");
	res->age = 26;
	res->weight = 74.5;
	*/
	printf("이름을 입력해주세요: ");
	scanf_s("%s",res->name,30);
	printf("나이를 입력해주세요: ");
	scanf_s("%d",&(res->age));
	printf("몸무게를 입력해주세요: ");
	scanf_s("%.3lf",&(res->weight));

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
// .구조체멤버 직접접근 연산자 값을 대입할 때 val.name = 3
// -> 구조체멤버 간접접근 연산자 함수 등을 사용할 때