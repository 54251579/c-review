#include <stdio.h> 
#include <string.h> 

int add_10_call_by_value(int);
void add_10_call_by_reference(int*); // call_by_pointer

int *add_10_return_pointer(int);

int main(){
	int a_call = 10, a_po = 10, a_ = 10;
	int *a_pointer;
	
	a_call = add_10_call_by_value(a_call);
	add_10_call_by_reference(&a_po);
	
	printf("값에 의한 호출: %d\n", a_call);
	printf("참조에 의한 호출: %d\n", a_po);
	
	// a_pointer = add_10_return_pointer(a_);
	// printf("리턴이 포인터인 함수: %d\n", *a_pointer);
	// 함수가 리턴 후 메모리를 회수하기 때문에 warning이 뜨게됨
	
	char str[10] = "asdf";
	char *str_plus = strcat(str, "zxcv");	// 리턴값의 주소를 대입 
	printf("string: %s\n", str_plus);	// 출력 
	printf("string: %s\n", strcat(str, "2345"));	// 리턴값의 주소로 바로 출력
		
	return 0;
}

int add_10_call_by_value(int a2){ // 값을 넘겨줌 "값에 의한 호출" 
	a2 += 10;
	return a2;
}
void add_10_call_by_reference(int* a_p){ // 포인터를 넘겨줌 "참조에 의한 호출" 
	*a_p += 10;
}

int *add_10_return_pointer(int a_){
	a_ += 10;
	return &a_;
}
