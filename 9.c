#include <stdio.h>
#include <string.h>

void strcopy(char *, char *);
 

int main(){
	char *p = "strawberry";
	char str[20], str_1[20];
	
	while(*p != '\0'){
		printf("%s\n", p);
		p++;	// �������ڷ� �̵� 
	}
	
	strcopy(str, "asdcvbghjiop"); // �Լ� ȣ�� 
	printf("%s\n", str); // ��� 
	
	strcpy(str_1, str);	// string.h�� �ִ� �Լ� ȣ��
	// str�� str_1�� ���� 
	printf("%s\n", str_1);
	
	int length=strlen(str_1);	// string.h�� �ִ� �Լ� ȣ�� ���ڿ��� ���̸� ������ִ� �Լ� 
	printf("%d\n", length);		// sizeof()�� ���Ұ�� �迭�� ũ�Ⱑ ���´� 
	
	printf("%d\n", strcmp("abcde", "abddeasd")); // string.h�� ���ڿ� ���ϴ� �Լ��� ȣ�� 
	// ������� ���������� �� ���� ���ĺ��� ���� ���ڿ��� �� ū ���ڿ��� �����մϴ�
	// �ƽ�Ű �ڵ��� ���� ���� ���� ���� ���ڿ� ū���� ū ���ڿ� 
	// ������ 0 ������ ũ�� 1 ������ ũ�� -1�� ���� 
	
	// ���ڿ��� ���̴� �Լ� 
	char plus1[20]="abcde", plus2[10]="fghijk";
	printf("%s\n", strcat(plus1, plus2)); // strcat�� ȣ�� plus1�� plus2�� ������ 
	
	// gets(���ڿ� ����); �������� �� ���� ��ü �Է�
	// puts(����); �� �� ��� ������ �ٹٲ��� �ڵ����� ���� 
	
	// Ư�� �ܾ �Է¹޾� �Է��� ������ �ڵ� 
	char string[800]={0}; // ��簪�� 0���� �ʱ�ȭ(������ ���� �ι��ڰ� ���� ��� strcat�׼� �ι��� ���� �̾� ���� 
	char temp[100];
	
	while(1){
		printf("���ڿ��� �Է��ϼ���: ");
		gets(temp);
		if(strcmp(temp, "��") == 0) break; // "��" �� �ԷµǸ� �ݺ����� ���� 
		
		strcat(string, temp);	// �Է¹��� ������ �߰�
		strcat(string, " ");	// ������ �Է¹��� ���ڿ��� ���� ��ĭ ����
		printf("������� ������ ����: ");
		puts(string);	// ������ ���� ��� 
		puts("");	// �ٹٲ� 
	}	
	puts("");
	puts(string);
	
	// getchar(); ctrl z �� �Է� �Ǹ� -1�� ��ȯ�Ѵ� 
	
	return 0;
}

void strcopy(char *str1, char *str2){
	while(*str2 != '\0'){	// �ι��ڸ� ���������� 
		*str1 = *str2;	//�迭��ҿ� ���ڿ� �����  ���ڸ� ���� 
		str2++;	// ���ڿ� ������� �������� 
		str1++;	// �迭��ҵ� �������� 
	}
	*str1 = '\0';	// �ι��ڸ����� �߰� 
}
