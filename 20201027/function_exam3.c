#include <stdio.h>
void Reverse_Data(int m_t, int m_v);
int main(void)  
{
	int temp = 3;
	int val = 7;
	printf("temp : %d, val : %d \n", temp, val);

	Reverse_Data(temp, val); //�Լ� ȣ��

	printf("temp : %d, val : %d \n", temp, val);

	return 0;
}

//�r�� ���翡 ���� ȣ��: Call_by_value

void Reverse_Data(int m_t, int m_v)
{

	int res = 0;
	res = m_t;
	m_t = m_v;
	m_v = res;


}
// call by value �� void Reverse_Data �ȿ����� ���� ���ƴٴѴ�. �ش� �Լ����Ǹ� ����� m_t, m_v, res�� ���� �������. 
// �׷��� temp�� val �� address�� �����ϴ� ������ ������ ����ؾ��Ѵ�. 