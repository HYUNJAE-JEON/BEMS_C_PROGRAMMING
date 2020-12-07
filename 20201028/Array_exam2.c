#include <stdio.h>

int main(void)
{

	// arr[0] ==> 5값
	// &arr[0] ==> 배열 첫번째 요소의 시작주소
	int arr[5] = {5,6,7,8,9};

	// int * pA = &arr[0];
	 int * pA = arr;
	// arr[0] == pA[0] 으로 해석이 가능하다. 대괄호는 *를 숨겨놓았다 pA[0]은 간접접근, arr[0]은 직접접근이다.
	// 2개가 같은 것이다.

	int idx = 0;

	printf("&arr[0] : 0x%p \n", &arr[0]); //배열의 시작주소
	printf("arr : 0x%p \n", arr); //배열명은 배열의 시작주소다.
	
	printf("&arr[1] : 0x%p \n", &arr[1]);
	printf("&arr[2] : 0x%p \n", &arr[2]);

	for (idx=0; idx<5; idx++)
		printf("pA[%d] : %d \n", idx, pA[idx]); //간접 접근

return 0;
}

//시작주소를 나타내는 것은 arr[0] == arr 즉, 첫번째 요소의 시작주소와 배열명은 동일하다. 
// 포인터 연산을 할 경우 +1 을 하게 되면 자료형 byte 만큼 증가한다.
// 예를 들어 int형의 경우에는 +1을 하면 4 byte만큼 증가한다. 
//*(pA + i) = pA[i] --> 같은 것이다.  i는 index이다. 둘 다 간접접근이다.

