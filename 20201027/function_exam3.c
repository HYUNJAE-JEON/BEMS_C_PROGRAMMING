#include <stdio.h>
void Reverse_Data(int m_t, int m_v);
int main(void)  
{
	int temp = 3;
	int val = 7;
	printf("temp : %d, val : %d \n", temp, val);

	Reverse_Data(temp, val); //함수 호출

	printf("temp : %d, val : %d \n", temp, val);

	return 0;
}

//걊의 복사에 의한 호출: Call_by_value

void Reverse_Data(int m_t, int m_v)
{

	int res = 0;
	res = m_t;
	m_t = m_v;
	m_v = res;


}
// call by value 라서 void Reverse_Data 안에서만 값이 돌아다닌다. 해당 함수정의를 벗어나면 m_t, m_v, res는 값이 사라진다. 
// 그래서 temp와 val 의 address를 참조하는 포인터 문법을 사용해야한다. 