#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str_print(char **);


int main(int argc, char **argv){
	// �����Լ� ������ �� ���
	// ���������� �ִ� ��ġ���� Ŀ�ǵ��(cmd â����) 
	// ���������� �̸� �� ��
	// ex) my_first_program.exe first_string second_string
	// �̶� ���� ���� �ΰ����� argc�� 3�� ���� argv[0]�� ���������̸�, argv[1] first_string, argv[2]�� second_string�� ���Եȴ� 
	
	int i;
	// for(i = 0; i<argc; i++)	printf("%s\n", argv[i]);
	char temp[80];	// ���ڿ� �ӽ����� 
	char **str;	// ������ �迭�� ������ ���������� ���� 
	int max;	// �ִ��Է� ���ڿ� ���� ������ ���� 
	
	max = atoi(argv[1]);	// ���ڿ��� ���ڷ� (ascii to integer)
	str = (char **)malloc((max+1)*sizeof(char *));	// ������ �迭 �����Ҵ� 
	if(str == 0) return -1;
	i=0;
	while(1){
		printf("���ڿ��� �Է��ϼ���: ");
		gets(temp);
		if(temp[0] == '\0') break;
		
		str[i] = (char *)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
		i++;
		if(i==max){
			printf("���ڿ��� �Է��� �ִ밪�� ��� ä�����ϴ�.\n");
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
