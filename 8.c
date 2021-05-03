#include <stdio.h>

void test();
void test2(int *); 
int return100();

void exchange(int *, int *);

void input_arr(int *);
void print_arr(int *);

int main(){
	// 포인터
	 
	// * 참조 연산자, & 주소 연산자 
	char ch;
	int in;
	double dou;
	
	*&ch = 'A';
	*&in = 10;
	*&dou = 3.14;
	
	printf("%-5c%-5d%lf\n", ch,in,dou);
	
	// 포인터 변수
	int *p1, *p2;
	int de=10, abc;
	p1 = &de;
	p2 = &abc;
	*p2 = 20;
	printf("de의 주소 %p와 그 주소에 들어있는 값 %d\n", p1, *p1);
	printf("abc의 주소 %p와 그 주소에 들어있는 값 %d\n", p2, *p2);
	
	int i=0; // mian 함수의 지역 변수 
	test(); // 호출해도 test함수의 지역변수라 main에서는 영향을 안받음 
	printf("i에 저장된 값 %d\n", i);
	
	test2(&i); // i의 주소값을 넘김 
	printf("i에 저장된 값 %d\n", i);
	i = return100();
	printf("i에 저장된 값 %d\n", i);
	
	int a1 = 20, a2 = 10;
	printf("a1: %d\ta2: %d\n", a1, a2);
	exchange(&a1, &a2);
	printf("a1: %d\ta2: %d\n", a1, a2);
	
	int arr[] = {0,1,2,3,4};
	int *arr_p = arr;
	
	for(i=0;i<5; i++){
		printf("%d\n", *arr_p+i);
		printf("%d\n", *(arr+i));// 배열은 이름이 주소이다 
	}
	// 원래 정석대로라면 +1이 아니라  배열의 자료형의 크기와 정수값을 곱해서 더해줘야 하지만 이 연산을 포인터가 알아서 처리하여 정수만 적어준다  
	
	/*
	* arr[0]==*(arr) 
	* arr[1]==*(arr+1)
	* arr[2]==*(arr+2)
	* arr[3]==*(arr+3)
	* arr[4]==*(arr+4)
	*/
	
	input_arr(arr); // 배열에 입력 받는 함수 호출 
	print_arr(arr); // 배열을 출력하는 함수 
	
	
	return 0;
}

void test(){
	int i = 0; // test함수의 지역변수 
	i=100;
}

void test2(int *pointer){
	*pointer=100; // 들어온 주소값에 100을 대입 
}

int return100(){
	return 100; // return 100을 해줌 
}

void exchange(int *p1, int *p2){
	int tmp;
	tmp = *p1; // p1주소에 있는 값을 tmp에 대입 
	*p1 = *p2; // p2주소에 있는 값을 p1주소에 대입 
	*p2 = tmp; // tmp 값을 p1주소에 대입 
}

void input_arr(int *arr){
	int i;
	for(i=0; i<5; i++){
		printf("%d번째 arr 값: ", i);
		scanf("%d", (arr+i));
	}
}

void print_arr(int *arr){
	int i;
	for(i=0; i<5; i++) printf("arr%d번: %d\n", i, *(arr+i));
}
