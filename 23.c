#include <stdio.h>
// #include "��������̸�.h"	// ���� ���Ͽ� �ִ� ��� ���� 

#define PI 3.141592	// ��ũ�� ���
#define string "String"	// ���ڿ��� ��ũ�θ����� ���� 
#define print printf("\nprint\n"); // ��¹��� ��ũ�θ����� ���� 
#define SUM(x, y) x+y

#define test	// test��ũ�� ����

#ifdef test					// ���� ���ִٸ� 
#include <conio.h>			// �̰Ͱ� 
#define MAX_INT 32767		// �̰��� ������ 
#else						// �׷��������� 
#define MAX_INT 2147483647	// �� ���� ������ 
#endif						// ifdef�� ��

int main(){
	
	printf("%lf", PI);	// 3.141592 ��� 
	print
	printf("%s", string);
	print
	printf("%d", SUM(10, 30));
	print
	
	int m = MAX_INT; 
#ifdef test 
	printf("test�� ���� ���ֽ��ϴ�\n");
#endif
	printf("Maximum value: %d\n", m);
#ifdef test
	printf("test�� ���� ���ֽ��ϴ�\n");
#endif
	
	const int a = 10;	// ����� ����, ������ ���� ���ϰ� �� �� ����
	// �����͸� ���ȭ ��ų��� �������� �ּҰ� �ƴ϶� �����Ͱ� ����Ű�� ������ ���� ����
	// ����ϴ� �Լ��� printf�� �Ű� ������ �޾ƿ� ���ڿ��� �ٲܼ� ���� ������� 	
	 
	return 0;
}
