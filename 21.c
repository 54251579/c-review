// 스트림 파일
// 프로그램과 입출력장치 사이에서 다리 역할

/*	사용이유
* 	입출력작을 수행하기 위해
*	프로그램이 데이터를 처리하는 속도와 입출력장치에서 수행되는 입출력 속도의 차이를 줄이는 역할을 할 수 있기 때문에 
*	스트림 파일은 버퍼를 가지고 있는데 프로그램에서 버퍼에 데이터를 모아 한번에 출력장치로 출력하고 그 시간에 다시 버퍼를 채워 효율적임 
*	입력도 버퍼에 받고 모아서 가져오는 방식 
*/

#include <stdio.h>	// FILE구조체에 대한 형선언이 있음 

int main(){
	{
		int i, a, b, c;	// 파일이 닫혔나 확인할때 사용할 변수 
		
		FILE *fp;
		fp = fopen("text.txt", "w");	// (파일 이름, 모드설정) 
		// 이때 파일이름에 경로를 입력할수 있다 경로는 \이므로 두번 입력하여 표현
		// C:\\src\\text.txt
		
		i = fclose(fp);	// 파일 닫기 
		if(i != 0) printf("파일이 닫히지 않았습니다");
		
		/*	모드
		*	r 	읽기전용 수정불가 
		*	w	쓰기전용 읽기불가 
		*	a	파일의 끝의 내용을 덧붙여 씀 파일이 없으면 새로 생성 
		*	r+	읽기 쓰기 가능 파일이 없으면 에러 
		*	w+	읽기 쓰기 가능 파일이 없으면 새로 생성 
		*	a+	읽기 덧붙여 쓰기 가능 파일이 없으면 에러 
		*
		*	+모드들은 둘다 가능하여 좋으나 버퍼를 별도로 관리해야됨
		*/ 
		
		/*	fopen은 파일포인터를 반환하여 준다
		*	스트림파일의 버퍼에 데이터를 모아 입출력을 하는데 데이터만 저장하면 문제가 생겨 위치를 알려줄 위치 지시자와 시작주소를 알려줄 포인터와 버퍼가 다찼지는지 확인하기 위해 크기도 필요하다
		*	스트림파일은 이 정보를 묶어 구조체 변수에 저장을 하며 저장한 구조체 변수의 포인터가 파일포인터이다 
		*/
		
		FILE *ifp, *ofp;	// FILE구조체 포안터 변수 선언 
		ifp = fopen("a.txt", "r");	// a.txt.를 읽기 전용으로 개방
		if(ifp==NULL){	// 파일이 없으면 
			printf("입력 파일이 개방되지 않았습니다\n");
			return 1;	// 종료 
		}
		printf("입력 파일이 개방되었습니다\n");
		
		ofp = fopen("b.txt", "w");	// b.txt.를 쓰기 전용으로 개방
		if(ofp==NULL){	// 파일이 없으면 
			printf("출력 파일이 개방되지 않았습니다\n");
			return 1;	// 종료 
		}
		printf("출력 파일이 개방되었습니다\n");
		
		a = fclose(ifp);
		b = fclose(ofp);
		if(a != 0 || b != 0) printf("파일이 닫히지 않았습니다");
		
		// r은 없으면 NULL반환 
		// w는 없으면 새로 생성 있으면 내용을 모두삭제한후 개방 
		// 안전하게 하려면 읽기전용으로 파일을 확인한 뒤 다시 쓰기로 개방하는것이 좋음
		
		ifp = fopen("c.txt", "r");
		if(ifp == NULL) ofp = fopen("c.txt", "w");
		c = fclose(ifp);
		if(c != 0) printf("파일이 닫히지 않았습니다");
	}
	{
		FILE *ifp;
		char ch;
		int i; 
		
		ifp = fopen("get.txt", "r");	// get.txt를 읽기 전용으로 오픈 
		if(ifp == NULL){	// 실패한 경우 
			printf("파일 개방 실패");
			return 1; 
		}
		
		// fgetc를 호출하면 데이터는 버퍼에 다가져옴 
		ch = fgetc(ifp);	// 첫글자 가져오기 (위치 지시자의 값 1 증가) 
		printf("파일 첫번째 문자: %c\n", ch);
		ch = fgetc(ifp);	// 두번째 글자 가져오기 (위치 지시자의 값 1 증가)
		printf("파일 두번째 문자: %c\n", ch);
		ch = fgetc(ifp);	// 세번째 글자 가져오기 (위치 지시자의 값 1 증가)
		printf("파일 세번째 문자: %c\n", ch);
		ch = fgetc(ifp);	// 네번째 글자 가져오기 (위치 지시자의 값 1 증가)
		printf("파일 네번째 문자: %c\n", ch);
		ch = fgetc(ifp);	// 다섯번째 글자 가져오기 (위치 지시자의 값 1 증가)
		printf("파일 다섯번째 문자: %c\n", ch);
		i = fgetc(ifp);	// 여섯번째 글자 가져오기 (위치 지시자의 값 1 증가)
		printf("파일 여섯번째 문자: %d\n", i);	// 모두 읽으면 -1리턴 
		
		fclose(ifp);
		
		// 한줄 출력
		ifp = fopen("get.txt", "r");	// get.txt를 읽기 전용으로 오픈 
		if(ifp == NULL){	// 실패한 경우 
			printf("파일 개방 실패");
			return 1;
		}
		
		printf("들어있는 문자: ");
		while(1){
			ch = fgetc(ifp);
			if(ch == EOF) break;	// 리턴값이 EOF(-1)이면 종료 
			putchar(ch);	// 한글자씩 출력 
		}
		printf("\n");
		fclose(ifp);		
	}
	{
		FILE *fp;
		char ch;
		
		fp =  fopen("b.txt", "w");
		if(fp==NULL){
			printf("파일 개방 실패\n");
			return 1;
		}
		printf("데이터를 입력하세요\n");
		while(1){
			ch = getchar();	// 입력 
			if(ch==EOF) break;	// ctrl Z(^Z)를 입력 받으면 break 
			fputc(ch, fp);	// 입력 받은걸 파일에 출력 
		}
		/*	동일 
		*	while(ch!=EOF){	// ctrl Z(^Z)를 입력 받으면 종료 
		*		ch = getchar();	// 입력 
		*		fputc(ch, fp);	// 입력 받은걸 파일에 출력 
		*	} 		
		*/
		
		fclose(fp);
	}
	
	/*	getchar는 한글자씩 입력을 받는다 위 코드에서는 한글자씩이 아닌데 어떻게 저게 가능할까 
	*	위의 함수들은 스트림파일의 버퍼를 사용하기 때문이다 
	*	함수가 호출되면 버퍼에 데이터가 없어 키보드에서 입력을 받을것이다
	*	키보드로 입력된 데이터는 엔터키를 입력과 함께 키보드와 연결된 스트림파일의 버퍼로 저장됩니다 
	* 	버퍼에 저장된 데이터는 getchar함수가 차례대로 가져가고 버퍼의 데이터가 비면 키보드에서 다시 입력을 받습니다 
	*	여기선 ctrl Z를 입력할경우 getchar함수는 EOF(-1)을 리턴하고 while문을 벗어나게됩니다. 
	*/
	
	// 여기서 우리가 개방한 파일은 출력용으로 사용할 파일 하나 
	// 다른 함수가 사용하는 스트림 파일은 운영체제가 만들었습니다
	
	// 스트림파일(파일포인터)		이름				연결된 장치 
	// stdin 						표준 입력 스트림	키보드 
	// stdout						표준 출력 스트림 	모니터 
	// stderr						표준 에러 스트림 	모니터 
	{
		FILE *ifp, *ofp;
		char str[80];
		char *res;
		
		ifp = fopen("a.txt", "r");
		if(ifp==NULL){
			printf("입력 파일 개방 실패");
			return 1; 
		}
		
		ofp=fopen("c.txt", "w");
		if(ofp==NULL){
			printf("출력 파일 개방 실패");
			return 1; 
		}
		
		while(1) {
			res = fgets(str, sizeof(str), ifp);
			if(res==NULL) break;	// 파일끝이면 break 
			str[strlen(str)-1]='\0';	// 새줄 문자 제거 
			fputs(str, ofp);	// 문자열 출력 
			fputs(" ", ofp);	// 공백 출력 
		}
		/*	동일 
		*	while(fgets(str, sizeof(str), ifp) != NULL) {
		*		str[strlen(str)-1]='\0';
		*		fputs(str, ofp);
		*		fputs(" ", ofp);
		*	}
		*/
		
		fclose(ifp);
		fclose(ofp);
	}
	
	{
		char str[10];
		// fgets와 fputs 활용
		fgets(str, sizeof(str), stdin); 
		fputs(str, stdout);
	}

	return 0;
} 

 
