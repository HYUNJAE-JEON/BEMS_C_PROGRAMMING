#include <stdio.h>

int main(void)
{
	char data = 'A'
	//int data = 60;
	void* pT = &data; //void�� ������ : � ������ �ּҰ��� ������ ������ ������

	//*pT = 90; //�ڷ����� void�� �ٲٸ鼭 ���� �� ������ �ȴ�.
	// ���� �� �� ����Ʈ�� �������� ���� ����ȯ �ؼ� �����ؾ��Ѵ�.
	*((char*)pT) = 'K';
	//�ش� ������ �Ӻ���忡�� �ǰ� ���� ����.

	printf("data : %c \n", data);

	return 0;
}