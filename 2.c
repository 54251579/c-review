#include <stdio.h>

int main(){
	// data type 자료형
	
	// 정수형 4바이트의 공간을 차지 
	int bonbong, bonus, total; // 순서대로 본봉 보나스 총수입액 
	
	// 실수형 8바이트의 공간을 차지 
	double tax, real_income; // 순서대로 세금, 실수령액 
	
	bonbong = 150;
	bonus = 60;
	
	total = bonbong + bonus;
	tax = total * 0.09; // total이 * 0.09 가 있어 연산시 실수형으로 자동형변환이 된다 
	real_income = total - tax;

	// 실수형  double을 입,출력 할 경우 변환 문자열 lf를 사용합니다 
	printf("실제 수령할 금액 :\t%lf\n\n", real_income);
	
	
	// 변환 서식자, 서식 지정자, 서식문자 종류 
	
	/*
	* %d, %i 부호 있는 10진 정수 int( 범위: -2,147,483,648 ~ 2,147,483,647 )
	* %u 부호 없는 10진 정수 int( 범위: 0 ~ 4,294,967,295 )
	* %o 부호 없는 8진 정수 
	* %x 부호 없는 16진 정수 (16진수 a,b,c,d,e,f를 소문자)
	* %X 부호 없는 16진 정수 (16진수 A,B,C,D,E,F를 소문자)
	*
	*
	* %ld 부호 있는 long ( 범위: -2,147,483,648 ~ 2,147,483,647 )
	* %lu 부호 없는 long ( 범위: 0 ~ 4,294,967,295 )
	* %lld 부호 있는 long long ( 범위: -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 )
	* %llu 부호 없는 long long ( 범위: 	0~18,446,744,073,709,551,615 )
	*
	*
	* %f, %F // 실수 소수점 출력
	* %e // 실수 부동 소수점으로 출력 2.222222e+00(소문자)
	* %E // 실수 부동 소수점으로 출력 2.222222E+00(대문자)
	* %g // %f와 %e 중 짧은걸 사용 
	* %G // %F와 %E 중 짧은걸 사용
	* %a // 실수를 16진수로 표기 (소문자) 
	* %A // 실수를 16진수로 표기 (대문자)
	* %Lf // long double 소수점 출력 
	* %Le // long double 부동 소수정 출력
	* long double은 double 이상의 수를 출력 할수도 있으며 double과 같을수도 있다 
	*
	* %c // 문자 출력 
	* %s // 문자열 출력 
	* %p // 포인터의 주소 출력 
	*/

	
	// 문자, 문자열
	
	char a = 'a'; // 문자는 ''로 한글자만 감쌀수 있으며 
	char string[5] = "abcde"; // 문자열은 여러글자를 ""로 감싸서 사용하며 끝에 널문자가 들어가 끝을 구별한다 널문자는 \0로 표표현한다
	
	printf("%c\n", a); // 문자는 %c를 통해 출력 한다. 
	printf("%s\n", string); // 문자열을 출력할 경우 %s를 통해 출력한다 
	// 문자열을 지정하는 예약어는 없으며 위와 같이 배열로 선언할때 문자욜로 정의 하지않으면 에러가 뜬다
	/*
	* char string[5];
	* string = "abcde";
	* error
	*/
	
	
	// 문자열 입출력시 알아두어야 하는 사항 
	/*
	* 첫번쨰, 입력되는 문자열이 모두 저장될수있도록 공간을 넉넉하게 선언한다. 
	* 두번째,  %s를 사용한다 
	* 세번째, 배열 명 앞에 &를 사용하지 않는다 
	*/
	char s[80];
	printf("문자열을 입력하세요: ");
	scanf("%s", s); // 스트링ㅡㅇ로 입력 받아도 scanf에서 공백문자를 구별 문자로 활용하기 떄문에 문자열이 끊기게 된다. 
	printf("입력된 문자열: %s\n", s);
	 
	// 형변환
	
	// 피연산자의 형태는 동일해야하며 결과도 같은 형태가 된다 
	// 예로 char 연산자 char => int 연산자 int가 되어 연산된다
	// 같은 형태끼리는 형변환이 일어나지 않는다
	
	double result; 
	result = 10 / 4; // 정수 / 정수 = 정수 
	printf("%f\n", result); // 2.000000 출력  
	result = 10 / 4.0; // 정수 / 실수 = 실수 
	printf("%f\n", result); // 2.500000 출력
	// 실수형을 원하면 최소한 하나의 피연산자가 실수형이여야 한다. 
	int result_tmp; 
	result_tmp = 10 / 4.0; // 정수 / 실수 = 실수 
	printf("%d\n", result_tmp); // 2 출력
	
	// 연산자 +,-,*,/,% 순서대로 더하기 빼기 곱하기 나누기(몫) 나머지 연산을 한다  
	
	// 정수 실수 간의 형변환
	// (int) 실수 를 하면 실수형이 정수형이 된다  주의: 실수형의 소수점 아래는 다 잘리게 된다 
	// (double) 정수 를 하면 정수형이 실수형이 된다
	// 이 외의 형변환은 (예약어) 변환시킬 값 을 입력 하면 된다
	
	unsigned int val; // 이와 같이 선언 할 경우 부호를 없애 0~4,294,967,295로 선언 할 수 있다 
	
	//문자 상수는 아스키 코드값의 해당되는 상수로 사용해 연산을 할수있습니다
	// 예시 'A' + 32 = 'a', 'B'+('a'-'A') = 'b', 'C'+' '='c'
	
	// 자료형의 크기를 확인하는 연산자 
	int test;
	printf("test의 크기: %d\n", sizeof test); 
	printf("int형의 크기: %d\n", sizeof(int)); 
	printf("test의 크기: %d\n", sizeof(test)); 
	// 이번엔 int형만 알아봤으나 sizeof연산자로는  응용지료형의 크기도 알수있다. 
	
	return 0;	
}
