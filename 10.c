#include <stdio.h>

void input();
int sum(int, int);

int main(){
	// input();
	// printf("�μ��� ��: %d", a+b);
	// �Լ��� ��������(�ڵ�����) ���� �Ұ� <���� �ڵ�������  auto�� �տ� ���̳� ���Ǵ� �ڵ������� �����ص� ��>
	
	sum(10, 20); // sum�Լ� ȣ��
	// ���� ���� 10, 20�� ������ int a, int b, �Լ��� ���� int res�� �޸𸮿� �Ҵ�
	// ȣ���� ��ġ�� ���ϰ��� ���� �� int a, int b, int res �޸� �Ҵ� ���� 
	
	int a=10, b=20;
	printf("change before: %d %d\n", a, b);
	
	{	// ���ο� ��� 
		int temp;	//���� ���� 
		
		temp = a;	// a, b ���� swap 
		a=b;
		b=temp;
	}	// ����� ������ ���� temp�� ����� 
	
	printf("change after: %d %d\n", a, b);
	
	// ����� ����� ������ �̸��� �ߺ��ǰ� ���� ���� ����� ������ ��� 
	int value = 10; 
	{
		// int value = 20;
		{
			int value = 30;
			{
				value++;
				printf("%d\n", value);
			}
			printf("%d\n", value);
		}
		printf("%d\n", value);
	}
	printf("%d\n", value);
	
	// ���� �������� �Ҵ�� �޸𸮺��� ȸ���Ǿ� �޸� ������ ���� �����̶� �Ѵ� 
	
	
	return 0;	// main �Լ����� ��� ������ ����� 
}

void input(){
	int a, b;
	printf("������ �ΰ� �Է����ּ���: ");
	scanf("%d%d", a, b);
}

int sum(int a, int b){
	int res = a+b;
	return res;
}
