#include <stdio.h>


// ����ü�� �ڷ��� (����� ���� ������ �ڷ��� ) //�Ϲ����� �ڷ����� ���� �ڷ��� ��ǻ�Ͱ� �˰� �ִ� �ڷ��� - int double char ���


//Structure  : ������ --> Struct 
typedef struct person
{
	char name[30]; // 30 //����ü ��� ����
	int age;	   // 4 // �������
	double weight; // 8 // �������
	//struct person* next; // �ڱ����� �����Ͱ� ���� ���� ���� ���� person�� �ٿ��� ����Ѵ�. 

}PER; //����ü �ڷ��� ����


// ���忡�� ����ϴ� ��.


//typedef struct person PER; // struct person �ڷ����� �̸��� ���� PER�� �ο�

// struct person - ����ü �ڷ��� �̸�

void MyStringCpy(char* pDest, char* pSrc);
int main(void)
{
	PER val = {"Park", 50, 68.99 }; //����ü ���� ����
	printf("PER size : %d \n", sizeof(PER)); //42�� �ƴ϶� 48�� ���Դ�. ����ü ����̸�Ʈ - �е�����Ʈ �߰��ؼ� ���� - ���� ���� �� �� �ְ� - �ƹ� �ǹ� ���� ���̴�. 
	
	printf(" name : %s \n", val.name); // �ʱ�ȭ�� ����ü ������ ������ ��� 
	printf(" age : %d \n", val.age);
	printf(" weight : %.3lf \n", val.weight);
		// ������ .�� ����ü ��� �������� ������, .�� ��������� ã�ư��� ���̰� ��ü�����δ� name�̶�� �濡 ������ ã�ƾ��Ѵ�. 



	/* name, age, weight ������ ����, */
	// �迭���� �����ͻ���� �ٲ� �� ����. ����ϱ�

	//  �迭�� ���� ���ڿ��� ������ �� ����. ���� ������ �����ϴ� ���� ���簡 �ǵ��� �ڵ� �����ؾ��Ѵ�.
	MyStringCpy(val.name, "JEON");
	val.age = 26;
	val.weight = 74;

	printf(" name : %s \n", val.name); // �ʱ�ȭ�� ����ü ������ ������ ��� 
	printf(" age : %d \n", val.age);
	printf(" weight : %.3lf \n", val.weight);
		// ������ .�� ����ü ��� �������� ������, .�� ��������� ã�ư��� ���̰� ��ü�����δ� name�̶�� �濡 ������ ã�ƾ��Ѵ�.

	return 0;
}
void MyStringCpy(char* pDest, char* pSrc)
{
	int idx = 0;
	while( pSrc[idx] != '\0')
	{
		pDest[idx] = pSrc[idx];
		idx++;
	}
	pDest[idx] = '\0';
}
