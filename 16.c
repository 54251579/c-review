#include <stdio.h> 
#include <stdlib.h>	// malloc �Լ� ��� �����Ϸ��� ���� �ٸ� 
#include <string.h>

void str_print(char **); 

int main(){
	int *ip; 
	double *dp;
	
	ip = (int *)malloc(sizeof(int));	// �޸� ���� �Ҵ� 
	dp = (double *)malloc(sizeof(double));	// �޸� ���� �Ҵ� 
	
	*ip = 10;
	*dp = 3.4;
	
	printf("%d\n", *ip);
	printf("%.1lf\n", *dp);
	
	free(ip);	// �Ҵ���� ������ ��ȯ 
	free(dp);	// �Ҵ���� ������ ��ȯ 
	 
	/*
	*	�ڵ念�� (�������� 
	*	���ÿ��� (�ڵ����� 
	*	��Ÿ ������ (�ܺ�, �������� 
	*	�� (heap)
	*	�� ����Ѵ� 
	*/
	
	//********����********* 
	// ���� �Ҵ��� �Ұ�� ���ϴ� ũ���� �޸𸮰� ������ 0������ �����͸� ��ȯ�ϰ� �ȴ� 
	
	ip = (int *)malloc(sizeof(int));
	
	if(ip == 0) printf("�޸𸮰� �����մϴ�");
	else{
		*ip = 10 ;
		printf("%d\n", *ip);
	}
	free(ip);
	
	int *int_pointer;
	int i, sum=0;
	
	int_pointer=(int *)malloc(5*sizeof(int));
	if(int_pointer == 0){
		printf("�޸� ����");
		return -1;
	}
	printf("�ټ� ���ڸ� �Է����ּ���: ");
	for( i=0; i<5; i++){
		scanf("%d", int_pointer+i);
		sum += int_pointer[i];
	}
	printf("���: %.2lf\n", sum/5.0);
	free(int_pointer);
	fflush(stdin);
	
	char temp[100];	// ���ڿ��� �ӽ������� ����
	char *str[3];	// ���� �Ҵ�� �������� ������ ������ �迭 
	
	for(i=0; i<3; i++){
		printf("���ڿ��� �Է����ּ���: ");
		gets(temp);	// ���� ���� ���ڿ��� �Է�
		str[i] = (char *)malloc(strlen(temp)+1);	// �ι��� ���� ���ڿ��� ���������� ũ�� �Ҵ�
		strcpy(str[i], temp);
	}
	
	for(i=0; i<3; i++) printf("%s\n", str[i]);
	for(i=0; i<3; i++) free(str[i]);
	
	/*
	*	������ �迭 ����� 
	*		char *str[100] = {0};���� �ΰ����� �ʱ�ȭ 
	*	����� ���ڿ��� ����Ҷ� 
	*		for(i=0; str[i]!=0; i++) printf("%s\n", str[i]);
	*/
	
	// �����迭 ��� 
	char *str2[3];
	str2[0] = "hello";
	str2[1] = "123";
	str2[2] = "world";
	str_print(str2);
	
	
	return 0;
}

void str_print(char **string_pointer){	// �Ű����� ���������ͷ� �迭�� 
	while(*string_pointer != 0){	// �������Ͱ� �ƴϸ� �ݺ� 
		printf("%s\n", *string_pointer);	// �����ּ� 
		string_pointer++;	//���� �迭��� 
	}
}
