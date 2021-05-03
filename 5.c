#include <stdio.h>

int main(){
	// 반복문은 조건식에 참 값만 넣어주면 무한 반복한다
	
	// do ~ while();
	printf("do ~ while();\n");
	int i=0;
	do{
		printf("%d\n", i);
		i++;
	}while(i <= 10); // ; *중요* 
	
	i=0;
	do{
		printf("%d\n", i);
		i++;
	}while(i==-1); // 조건문을 마지막에 검사하기 때문에 무조건 한번 실행한다 
	
	// while() 
	printf("\nwhile()\n");
	i=0;
	while(i<=10){ 
		printf("%d\n", i);
		i++;
	}
	
	// for()
	printf("\nfor()\n");
	int j;	// for문 안에서 선언은 컴파일러의 따라 다르다 
	// 초기식은 처음 한번 실행 이후에 조건문은 거치고 실행한뒤 증감식을 지나 조건식으로 돌아가 반복한다 
	for(j=0; j<=10; j++){ // for(초기식(변수 선언 혹은 초기화); 조건식; 증감식)
		printf("%d\n", j);
	}
	
	// continue, break
	printf("\ncontinue, break\n");
	for(j=1; j<=10; j++){
		if(j==8){
			printf("j가 8입니다 break");
			break;	
		}
		else if(j%2==0){
			printf("j가 %d로 짝수입니다 continue\n", j);
			continue;	
		}
		printf("%d\n", j);
	}
	return 0;
} 
