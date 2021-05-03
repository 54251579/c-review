#include <stdio.h>

// function
int sum(int a, int b){ // 함수의 선언, 정의 
	return a+b;
}
// sum은 함수의 이름으로 자기 마음대로
// (int a, int b)는 매개변수를 선언해준 것 함수를 사용할때 입력해줄 변수
// 맨 앞에 int는 함수의 결과 값을 리턴해줄때 그 결과값의 형태이다 
// 주의! 컴파일러에게 함수라는 것을 알려주기위해 매개변수가 없어도 ()는 남겨줘야한다 

int total(int, int, int); // 함수의 선언 
// 따로 나눈 이유는 c언어는 절차지향이라 위에서 선언하지 않고 main함수 아래에 바로 선언을 하면 메인 함수에서 못사용하기 때문이다

int main(){	
	printf("%d\n", sum(10, 5)/* 함수의 호출 */);
	int total_ = total(10,20,30); /* 함수의 호출 후 변수에 저장 */
	printf("%d\n", total_);
	return 0;
}

int total(int a, int b, int c){ // 함수 정의 
	int total = a+b+c;
	return total;
} 
