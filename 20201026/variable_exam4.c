#include <stdio.h>
int main(void)  
{
	int kor = 0; //국어 점수
	int eng = 0; //영어 점수
	int math = 0; //수학 점수
	int total = 0; //총점 저장 변수
    double avg = 0.0; // 평균 저장 변수
#if(1) //조건부 컴파일 0 은 거짓이기 때문에 0 안에 있는 건 실행이 안된다. 
	printf("input kor_score: ");
	scanf_s("%d", &kor);
	printf("input eng_score: ");
	scanf_s("%d", &eng);
	printf("input math_score: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = (double)total / 3; // 강제형변환
	//(자료형)변수 : 강제 형변환 . cast 연산자 --> casting
	printf("avg : %.3lf \n", avg);

#else
	total = 67.95;
	printf("total : %d \n", total); //이렇게 total 의 경우에는 int인데 소수점을 줘버리면 강제로
	//형변환이 일어나서 잘라버린다. 
#endif
	//국어 ,영어 , 수학 3과목의 점수를 입력 저장
	
	//3과목의 점수를 모두 더해서 total 변수에 저장
	
	// total 변수를 이용해서 평균을 계산해서 avg 변수에 저장 및 출력

	return 0;

}