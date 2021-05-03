#include <stdio.h> 
#include <stdlib.h>	// malloc 함수 사용 컴파일러에 따라 다름 
#include <string.h>

void str_print(char **); 

int main(){
	int *ip; 
	double *dp;
	
	ip = (int *)malloc(sizeof(int));	// 메모리 동적 할당 
	dp = (double *)malloc(sizeof(double));	// 메모리 동적 할당 
	
	*ip = 10;
	*dp = 3.4;
	
	printf("%d\n", *ip);
	printf("%.1lf\n", *dp);
	
	free(ip);	// 할당받은 기억공간 반환 
	free(dp);	// 할당받은 기억공간 반환 
	 
	/*
	*	코드영역 (실행파일 
	*	스택영역 (자동변수 
	*	기타 데이터 (외부, 정적변수 
	*	힙 (heap)
	*	을 사용한다 
	*/
	
	//********주의********* 
	// 동적 할당을 할경우 원하는 크기의 메모리가 없으면 0번지의 포인터를 반환하게 된다 
	
	ip = (int *)malloc(sizeof(int));
	
	if(ip == 0) printf("메모리가 부족합니다");
	else{
		*ip = 10 ;
		printf("%d\n", *ip);
	}
	free(ip);
	
	int *int_pointer;
	int i, sum=0;
	
	int_pointer=(int *)malloc(5*sizeof(int));
	if(int_pointer == 0){
		printf("메모리 부족");
		return -1;
	}
	printf("다섯 숫자를 입력해주세요: ");
	for( i=0; i<5; i++){
		scanf("%d", int_pointer+i);
		sum += int_pointer[i];
	}
	printf("평균: %.2lf\n", sum/5.0);
	free(int_pointer);
	fflush(stdin);
	
	char temp[100];	// 문자열을 임시저장할 변수
	char *str[3];	// 동적 할당된 기억공간을 연결할 포인터 배열 
	
	for(i=0; i<3; i++){
		printf("문자열을 입력해주세요: ");
		gets(temp);	// 공백 포함 문자열을 입력
		str[i] = (char *)malloc(strlen(temp)+1);	// 널문자 포함 문자열을 받을정도이 크기 할당
		strcpy(str[i], temp);
	}
	
	for(i=0; i<3; i++) printf("%s\n", str[i]);
	for(i=0; i<3; i++) free(str[i]);
	
	/*
	*	포인터 배열 선언시 
	*		char *str[100] = {0};으로 널값으로 초기화 
	*	저장된 문자열을 출력할때 
	*		for(i=0; str[i]!=0; i++) printf("%s\n", str[i]);
	*/
	
	// 가변배열 출력 
	char *str2[3];
	str2[0] = "hello";
	str2[1] = "123";
	str2[2] = "world";
	str_print(str2);
	
	
	return 0;
}

void str_print(char **string_pointer){	// 매개변수 이중포인터로 배열명 
	while(*string_pointer != 0){	// 널포인터가 아니면 반복 
		printf("%s\n", *string_pointer);	// 시작주소 
		string_pointer++;	//다음 배열요소 
	}
}
