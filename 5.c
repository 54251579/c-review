#include <stdio.h>

int main(){
	// �ݺ����� ���ǽĿ� �� ���� �־��ָ� ���� �ݺ��Ѵ�
	
	// do ~ while();
	printf("do ~ while();\n");
	int i=0;
	do{
		printf("%d\n", i);
		i++;
	}while(i <= 10); // ; *�߿�* 
	
	i=0;
	do{
		printf("%d\n", i);
		i++;
	}while(i==-1); // ���ǹ��� �������� �˻��ϱ� ������ ������ �ѹ� �����Ѵ� 
	
	// while() 
	printf("\nwhile()\n");
	i=0;
	while(i<=10){ 
		printf("%d\n", i);
		i++;
	}
	
	// for()
	printf("\nfor()\n");
	int j;	// for�� �ȿ��� ������ �����Ϸ��� ���� �ٸ��� 
	// �ʱ���� ó�� �ѹ� ���� ���Ŀ� ���ǹ��� ��ġ�� �����ѵ� �������� ���� ���ǽ����� ���ư� �ݺ��Ѵ� 
	for(j=0; j<=10; j++){ // for(�ʱ��(���� ���� Ȥ�� �ʱ�ȭ); ���ǽ�; ������)
		printf("%d\n", j);
	}
	
	// continue, break
	printf("\ncontinue, break\n");
	for(j=1; j<=10; j++){
		if(j==8){
			printf("j�� 8�Դϴ� break");
			break;	
		}
		else if(j%2==0){
			printf("j�� %d�� ¦���Դϴ� continue\n", j);
			continue;	
		}
		printf("%d\n", j);
	}
	return 0;
} 
