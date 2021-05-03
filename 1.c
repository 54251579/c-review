#include <stdio.h>

int main() {
	// 화면에 문자열 출력하기
	printf("Hello world!\n");

	// 화면에 정수값 출력하기
	printf("%d\n", 10);
	printf("%d %d\n", 10, 20);

	// 화면에 문자열과 정수값을 한 번에 출력하기
	printf("my favorite number is %d\n", 10);
	printf("%d+%d=%d\n", 10,20,30);

	// 화면에 줄 바꾸어 출력하기
	printf("[name]\t[age]\n");
	printf("===============\n");
	printf("David\t16\n");
	// 같은 결과
	printf("\n");
	printf("[name]\t[age]\n===============\nDavid\t16\n");


	/*
	* printf를 통해 화면에 문자열을 출력할 수 있습니다.
	* 정수값을 출력하기 위해서는 %d 반환문자열을 사용합니다.
	* 줄을 바꾸기 위해서는 출력문 안에 서식문자 \n을 사용합니다.
	*/

	// 변수를 선언하는 방법
	/*
	* 첫번째, 어떤 값을 저장 할 것인가? (변수의 형태)
	* 두번째, 그 기억공간의 이름은 무엇으로 할 것 인가? (변수의 이름)
	*/

	// 이에 따라 정수형 변수는 이렇게 선언할 수 있다.
	int num1;
	// 두개의 변수를 한번에 선언하는 방법 아래와 같다.
	// int num2, num3; // num3를 사용하지않아 경고가 뜸
	int num2;
	// int(형태) num(이름)
	// 이때 int 예약어(reserved word)이다
	// 이때 num은 메모리의 기억공간에 이름을 붙여 준 것이다
	
	/*
	* 메모리
	* 주기억장치(main memory)를 뜻한다.
	* 우리가 만든 프로그램을 실행되기 위해서는 실행파일이 주기억장치에 올라가야 하며
	* 프로그램의 데이터를 저장하기 위해 필요한 기억공간이 있다면 모두 이 주기억장치를 사용하게 됩니다
	*/

	// 변수에 값을 저장
	num1 = 10;
	// 변수명 = 저장할 값
	num2 = num1; // 변수 = 변수 는 ok
	// 10 = 20 상수에 상수 대입은 x

	// 변수 선언과 동시에 값 저장
	int hap = num2 + num1;
	printf("\n%d+%d=%d\n", num1,num2,hap);
	
	int weight = 48, height = 168;
	printf("height: %dcm\nweight: %d\nheight-weight=%d\n", height, weight, height-weight);

	// 선언하고 값을 대입하여 초기화하지 않은 경우
	int abc;
	printf("abc: %d\n", abc); // 컴파일러에 따라 다르나 현재 에러

	
	// 입력함수
	int number;
	printf("정수값하나를 입력해주세요: ");
	scanf("%d", &number);
	printf("input number: %d\n", number);
	
	// 여러개의 정수를 한번에 입력받기 
	printf("정수를 2개 입력하세요: ");
	int numA, numB;
	scanf("%d %d", &numA, &numB); 
	printf("%d %d\n", numA, numB);
	// 두개 이상의 입력받을떄 입력받때 사이에 하나이상의 공백이나 Tab혹은 Enter로 굽려해줘야 한다 
	// scanf에서는 printf와 달리 안에 반환 문자열만 들어갈수있다 
	
	
	/*
	* 프로그램의 흐름
	* 
	* 변수 선언 
	* 데이터 입력 
	* 데이터 처리 
	* 결과 출력 
	*/
	
	
	// 주석
	
	// 종류
	
	// 한줄 주석 
	
	
	/* 
	* 여러줄 주석 
	*/ 
	
	// 변수 이름 규칙
	
	/*
	* 첫번째. 알파벳 대문자, 소문자, 숫자, 밑줄(underline) 
	* 두번째. 첫문자에는 숫자가 올수 없다 
	* 세번째. 대문자와 소문자는 서로 다른 식별자이다. 
	*/ 

	// 함수 이름으로 변수를 새오 선언 시 변수로 사용되며 함수로 사용할수 없게된다. 
	// 예약어는 변수로는 사용될수 없다 
		
	return 0;
}
