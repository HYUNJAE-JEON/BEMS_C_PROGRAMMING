#include <stdio.h>
int main(void)  
{
	//���� ���� : �����͸� �����ϱ� ���� �޸� ���� Ȯ��
	// �ڷ��� ������:
	// ���� ����� ���� �ʱ�ȭ 
	// ���������� int temp; �ڷ������� ���´�.
	// ��������� tmep = 0;
	// �������� ��Ģ - �ǹ̸� ��� �־���Ѵ�. 
	// �޸� 4GB�� ���� �� �� �����ϰ� �ڷ����� �����ؼ� �ʿ��� ������
	// �޾Ƴ���. int�� �ָ� 4byte ��ŭ�� �ּҸ� �Ҵ�޴´�. 
	// 0x5000 ~ 0x5004������ 4byte�� temp�� �Ҵ��Ѵ�. 
	// ���ٹ�� 1. temp �̸� ���� 2. 0x5000 �� temp ������ �����ּ� (������ �޸� �ּҷ� ����)
	// �̸������� �����ϴ� ���� ��������, �ּҷ� �����ϴ� ���� ��������
	// temp = 30, ���⼭ = �� ���Կ����̴�. 30�� read only, temp�� stack
	// int temp = 0 �� �����ʱ�ȭ ���� ����� ����� ���ÿ� �ϴ� ���̴�.
	// �� �� temp�� �����ּҸ� �˰� �ʹٸ� &temp


	double temp = 34.17; // main�Լ��� �������� ( stack ���� ) - �ش� �Լ� �ȿ����� ���ٰ����ϴ�.
	unsigned int val = 0;
	val = -5;
	printf("val : %u \n", val);

	// 1byte ==> 8 bit ==> 2�� 8�� ==> 256���� ==> 0~255
	// -128 ~ +127
	printf("temp : %.2lf \n", temp); // �빮�ڿ� �ҹ��� ���̴� 32 +-32�� ��ҹ��� ���� ����
	printf("temp addr : 0x%p \n", &temp);
	printf("temp size : %d \n", sizeof(temp)); //sizeof�� ���� temp�� �����ִ� �޸� ũ�⸦ ��������.
	return 0;

	//������ �Ѱܼ� ��������
	// ���� �Ϲݺ��� �� ������ 1�� ���� - 
	// �Ϲݹ迭�� ��Ÿ����. �� �迭�� �Լ�ó���ϴٺ��� ������ ������ ���´�. 

}