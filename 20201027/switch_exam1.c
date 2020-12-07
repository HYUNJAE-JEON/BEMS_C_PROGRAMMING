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
			switch(selmenu)
			{
			case 1: //switch case는 반복문 조건문 if 다 들어갈 수 있다.
				printf("1번 메뉴를 선택 !! \n");
				break; //switchcase 구문 탈출
			case 2: //case 뒤에는 범위가 오는 게 아니라 정수 상수 등이 와야한다.
				printf("2번 메뉴를 선택 !! \n");
				break;
			case 3:
				printf("3번 메뉴를 선택 !! \n");
				break;
			case 4:
				printf("4번 메뉴를 선택 !! \n");
				break;// switch-case 구문 탈출 역할
			default:// if_else 구문의 else 역할
				printf("1~4번 메뉴만 선택해주세요! \n");
			}
			if (selmenu ==4)
				break; //반복문 하나 탈출 역할
	}
	printf("프로그램 종료!! \n");
return 0;
}