#include <stdio.h>

int main(void)


{
	while(1)
	{
		char ch = 0;
		char temp = 0;
			printf("알파벳 하나 입력: ");
			scanf_s("%c", &ch);
			while( (temp=getchar()) != '\n'); //스트림버퍼 클리어 역할
			if ((ch >= 'A') && (ch <= 'Z'))
			{
				printf("ch : %c \n", ch+32);
			}
			else if ((ch >= 'a') && (ch <= 'z'))
			{
				printf("ch : %c \n", ch-32);
			}
			else
			{
				printf("입력한 문자가 알파벳이 아닙니다! \n");
				break; //반복문 탈출 효과
			}
	}
		return 0;
}