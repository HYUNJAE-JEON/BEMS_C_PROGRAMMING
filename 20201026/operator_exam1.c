#include <stdio.h>

int main(void)
{

	int temp = 5;
	int val = 13;
	printf("temp : %d \n", temp);
	// temp++ ==> temp = temp + 1
	 
	printf("temp : %d \n", temp++); //증감연산자 중 증가연산, 후증가이다. 
	// 선연산, 후증가 - 먼저 값을 읽어서 연산을 먼저 하고 내려갈 때 증가시켜라.
	printf("temp : %d \n", temp);
	// 선증가, 후연산 - 증가를 하고 연산을 한다. 

	//temp++ 과 temp+1 은 다르다!
	//temp++ ==> temp = temp + 1   대입이 이루어진다. 
	//temp + 1 = temp + 1
	


	// 컴퓨터에서 0 이외에 모든 숫자는 참!
	printf("%d \n", temp != val);

	if(temp = 0);
	{
		printf("result : %d \n", temp);

	}

	// 거짓인데 이는 temp = 0 이 대입연산이라서 temp에 0 을 대입하면서 0이 들어가고 그래서 거짓이다. 


	// && 하나라도 거짓이면 거짓, || 하나라도 참이면 실행
	if(temp <50 || val >3);
	// if(!(temp <50));
	{
		printf("result : %d \n", temp);

	}

	//자동형변환은 피연산자의 자료형이 다를경우 발생 (낮은 자료형을 높은 자료형으로 승격)
	//대입 연산자 기준으로 자료형이 틀릴 경우 발생

	temp = 5.34;
	//라고 해도 temp는 정수형이기 때문에 0.34를 버리고 5를 가져온다.
	return 0;
}

// 1. 대입 연산자 기준으로 자료형을 일치시켜라
// 2. 일반변수가 왼쪽에 오면 오른쪽에는 데이터가 와야한다.
// 3. 포인터변수가 왼쪽에 오면 오른쪽에는 메모리변수가 와야한다.