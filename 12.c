#include <stdio.h> 

void increase();
void st_increase();
int *po_increase();

int main(){
	int i;
	int *sp;
	
	printf("�ڵ� ���� ���\n");
	for(i=0; i<5; i++) increase();
	printf("���� ���� ���\n");
	for(i=0; i<5; i++) st_increase();
	
	// ���� ����(static variable)
	/*	�޸� �Ҵ�� ȸ���� �Լ��� ȣ�� ȹ���� ������ ���� �ʴ� ����
	*	
	*	�Լ��� ȣ��� �����Ͽ� �ٸ� ��� ������ �����Ҷ� �Ҵ� 
	*	
	*/	
	printf("���� ������ �ּҸ� ���Ϲ޾� ���\n");
	for(i=0; i<5; i++){
		sp = po_increase();	
		printf("sum: %d\n", *sp);
	}
	
	return 0;
}

void increase(){
	int sum=0;
	sum++;
	printf("sum: %d\n", sum);
}

void st_increase(){
	static int sum=0; // ���� ���� ���� 
	sum++;
	printf("sum: %d\n", sum);
}

int *po_increase(){
	static int sum=0; // ���� ���� ����
	sum++;
	return &sum;
}
