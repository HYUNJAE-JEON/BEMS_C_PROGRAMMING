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
void MyStringCpy(char* pDest, char* pSrc);
void SettingData(PER* res);
void Display(PER data);
int main(void)

{

		PER val = {"park", 50, 23.4};

#if(0)
	PER data = val; // ����ü ���� �� ����ü ������ ��� �� ��� �ڵ� ����

	printf("data.name : %s \n", data.name);
	printf("data.age : %d \n", data.age);
	printf("data.weight : %.3lf \n", data.weight);
	
#endif
	SettingData( &val ); // ����ü ��� ���� ������ ������ ����
	Display(val);
	return 0;

}
void Display(PER data)
{
	printf("data.name : %s \n", data.name);
	printf("data.age : %d \n", data.age);
	printf("data.weight : %.3lf \n", data.weight);


}
void SettingData(PER* res)
{
	/*MyStringCpy(res->name, "JEON");
	res->age = 26;
	res->weight = 74.5;
	*/
	printf("�̸��� �Է����ּ���: ");
	scanf_s("%s",res->name,30);
	printf("���̸� �Է����ּ���: ");
	scanf_s("%d",&(res->age));
	printf("�����Ը� �Է����ּ���: ");
	scanf_s("%.3lf",&(res->weight));

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
// .����ü��� �������� ������ ���� ������ �� val.name = 3
// -> ����ü��� �������� ������ �Լ� ���� ����� ��