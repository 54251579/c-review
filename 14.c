#include <stdio.h>

int main(){
	// 2 차원 배열 
	int a[10][10];
	int i,j;
	
	// 이중 for문 
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			a[i][j] = i*10 + j;
			
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			printf("%d\n", a[i][j]);
	
	printf("\n배열을 초기화 할때 비워놓고 하는 경우\n");
	int b[][4] = {{1},{2,3},{4,5,6}}; 
	// 채우지 않은 부분은 0으로 채워지며 char 배열일 경우 널문자로 채워진다 
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
