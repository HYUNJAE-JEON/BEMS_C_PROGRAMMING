#include <stdio.h>
int main(void)  
{

	int val = 0;
	/*while( val < 3 )
	{
		printf("val : %d \n", val);
		val++;
	}
	*/
	for(val=0; val < 3; val++); //탈출조건이 while문과는 달리 명시가 되어있기 때문에 탈출하고 printf 를 한다.
	{
		printf("val : %d \n", val);
	}


	for(val=0; val<3; val++);
		printf("LED ON \n");
	for(val=0; val<3000; val++);
		printf("LED OFF \n");

		//시간 딜레이를 주기 위해서 위와 같은 코드를 작성하기도 한다.


	return 0;
}
