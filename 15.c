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
	int *val_i;	// val은int형을 가르킨다 
	double *val_d;	// val은double형을 가르킨다
	
	int value = 10;
	int *val = &value;
	
	printf("변수: %d\n", **&val);	// 이중 포인터를 통헤 값에 접근 
	
	int **ipp;
	ipp = &val; 
	printf("이중 포인터 변수: %d\n", **ipp);
	
	
	// 문자열을 교환하는 코드  
	
	char *ap = "success";
	char *bp = "failure";
	char *temp;
	
	temp = ap;
	ap = bp;
	bp = temp;
	
	printf("ap: %s, bp: %s\n", ap, bp);
	
	exchange_string(&ap, &bp);	//	문자열을 교환하는 함수 호출 
	
	printf("ap: %s, bp: %s\n", ap, bp);
	
	// int *ptr_int[]는 이중포인터이다 ex) *(*ptr_int) 
	
	//	배열의 기능 
	/*
	*	첫번째 배열요소를 가르키는 포인터 사용 할수있다 
	*	두번째 기억공간 전체를 나타내는 논리적 변수의 기능 
	*/
	
	
	// 배열 포인터 
	int int_arr[5] = {0};
	// 배열 포인터는 배열 전체를 가르킨다
	
	printf("일반: %u\n", int_arr);
	printf("배열 포인터: %u\n", &int_arr);	// 배열 포인터
	printf("일반: %u\n", int_arr+1);
	printf("배열 포인터: %u\n", &int_arr+1);	// 배열 포인터의 +1(다음 주소)
	// "{0,0,0,0,0}"가  &int_arr이며 
	// &int_arr+1 는 이 배열 다음 주소이다 
	
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
	
	
	
	// 함수 포인터
	int (*func_pointer)(int, int) = sum;
	// 함수의 형태만 같으면 넣을수 있다
	// 이번 변수에서는 int 이름 (int, int)의 형태만 갖추었다면 다 들어간다 
	printf("함수 포인터로 구한 값: %d\n", func_pointer(10, 20));
	
	
	
	int sel;
	printf("1. sum\t|\t2. sub\t|\t3. mul\t|\t4. div: ");
	scanf("%d", &sel);
	switch(sel){
		case 1: chose_func(sum); break;
		case 2: chose_func(sub); break;
		case 3: chose_func(mul); break;
		case 4: chose_func(div); break;
	}
	// 이렇게 하면 추후 유지보수 할때 chose_func을 건드리지 않아도 됨 
	
	// void 포인터 
	void *void_pointer; 
	
	int alpha = 10, beta = 20;	
	exchange("int", &alpha, &beta);
	printf("alpha: %d\tbeta: %d\n", alpha, beta); 
	double gamma = 10.0, delta = 20;	
	exchange("double", &gamma, &delta);
	printf("gamma: %.2lf\tdelta: %.2lf\n", gamma, delta);
	return 0;
}

void exchange_string(char **str1, char **str2){	// 여기서 이중포인터를 사용하게 된다 
	char *temp;
	
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void ary_prn(int (*ap)[4]){	// 2차원 배열을 입력받아 출력하는 함수  
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%5d", ap[i][j]);
		}
		printf("\n");
	}
}

void chose_func(int (*fp)(int, int)){	// 함수를 받아 연산하여 출력하는 프로그램 
	int a, b, res;
	printf("두 정수를 입력해주세요: ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과: %d\n", res);
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

void exchange(char *type, void *vp1, void *vp2){ // "int" 혹은 "double"과 두개의 정수 혹은 실수를 입력받아 교환해주는 함수 
	int itp;
	double dtp;
	
	if(strcmp(type, "int")==0){	// void 포인터를 강제 형변환하여 연산 
		itp = *(int *)vp1;	// (int *) vp1은 형변환이며 맨앞에 *는 변환된 vp1이 가르키는 주소 참조 
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itp;
	}
	
	if(strcmp(type, "double")==0){
		dtp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtp;
	}
}
