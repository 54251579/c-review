#include <stdio.h>

extern void exchange();	// �ܺ��Լ� 
extern int a, b; // �ܺ� ����(extern variable)
// ���۵ɶ� �޸� �Ҵ� �ʱ�ȭ ���ص� 0���� �ʱ�ȭ 

int main(){
	printf("���� �ΰ��� �Է����ּ���: ");
	scanf_s("%d %d", &a, &b);	// scanf�� ���־� ��Ʃ������� ���� �̽��� depricated

	exchange();
	printf("a: %d\t b: %d",a ,b);
	
	return 0;
}
