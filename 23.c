#include <stdio.h>
// #include "헤더파일이름.h"	// 같은 파일에 있는 헤더 파일 

#define PI 3.141592	// 매크로 상수
#define string "String"	// 문자열을 매크로명으로 정의 
#define print printf("\nprint\n"); // 출력문을 매크로명으로 정의 
#define SUM(x, y) x+y

#define test	// test매크로 정의

#ifdef test					// 정의 되있다면 
#include <conio.h>			// 이것과 
#define MAX_INT 32767		// 이것을 컴파일 
#else						// 그렇지않으면 
#define MAX_INT 2147483647	// 이 문장 컴파일 
#endif						// ifdef의 끝

int main(){
	
	printf("%lf", PI);	// 3.141592 출력 
	print
	printf("%s", string);
	print
	printf("%d", SUM(10, 30));
	print
	
	int m = MAX_INT; 
#ifdef test 
	printf("test가 정의 되있습니다\n");
#endif
	printf("Maximum value: %d\n", m);
#ifdef test
	printf("test가 정의 되있습니다\n");
#endif
	
	const int a = 10;	// 상수로 고정, 변하지 않음 변하게 할 시 에러
	// 포인터를 상수화 시킬경우 포인터의 주소가 아니라 포인터가 가르키는 공간의 값을 고정
	// 사용하는 함수는 printf의 매개 변수로 받아온 문자열을 바꿀수 없게 만들었다 	
	 
	return 0;
}
