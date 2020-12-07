#include <stdio.h>

int main(void)

{

	int selmenu = 0;
	char temp = 0;
	while(1)
	{
			printf("1.입력 2.출력 3. 삭제 4. 종료 \n");
			printf("메뉴 선택 : ");
			scanf_s("%d",&selmenu);
			while( (temp=getchar()) != '\n');//입력스트림버퍼 클리어
			if(selmenu == 1) // 조건문 : 관계비교연산을 통한 범위 지정이 가능
			{
				printf("1번 메뉴를 선택 !! \n");
			}
			else if(selmenu == 2)
			{
				printf("2번 메뉴를 선택 !! \n");
			}
			else if(selmenu == 3)
			{
				printf("3번 메뉴를 선택 !! \n");
			}
			else if(selmenu == 4)
			{
				printf("4번 메뉴를 선택 !! \n");
				break; //반복문 하나를 탈출
			}
			else
			{
				printf("1~4번 메뉴만 선택해주세요! \n");
			}
	}
	printf("프로그램 종료! \n");
return 0;
}