#include <stdio.h>

int total(int*); 
double avg(int total, int size);

int main(){
	int sub[5]= {0,}, i; // int 5개 배열 생성 = {0,}는 모든 값을 0으로 초기화
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	printf("배열에 값 넣는중\n");
	for(i=0; i<5; i++) sub[i] = i;
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	
	printf("배열에 값 입력 하기\n");
	for(i=0; i<5; i++){
		printf("%d번째 값: ", i);	
		scanf("%d", &sub[i]);
	}
	printf("배열 값 출력\n");
	for(i=0; i<5; i++) printf("%d\n", sub[i]);
	printf("배열 값 총합: %d\n", total(sub));
	printf("배열 값 평균: %.3lf\n", avg(total(sub), sizeof(sub)/sizeof(int)));
	
	int array[] = {0,1,2,3,4,5,6,7,8,9}; // 변수를 직접넣어 선언할 경우 배열의 크기를 적어줄 필요가 없다 
	int array_size = sizeof(array)/sizeof(array[0]); // 위에는 int형배열인걸 알아 sizeof(int)로 했으나 좀더 유연하게 배열의 원소를 가져와 계산하는 방법이 있습니다
	printf("array의 사이즈: %d\n", array_size) ;
	
	char str[4]="LOVE"; // second.c에 설명한거 처럼 문자열로 배열에 대입 가능 
	
	printf("\n%s\n", str);
	for(i=0; i<4; i++) printf("%c", str[i]);
	printf("\n\n");
	
	printf("문자열을 입력해주세요: ");
	scanf("%s", str);
	printf("%s\n", str);
	// printf에서는 '\0'를 만날때ㅆ까지 출력한다 
	// 문자열 을 대입하는 경우 선언과 동시에 해야 된다
	// 배열을 선언할 경우에는 널문자를 포함해서 대입할수 있도록 넉넉하게 크기를 선언해야된다 
	 
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
