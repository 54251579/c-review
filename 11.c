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
	
	printf("���� ���� ȣ��: %d\n", a_call);
	printf("������ ���� ȣ��: %d\n", a_po);
	
	// a_pointer = add_10_return_pointer(a_);
	// printf("������ �������� �Լ�: %d\n", *a_pointer);
	// �Լ��� ���� �� �޸𸮸� ȸ���ϱ� ������ warning�� �߰Ե�
	
	char str[10] = "asdf";
	char *str_plus = strcat(str, "zxcv");	// ���ϰ��� �ּҸ� ���� 
	printf("string: %s\n", str_plus);	// ��� 
	printf("string: %s\n", strcat(str, "2345"));	// ���ϰ��� �ּҷ� �ٷ� ���
		
	return 0;
}

int add_10_call_by_value(int a2){ // ���� �Ѱ��� "���� ���� ȣ��" 
	a2 += 10;
	return a2;
}
void add_10_call_by_reference(int* a_p){ // �����͸� �Ѱ��� "������ ���� ȣ��" 
	*a_p += 10;
}

int *add_10_return_pointer(int a_){
	a_ += 10;
	return &a_;
}
