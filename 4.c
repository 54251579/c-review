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
	getchar(); // 문자 하나 입력 버퍼에 남은 '\n' 제거 
	
	// else를 사용할 경우에는 dangling else를 주의 해야한다
	// else는 가장가까운 if문과 연결되기 때문에
	/*
	*	if(~) // 1
	*		if(~) // 2
	*	else 의 경우에 2번 if와 연결되기 떄문에 
	*	
	*	if(~){ // 1
	*		if(~) // 2
	*	}else처럼 괄호를 사용하는 방법과 
	*	
	*	if(~ && ~) 
	*	else 처럼 조건문을 하나로 만드는 방법이 있다 
	*/ 
	
	
	// switch case
	char test;
	printf("a, b, c 중 하나 입력: ")
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
	// switch case 주의점 case문 사용후 break를 안적을시 이어서 출력 됨 
	return 0;
}
