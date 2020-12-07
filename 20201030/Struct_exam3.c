#include <stdio.h>
typedef struct
{
	char DeviceName[30]; //��ġ�� 30
	char controlMethod[30]; //������ 30
	double volume; //��� 8

}DEMMAND;

void Settinginfo(DEMMAND* info);
void Display(DEMMAND* pD);

int main(void)
{
	
	DEMMAND Data[3] = {
		{"LED", "OFF", 15.3}, // Data[0]
		{"MOTOR","right",25.6},
		{"SWITCH","ON", 13.5}
	}; //����ü �迭

	Settinginfo( Data);
	Display( Data );

	return 0;
}


void Settinginfo(DEMMAND* info)
{
	int idx =0;
	int ch = 0;
	for(idx=0; idx<3; idx++)
	{
		printf("��踦 �Է����ּ���: ");
		scanf_s("%s",info[idx].DeviceName,30);
		while ( (ch=getchar()) != '\n'); //����Ŭ����
		printf("�۵��� �˷��ּ���: ");
		scanf_s("%s",info[idx].controlMethod,30);
		while ( (ch=getchar()) != '\n');
		printf("���� �˷��ּ���: ");
		scanf_s("%lf",&info[idx].volume);
		while ( (ch=getchar()) != '\n');
	}

}

// int arr[5];
// int* pA = arr;
// pA[0]
void Display(DEMMAND* pD) //����ü �迭�� ����Ű�� ������
{
	//�̹� ���빰�� �� �Ŵ�.
	int idx =0;
	for(idx=0; idx<3; idx++)
	{
		printf("Name : %s \n", pD[idx].DeviceName);
		printf("Method : %s \n", pD[idx].controlMethod);
		printf("volume : %.3lf \n", pD[idx].volume);
		printf("-------------------------------------\n");
	
	}
}
