#include <stdio.h>

int main(void)
{

	int temp = 0x38;
	int val = 0x5C;
	int res = 0;
	int data = -50;
	res = temp & val;
	printf("and res : 0x%x \n",res);
	res = temp | val;
	printf("or res : 0x%x \n",res);
	res = temp ^ val;
	printf("and res : 0x%x \n",res);
	res = temp << 2; //��Ʈ left shift 
	printf("left shift res : 0x%x \n",res);
	res = temp >> 2; //��Ʈ right shift 0�� ������ �� ���
	printf("right shift res : 0x%x \n",res);

	printf("data : %d \n", data);
	data = ~data + 1; //2�� ���� ����, ���� ������ �ٲٰ� ���� �� �̷��� ������ �ϸ� �ȴ�. 
	printf("data : %d \n", data);

	temp &= 0x7F; // temp = temp & 0x7F - ���� temp ���� ��Ʈ����&�� �ؼ� �ٽ� temp�� ����ִ� ���̴�.

	res = temp + 5 / 2 << 3; //�� ���ο� �����ڰ� �ΰ� �̻� ���� �� �����ڿ켱���� üũ
	//������ �켱������ ���� ���� ���� ==> ()��ȣ ���� 

	return 0;
}