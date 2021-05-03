#include <stdio.h>

int main(){
	// if, else if, else
	unsigned int age;
	scanf("%d", &age);
	if(age < 17) printf("underage");
	else if(age >= 18 && age <= 65) printf("youth / you people");
	else if(age >= 66 && age <= 79) printf("middle-aged");
	else if(age >= 80 && age <= 99) printf("elderly/senior");
	else printf("long-lived elderly");
	printf("\n");
	getchar(); // ���� �ϳ� �Է� ���ۿ� ���� '\n' ���� 
	
	// else�� ����� ��쿡�� dangling else�� ���� �ؾ��Ѵ�
	// else�� ���尡��� if���� ����Ǳ� ������
	/*
	*	if(~) // 1
	*		if(~) // 2
	*	else �� ��쿡 2�� if�� ����Ǳ� ������ 
	*	
	*	if(~){ // 1
	*		if(~) // 2
	*	}elseó�� ��ȣ�� ����ϴ� ����� 
	*	
	*	if(~ && ~) 
	*	else ó�� ���ǹ��� �ϳ��� ����� ����� �ִ� 
	*/ 
	
	
	// switch case
	char test;
	printf("a, b, c �� �ϳ� �Է�: ")
	scanf("%c", &test);
	switch(test){
		case 'a':
		case 'A':
			printf('a');
			break;
		case 'b':
		case 'B':
			printf('b');
			break;
		case 'C':
		case 'c':
			printf('c');
			break;
		default: printf("it's not a or b or c"); break;
	}
	// switch case ������ case�� ����� break�� �������� �̾ ��� �� 
	return 0;
}
