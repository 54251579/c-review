#include <stdio.h>

void test();
void test2(int *); 
int return100();

void exchange(int *, int *);

void input_arr(int *);
void print_arr(int *);

int main(){
	// ������
	 
	// * ���� ������, & �ּ� ������ 
	char ch;
	int in;
	double dou;
	
	*&ch = 'A';
	*&in = 10;
	*&dou = 3.14;
	
	printf("%-5c%-5d%lf\n", ch,in,dou);
	
	// ������ ����
	int *p1, *p2;
	int de=10, abc;
	p1 = &de;
	p2 = &abc;
	*p2 = 20;
	printf("de�� �ּ� %p�� �� �ּҿ� ����ִ� �� %d\n", p1, *p1);
	printf("abc�� �ּ� %p�� �� �ּҿ� ����ִ� �� %d\n", p2, *p2);
	
	int i=0; // mian �Լ��� ���� ���� 
	test(); // ȣ���ص� test�Լ��� ���������� main������ ������ �ȹ��� 
	printf("i�� ����� �� %d\n", i);
	
	test2(&i); // i�� �ּҰ��� �ѱ� 
	printf("i�� ����� �� %d\n", i);
	i = return100();
	printf("i�� ����� �� %d\n", i);
	
	int a1 = 20, a2 = 10;
	printf("a1: %d\ta2: %d\n", a1, a2);
	exchange(&a1, &a2);
	printf("a1: %d\ta2: %d\n", a1, a2);
	
	int arr[] = {0,1,2,3,4};
	int *arr_p = arr;
	
	for(i=0;i<5; i++){
		printf("%d\n", *arr_p+i);
		printf("%d\n", *(arr+i));// �迭�� �̸��� �ּ��̴� 
	}
	// ���� ������ζ�� +1�� �ƴ϶�  �迭�� �ڷ����� ũ��� �������� ���ؼ� ������� ������ �� ������ �����Ͱ� �˾Ƽ� ó���Ͽ� ������ �����ش�  
	
	/*
	* arr[0]==*(arr) 
	* arr[1]==*(arr+1)
	* arr[2]==*(arr+2)
	* arr[3]==*(arr+3)
	* arr[4]==*(arr+4)
	*/
	
	input_arr(arr); // �迭�� �Է� �޴� �Լ� ȣ�� 
	print_arr(arr); // �迭�� ����ϴ� �Լ� 
	
	
	return 0;
}

void test(){
	int i = 0; // test�Լ��� �������� 
	i=100;
}

void test2(int *pointer){
	*pointer=100; // ���� �ּҰ��� 100�� ���� 
}

int return100(){
	return 100; // return 100�� ���� 
}

void exchange(int *p1, int *p2){
	int tmp;
	tmp = *p1; // p1�ּҿ� �ִ� ���� tmp�� ���� 
	*p1 = *p2; // p2�ּҿ� �ִ� ���� p1�ּҿ� ���� 
	*p2 = tmp; // tmp ���� p1�ּҿ� ���� 
}

void input_arr(int *arr){
	int i;
	for(i=0; i<5; i++){
		printf("%d��° arr ��: ", i);
		scanf("%d", (arr+i));
	}
}

void print_arr(int *arr){
	int i;
	for(i=0; i<5; i++) printf("arr%d��: %d\n", i, *(arr+i));
}
