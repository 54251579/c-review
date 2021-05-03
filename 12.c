#include <stdio.h> 

void increase();
void st_increase();
int *po_increase();

int main(){
	int i;
	int *sp;
	
	printf("자동 변수 사용\n");
	for(i=0; i<5; i++) increase();
	printf("정적 변수 사용\n");
	for(i=0; i<5; i++) st_increase();
	
	// 정적 변수(static variable)
	/*	메모리 할당과 회수가 함수의 호출 획수의 영향을 받지 않는 변수
	*	
	*	함수의 호출과 무관하여 다른 기억 공간에 시작할때 할당 
	*	
	*/	
	printf("정적 변수의 주소를 리턴받아 사용\n");
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
	static int sum=0; // 정적 변수 선언 
	sum++;
	printf("sum: %d\n", sum);
}

int *po_increase(){
	static int sum=0; // 정적 변수 선언
	sum++;
	return &sum;
}
