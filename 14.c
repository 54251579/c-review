#include <stdio.h>

int main(){
	// 2 ���� �迭 
	int a[10][10];
	int i,j;
	
	// ���� for�� 
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			a[i][j] = i*10 + j;
			
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			printf("%d\n", a[i][j]);
	
	printf("\n�迭�� �ʱ�ȭ �Ҷ� ������� �ϴ� ���\n");
	int b[][4] = {{1},{2,3},{4,5,6}}; 
	// ä���� ���� �κ��� 0���� ä������ char �迭�� ��� �ι��ڷ� ä������ 
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			printf("%d\n", b[i][j]);
			
	char *ptr[5];
	ptr[2] = "hello world!";
	printf("%s\n", ptr[2]);
	
	int arr1[] = {1,2,3,4}, arr2[] = {11,22,33,44}, arr3[] = {111,222,333,444};
	int *ptr_int[3] = {arr1, arr2, arr3};
	
	for(i = 0; i<3; i++){
		for(j = 0; j<4; j++)
			printf("%5d", ptr_int[i][j]);
		printf("\n");
	}
	// ptr_int [2][2] = *(pt_int[2]+2) = *(*(ptr_int+2)+2)
		
	
	return 0; 
}
