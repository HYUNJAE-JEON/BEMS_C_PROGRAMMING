#include <stdio.h>

int main(void)

{	
	int kor = 0; //국어 점수
	int eng = 0; //영어 점수
	int math = 0; //수학 점수
	int total = 0; //총점 저장 변수
    double avg = 0.0; // 평균 저장 변수

	printf("input kor_score: ");
	scanf_s("%d", &kor);
	printf("input eng_score: ");
	scanf_s("%d", &eng);
	printf("input math_score: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = (double)total / 3; // 강제형변환
	//(자료형)변수 : 강제 형변환 . cast 연산자 --> casting
	printf("total : %d \n", total);
	printf("avg : %.3lf \n", avg);
	
	if (avg >= 90)
	{
		printf("학점은 A 입니다. \n");
	}
	else if ((avg >= 80) && (avg < 90))
	{
		printf("학점은 B 입니다. \n");
	}
	else if ((avg >= 70) && (avg < 80))
	{
		printf("학점은 C 입니다. \n");
	}
	else
	{
		printf("좀 더 노력하세요 !! \n");
	}
	// 국어, 영어, 수학 3과목의 점수를 입력 저장
	// 총점과 평균 계산
	
	


	
	
	// 평균이 90점 이상이면 'A' 직접 출력
	// 평균이 80점 이상이고 90점 이하이면 'B' 직접 출력
	// 평균이 70점 이상이고 80점 미만이면 'C' 직접 출력
	// 평균이 70점 이하이면 '좀 더 노력 하세요!!" 출력






	return 0;

}