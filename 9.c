#include <stdio.h>
#include <string.h>

void strcopy(char *, char *);
 

int main(){
	char *p = "strawberry";
	char str[20], str_1[20];
	
	while(*p != '\0'){
		printf("%s\n", p);
		p++;	// 다음뮨자로 이동 
	}
	
	strcopy(str, "asdcvbghjiop"); // 함수 호출 
	printf("%s\n", str); // 출력 
	
	strcpy(str_1, str);	// string.h에 있는 함수 호출
	// str을 str_1에 복사 
	printf("%s\n", str_1);
	
	int length=strlen(str_1);	// string.h에 있는 함수 호출 문자열의 길이를 계산해주는 함수 
	printf("%d\n", length);		// sizeof()로 구할경우 배열의 크기가 나온다 
	
	printf("%d\n", strcmp("abcde", "abddeasd")); // string.h에 문자열 비교하는 함수를 호출 
	// 순서대로 사전순으로 더 느린 알파벳이 나온 문자열이 더 큰 문자열로 생각합니다
	// 아스키 코드의 값이 작은 쪽이 작은 문자열 큰쪽이 큰 문자열 
	// 같으면 0 좌측이 크면 1 우측이 크면 -1을 리턴 
	
	// 문자열을 붙이는 함수 
	char plus1[20]="abcde", plus2[10]="fghijk";
	printf("%s\n", strcat(plus1, plus2)); // strcat을 호출 plus1에 plus2가 합쳐짐 
	
	// gets(문자열 변수); 공백포함 한 줄이 전체 입력
	// puts(변수); 한 줄 출력 끝나면 줄바꿈을 자동으로 해줌 
	
	// 특정 단어를 입력받아 입력을 끝내는 코드 
	char string[800]={0}; // 모든값을 0으로 초기화(쓰레기 값중 널문자가 있을 경우 strcat네서 널문자 부터 이어 붙임 
	char temp[100];
	
	while(1){
		printf("문자열을 입력하세요: ");
		gets(temp);
		if(strcmp(temp, "끝") == 0) break; // "끝" 이 입력되면 반복문을 종료 
		
		strcat(string, temp);	// 입력받은 내용을 추가
		strcat(string, " ");	// 다음에 입력받을 문자열을 위해 한칸 띄우기
		printf("현재까지 누적된 내용: ");
		puts(string);	// 누적된 내용 출력 
		puts("");	// 줄바꿈 
	}	
	puts("");
	puts(string);
	
	// getchar(); ctrl z 가 입력 되면 -1을 반환한다 
	
	return 0;
}

void strcopy(char *str1, char *str2){
	while(*str2 != '\0'){	// 널문자를 만날때까지 
		*str1 = *str2;	//배열요소에 문자열 상수의  문자를 대입 
		str2++;	// 문자열 상수에서 다음문자 
		str1++;	// 배열요소도 다음으로 
	}
	*str1 = '\0';	// 널문자를따로 추가 
}
