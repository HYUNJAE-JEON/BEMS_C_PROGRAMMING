#include <stdio.h>
#include <stdlib.h> 

int main(void)
{

	// �����Ҵ� : ��Ÿ�� / ���α׷� ���� �� �޸𸮸� Ȯ��/�Ҵ� �ϴ� ��.(Hean �޸�)
	// Hean �޸� ������ ����ڰ� �޸� �Ҵ� ��û�ؼ� ����ϰ�
	// �޸� ���� ��û�� �ϱ� ������ ��� ���� ����.
	// �޸� �Ҵ� �Լ� : malloc()
	// �޸� ���� �Լ� : free()
	int idx = 0;
	void* malloc(unsigned int _size); //�޸� �Ҵ� ��û�ϴ� �Լ�
	//unsigned int �� 0���� ���� ��������
	typedef unsigned int size_t; // typedef Ű���� : ���� �ڷ����� �̸��� ���ο� �ڷ��� �̸����� �ο�

	malloc(sizeof(int) * 5); // 20byte ���� �޸� �Ҵ�
	// ���̿� ���� ����� �޶�����. 
	// �޸� Ȯ�� ������ �ش� �޸� �����ּҸ� ��ȯ
	int* pNew = (int*) malloc(sizeof(int) * 5); //���� �޸� �ּ� ������ �ִ� �� pNew

	// Ȯ�� ���� �� Null ������ ��ȯ
	if (pNew == NULL)

	{
		printf("�޸� Ȯ�� ���� �� :\n");
			exit(1); //���� ���� ���̺귯��
	}
	//*((int*)pNew) = 20;
	//*((int*)pNew+1) = 80;
		
			//���� ��������� ������ ��ó�� �� �ʿ� ���� 
//	*(pNew + 0) = 20;


	printf("���� ������ �Է�: ");
	scanf_s("%d",&pNew[3]);
	printf("���� ������ �Է�: ");
	scanf_s("%d",&pNew[4]);


	for(idx=0;idx<5; idx++)
	{
		printf("���� ��� : %d \n", pNew[idx]);
	}

	//���� �޸� ���� 
	free(pNew); //���� �޸� ���� �ּҸ� �����ϸ� ���� �޸� �ڵ����� �˾Ƽ� ���� //hean�޸𸮿� �ö� �ִ� �����̴�.

	return 0;
}