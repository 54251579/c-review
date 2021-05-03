#include <stdio.h>

void exchange_string(char **, char **);
void ary_prn(int (*)[4]);

void chose_func(int (*fp)(int, int));
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void exchange(char*, void*, void*);

int main(){
	int *val_i;	// val��int���� ����Ų�� 
	double *val_d;	// val��double���� ����Ų��
	
	int value = 10;
	int *val = &value;
	
	printf("����: %d\n", **&val);	// ���� �����͸� ���� ���� ���� 
	
	int **ipp;
	ipp = &val; 
	printf("���� ������ ����: %d\n", **ipp);
	
	
	// ���ڿ��� ��ȯ�ϴ� �ڵ�  
	
	char *ap = "success";
	char *bp = "failure";
	char *temp;
	
	temp = ap;
	ap = bp;
	bp = temp;
	
	printf("ap: %s, bp: %s\n", ap, bp);
	
	exchange_string(&ap, &bp);	//	���ڿ��� ��ȯ�ϴ� �Լ� ȣ�� 
	
	printf("ap: %s, bp: %s\n", ap, bp);
	
	// int *ptr_int[]�� �����������̴� ex) *(*ptr_int) 
	
	//	�迭�� ��� 
	/*
	*	ù��° �迭��Ҹ� ����Ű�� ������ ��� �Ҽ��ִ� 
	*	�ι�° ������ ��ü�� ��Ÿ���� ���� ������ ��� 
	*/
	
	
	// �迭 ������ 
	int int_arr[5] = {0};
	// �迭 �����ʹ� �迭 ��ü�� ����Ų��
	
	printf("�Ϲ�: %u\n", int_arr);
	printf("�迭 ������: %u\n", &int_arr);	// �迭 ������
	printf("�Ϲ�: %u\n", int_arr+1);
	printf("�迭 ������: %u\n", &int_arr+1);	// �迭 �������� +1(���� �ּ�)
	// "{0,0,0,0,0}"��  &int_arr�̸� 
	// &int_arr+1 �� �� �迭 ���� �ּ��̴� 
	
	int i, j;
	int ary[3][4];
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			ary[i][j] = i*4+j;
			
	int (*a_p)[4]=ary;
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			printf("%5d", a_p[i][j]);
		printf("\n");
	}
	a_p = ary;
	
	ary_prn(ary);
	
	
	
	// �Լ� ������
	int (*func_pointer)(int, int) = sum;
	// �Լ��� ���¸� ������ ������ �ִ�
	// �̹� ���������� int �̸� (int, int)�� ���¸� ���߾��ٸ� �� ���� 
	printf("�Լ� �����ͷ� ���� ��: %d\n", func_pointer(10, 20));
	
	
	
	int sel;
	printf("1. sum\t|\t2. sub\t|\t3. mul\t|\t4. div: ");
	scanf("%d", &sel);
	switch(sel){
		case 1: chose_func(sum); break;
		case 2: chose_func(sub); break;
		case 3: chose_func(mul); break;
		case 4: chose_func(div); break;
	}
	// �̷��� �ϸ� ���� �������� �Ҷ� chose_func�� �ǵ帮�� �ʾƵ� �� 
	
	// void ������ 
	void *void_pointer; 
	
	int alpha = 10, beta = 20;	
	exchange("int", &alpha, &beta);
	printf("alpha: %d\tbeta: %d\n", alpha, beta); 
	double gamma = 10.0, delta = 20;	
	exchange("double", &gamma, &delta);
	printf("gamma: %.2lf\tdelta: %.2lf\n", gamma, delta);
	return 0;
}

void exchange_string(char **str1, char **str2){	// ���⼭ ���������͸� ����ϰ� �ȴ� 
	char *temp;
	
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void ary_prn(int (*ap)[4]){	// 2���� �迭�� �Է¹޾� ����ϴ� �Լ�  
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%5d", ap[i][j]);
		}
		printf("\n");
	}
}

void chose_func(int (*fp)(int, int)){	// �Լ��� �޾� �����Ͽ� ����ϴ� ���α׷� 
	int a, b, res;
	printf("�� ������ �Է����ּ���: ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("���: %d\n", res);
}

int sum(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}

void exchange(char *type, void *vp1, void *vp2){ // "int" Ȥ�� "double"�� �ΰ��� ���� Ȥ�� �Ǽ��� �Է¹޾� ��ȯ���ִ� �Լ� 
	int itp;
	double dtp;
	
	if(strcmp(type, "int")==0){	// void �����͸� ���� ����ȯ�Ͽ� ���� 
		itp = *(int *)vp1;	// (int *) vp1�� ����ȯ�̸� �Ǿտ� *�� ��ȯ�� vp1�� ����Ű�� �ּ� ���� 
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itp;
	}
	
	if(strcmp(type, "double")==0){
		dtp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtp;
	}
}
