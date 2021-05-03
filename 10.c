#include <stdio.h>

void input();
int sum(int, int);

int main(){
	// input();
	// printf("두수의 합: %d", a+b);
	// 함수의 지역변수(자동변수) 접근 불가 <원래 자동변수는  auto를 앞에 붙이나 거의다 자동변수라 생략해도 됨>
	
	sum(10, 20); // sum함수 호출
	// 전달 인자 10, 20을 복사한 int a, int b, 함수내 변수 int res를 메모리에 할당
	// 호출한 위치에 리턴값을 복사 후 int a, int b, int res 메모리 할당 헤제 
	
	int a=10, b=20;
	printf("change before: %d %d\n", a, b);
	
	{	// 새로운 블록 
		int temp;	//변수 생성 
		
		temp = a;	// a, b 값을 swap 
		a=b;
		b=temp;
	}	// 블록이 끝나며 변수 temp는 사라짐 
	
	printf("change after: %d %d\n", a, b);
	
	// 블록을 만들고 변수의 이름이 중복되게 사용시 가장 가까운 변수를 사용 
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
	
	// 가장 마지막에 할당된 메모리부터 회수되어 메모리 영역을 스택 영역이라 한다 
	
	
	return 0;	// main 함수내의 모든 변수가 사라짐 
}

void input(){
	int a, b;
	printf("정수를 두개 입력해주세요: ");
	scanf("%d%d", a, b);
}

int sum(int a, int b){
	int res = a+b;
	return res;
}
