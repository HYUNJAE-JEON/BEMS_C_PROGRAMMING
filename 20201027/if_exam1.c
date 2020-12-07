#include <stdio.h>

int main(void)


{
	int val = 50;
/* 단독 if 구문 */
	if(val < 60) //if /조건문이 참일경우 코드블럭을 수행, 거짓일 경우 수행하지 않음.
	{
		// 수행구문
		printf("val : %d \n", val); //한 라인일 때는 중괄호 생략할 수 있다. 
		// 수행구문이 한 라인일 때 중괄호 생략 가능

	//if else 구문
		//둘 중의 하나 구문을 수행할 때 사용
	if(val < 60)
	{
		// 조건이 참일 경우 수행할 구문
		printf("if elses True vel : %d \n", val);
	}
	{
		//수행이 거짓일 경우 수행할 구문
		printf("if elses False vel : %d \n", val);
	}
	return 0;
}
