#include <stdio.h>
#incldue <stdlib.h>

int main(){
	double *dp;
	// �迭�� �뵵�� ����Ѵٸ� calloc�Լ��� �����ִ�
	dp = (double *) calloc(5, sizeof(double));	// (�迭 ��� ����, ���� �ϳ��� ũ��) 
	// malloc(5*sizeof(double))�� ���������� calloc�� �⺻������ 0���� ���ʱ�ȭ���ش�
	
	int ip*;
	ip =(int*) calloc(5, sizeof(int));	// ������ �Ҵ� 
	relloc(ip, 10*sizeof(int));	// ������ Ȯ��
	/*
	*	���ο� ��ġ�� ������ ��ŭ�� �޸� �Ҵ�
	*	���������� �ִ� ������ ���ο� ������ ���� 
	*	���������� �޸� ���� 
	*/ 
	// ���н� �� ��ȯ 
	//	Ȯ�� ����
	//	���Ӱ� �Ҵ��� ũ�� 0 
	free(dp);
	free(ip); 
	
	return 0;
}
