#include <stdio.h>

int total(int*); 
double avg(int total, int size);

int main(){
	int sub[5]= {0,}, i; // int 5�� �迭 ���� = {0,}�� ��� ���� 0���� �ʱ�ȭ
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	printf("�迭�� �� �ִ���\n");
	for(i=0; i<5; i++) sub[i] = i;
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	
	printf("�迭�� �� �Է� �ϱ�\n");
	for(i=0; i<5; i++){
		printf("%d��° ��: ", i);	
		scanf("%d", &sub[i]);
	}
	printf("�迭 �� ���\n");
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	printf("�迭 �� ����: %d\n", total(sub));
	printf("�迭 �� ���: %.3lf\n", avg(total(sub), sizeof(sub)/sizeof(int)));
	
	int array[] = {0,1,2,3,4,5,6,7,8,9}; // ������ �����־� ������ ��� �迭�� ũ�⸦ ������ �ʿ䰡 ���� 
	int array_size = sizeof(array)/sizeof(array[0]); // ������ int���迭�ΰ� �˾� sizeof(int)�� ������ ���� �����ϰ� �迭�� ���Ҹ� ������ ����ϴ� ����� �ֽ��ϴ�
	printf("array�� ������: %d\n", array_size) ;
	
	char str[4]="LOVE"; // second.c�� �����Ѱ� ó�� ���ڿ��� �迭�� ���� ���� 
	
	printf("\n%s\n", str);
	for(i=0; i<4; i++) printf("%c", str[i]);
	printf("\n\n");
	
	printf("���ڿ��� �Է����ּ���: ");
	scanf("%s", str);
	printf("%s\n", str);
	// printf������ '\0'�� ������������ ����Ѵ� 
	// ���ڿ� �� �����ϴ� ��� ����� ���ÿ� �ؾ� �ȴ�
	// �迭�� ������ ��쿡�� �ι��ڸ� �����ؼ� �����Ҽ� �ֵ��� �˳��ϰ� ũ�⸦ �����ؾߵȴ� 
	 
	return 0;
}

double avg(int total, int size){
	return total/size;
}

int total(int* arr){
	int i, temp=0;
	for(i=0; i<5; i++)
		temp += arr[i];
	return temp;
}
