#include <stdio.h>
int main(void)  
{

	int val = 0;
	/*while( val < 3 )
	{
		printf("val : %d \n", val);
		val++;
	}
	*/
	for(val=0; val < 3; val++); //Ż�������� while������ �޸� ��ð� �Ǿ��ֱ� ������ Ż���ϰ� printf �� �Ѵ�.
	{
		printf("val : %d \n", val);
	}


	for(val=0; val<3; val++);
		printf("LED ON \n");
	for(val=0; val<3000; val++);
		printf("LED OFF \n");

		//�ð� �����̸� �ֱ� ���ؼ� ���� ���� �ڵ带 �ۼ��ϱ⵵ �Ѵ�.


	return 0;
}
