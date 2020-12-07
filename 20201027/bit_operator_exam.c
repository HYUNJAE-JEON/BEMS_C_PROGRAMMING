#include <stdio.h>

int main(void)
{

	int temp = 0x38;
	int val = 0x5C;
	int res = 0;
	int data = -50;
	res = temp & val;
	printf("and res : 0x%x \n",res);
	res = temp | val;
	printf("or res : 0x%x \n",res);
	res = temp ^ val;
	printf("and res : 0x%x \n",res);
	res = temp << 2; //비트 left shift 
	printf("left shift res : 0x%x \n",res);
	res = temp >> 2; //비트 right shift 0이 생략된 값 출력
	printf("right shift res : 0x%x \n",res);

	printf("data : %d \n", data);
	data = ~data + 1; //2의 보수 연산, 양의 값으로 바꾸고 싶을 때 이러한 연산을 하면 된다. 
	printf("data : %d \n", data);

	temp &= 0x7F; // temp = temp & 0x7F - 현재 temp 값에 비트연산&을 해서 다시 temp에 집어넣는 것이다.

	res = temp + 5 / 2 << 3; //한 라인에 연산자가 두개 이상 사용될 때 연산자우선순위 체크
	//연산자 우선순위가 가장 높은 연산 ==> ()괄호 연산 

	return 0;
}