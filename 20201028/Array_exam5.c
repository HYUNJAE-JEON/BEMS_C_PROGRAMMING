#include <stdio.h>
int main(void)
{
	// 문자열 끝에는 항상 '\0'(널문자)가 숨어 있음!!
	// ABCD는 4개지만 뒤에 공백을 생각해서 +1을 해주어야함. 문자열상수.
	// 'a' : 문자상수 
	// 'abcd' : 문자열상수 
	// 30 : 정수 상수 

	// 널 문자가 들어가야 문자열 배열이라고 한다. 
	char Src[30] = {'A','B','C','D'}; // "ABCD" 이렇게 해도 된다. 컴파일러가 알아서 인식한다. 
					// 문자는 뒤에 널값이 출력된다. // {'A','B','C','D', '\0'}
	char* pC = Src;
	
	int idx = 0;
	/*for(idx=0; idx<30; idx++)
		printf("Src[%d] : %c \n",idx, Src[idx]);
	*/
	while( Src[idx] != '\0')
	{
		printf("pC[%d] : %c \n",idx,pC[idx]); // %c : 한 문자 출력
		idx ++;
	}
	printf("문자열 출력 : %s \n", Src);
	printf("문자열 출력 : %s \n", pC);

	return 0;
}

// %s : 문자열 출력 : 문자열의 시작주소부터 널문자를 만날때까지 출력해라.

// 출력했을 때 0으로 나타내는 게 없고 null값이기 때문에 빈 것으로 나온다. 