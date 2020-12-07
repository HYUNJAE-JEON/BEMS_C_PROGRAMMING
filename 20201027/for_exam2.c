#include <stdio.h>
int main(void)  
{
#if(0)
	int val = 0;
	int multiplesquare = 0;
	int result = 0;
	printf("출력하고자 하는 구구단의 단수를 입력하세요: ");
	scanf_s("%d", &multiplesquare);

	for(val = 1; val<=9; val++) //for(초기값; 조건값; 실행문) //코드 블럭을 잡을 때는 중괄호를 입력해주어야한다. 랙
	{
		result = multiplesquare * val;
		printf("%d * %d = %d \n",multiplesquare,val,result);
	}

#elif(0)

	int val = 0;
	int multiplesquare = 0;
	int result = 0;
//	printf("출력하고자 하는 구구단의 단수를 입력하세요: ");
//	scanf_s("%d", &multiplesquare);


	for(multiplesquare = 2; multiplesquare <=9; multiplesquare++)
	{
			for(val = 1; val<=9; val++) 
		{
			result = multiplesquare * val;
			printf("%d * %d = %d \n",multiplesquare,val,result);
		}
			printf("--------------------------------\n");
	} 

#elif(0)
	// 반복문의 break. continue
// break: 자기 자신을 감싸고 있는 가장 가까운 반복문 하나를 탈출
//i

	int temp = 0;
	int num = 0;
	while(num < 3)
	{
		while(temp<5)
		{
			printf("temp : %d \n", temp);
			if(temp ==3)
				break;
			temp++;
		}
		temp = 0;
		num++;
	}

#else

	//반복문의 continue : 반복문 수행 중 continue 를 만나면 continue 아래 문장은 
	//수행되지 않고 다시 반복문 위로 올라가서 진행 
	int num = 0;
	int sumdata = 0;
	while( num <10)
	{
		num++;
		if(num%3 == 0) //3의 배수
			continue;
		sumdata += num;

	}
	printf("sumdata : %d \n", sumdata);
#endif


	//출력하고자 하는 구구단의 단수를 입력
	return 0;
}
