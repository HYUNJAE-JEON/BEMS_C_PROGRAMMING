#include <stdio.h>
int main(void)  
{

#if(0) //조건부컴파일
	int val = 0;
	int sumdata = 0;
	for(val=1; val <=100; val++) //초기문은 한 번 동작 하고 안한다. 
	{
		printf("val : %d \n", val);
		if (val%2 ==0)
			sumdata += val;


	}
	printf("sumdata : %d \n", sumdata);

#else
	// while 반복문을 활용해서 0 이상의 값이 입력될 경우 
	// 해당 값을 계속 누적해서 합을 구하고 
	// 만약 음의 값이 입력될 경우 반복문을 탈출하고
	// 음의 값을 제외한 양의 정수의 합만 출력


	int value = 0;
	int sumresult = 0;
	printf("정수 하나를 입력: ");
	scanf_s("%d",&value);
		
	while(value >= 0)
		{
			printf("sumresult : %d \n", sumresult);
			printf("정수 하나를 입력: ",value);
			sumresult += value;
			scanf_s("%d",&value);
			
		}
	printf("sumresult : %d \n", sumresult);


#endif
	return 0;
}