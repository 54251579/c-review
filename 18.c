#include <stdio.h>
#incldue <stdlib.h>

int main(){
	double *dp;
	// 배열의 용도로 사용한다면 calloc함수를 쓸수있다
	dp = (double *) calloc(5, sizeof(double));	// (배열 요소 개수, 변수 하나의 크기) 
	// malloc(5*sizeof(double))로 쓸수있으나 calloc는 기본적으로 0으로 다초기화해준다
	
	int ip*;
	ip =(int*) calloc(5, sizeof(int));	// 기억공간 할당 
	relloc(ip, 10*sizeof(int));	// 기억공간 확장
	/*
	*	새로운 위치에 지정한 만큼의 메모리 할당
	*	이전영역에 있던 내용을 새로운 영역에 복사 
	*	이전영역의 메모리 헤제 
	*/ 
	// 실패시 널 반환 
	//	확장 실패
	//	새롭게 할당할 크기 0 
	free(dp);
	free(ip); 
	
	return 0;
}
