#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str_print(char **);


int main(int argc, char **argv){
	// 메인함수 전달인 자 사용
	// 실행파일이 있는 위치에서 커맨드로(cmd 창에서) 
	// 실행파일의 이름 값 값
	// ex) my_first_program.exe first_string second_string
	// 이때 들어가는 값은 두개지만 argc는 3이 들어가며 argv[0]은 실행파일이름, argv[1] first_string, argv[2]은 second_string이 들어가게된다 
	
	int i;
	// for(i = 0; i<argc; i++)	printf("%s\n", argv[i]);
	char temp[80];	// 문자열 임시저장 
	char **str;	// 포인터 배열을 연결할 이중포인터 변수 
	int max;	// 최대입력 문자열 수를 저장할 변수 
	
	max = atoi(argv[1]);	// 문자열을 숫자로 (ascii to integer)
	str = (char **)malloc((max+1)*sizeof(char *));	// 포인터 배열 동적할당 
	if(str == 0) return -1;
	i=0;
	while(1){
		printf("문자열을 입력하세요: ");
		gets(temp);
		if(temp[0] == '\0') break;
		
		str[i] = (char *)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
		i++;
		if(i==max){
			printf("문자열을 입력이 최대값을 모두 채웠습니다.\n");
			break;
		}
	}
	
	str[i]=0;
	str_print(str);
	free(str);
	
	
	return 0;
}

void str_print(char **string){
	while(*string != 0){
		printf("%s\n", *string);
		string++;
	}
}
