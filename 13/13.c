#include <stdio.h>

extern void exchange();	// 외부함수 
extern int a, b; // 외부 변수(extern variable)
// 시작될때 메모리 할당 초기화 안해도 0으로 초기화 

int main(){
	printf("정수 두개를 입력해주세요: ");
	scanf_s("%d %d", &a, &b);	// scanf는 비주얼 스튜디오에서 보안 이슈로 depricated

	exchange();
	printf("a: %d\t b: %d",a ,b);
	
	return 0;
}
