#include <stdio.h>
typedef struct
{
	char DeviceName[30]; //장치명 30
	char controlMethod[30]; //제어방법 30
	double volume; //제어값 8

}DEMMAND;

void Settinginfo(DEMMAND* info);
void Display(DEMMAND* pD);

int main(void)
{
	
	DEMMAND Data[3] = {
		{"LED", "OFF", 15.3}, // Data[0]
		{"MOTOR","right",25.6},
		{"SWITCH","ON", 13.5}
	}; //구조체 배열

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
		printf("기계를 입력해주세요: ");
		scanf_s("%s",info[idx].DeviceName,30);
		while ( (ch=getchar()) != '\n'); //버퍼클리어
		printf("작동을 알려주세요: ");
		scanf_s("%s",info[idx].controlMethod,30);
		while ( (ch=getchar()) != '\n');
		printf("깂을 알려주세요: ");
		scanf_s("%lf",&info[idx].volume);
		while ( (ch=getchar()) != '\n');
	}

}

// int arr[5];
// int* pA = arr;
// pA[0]
void Display(DEMMAND* pD) //구조체 배열을 가리키는 포인터
{
	//이미 내용물이 된 거다.
	int idx =0;
	for(idx=0; idx<3; idx++)
	{
		printf("Name : %s \n", pD[idx].DeviceName);
		printf("Method : %s \n", pD[idx].controlMethod);
		printf("volume : %.3lf \n", pD[idx].volume);
		printf("-------------------------------------\n");
	
	}
}
