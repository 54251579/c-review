#include <stdio.h>

int main(){
	// fscanf, fprintf
	
	FILE *ifp, *ofp;
	
	char name[20];
	int age;
	double height;
	int res;
	
	ifp = fopen("a.txt", "r");
	if(ifp==NULL){
		printf("���� ����");
		return 1;
	}
	
	ofp = fopen("b.txt", "w");
	if(ofp==NULL){
		printf("���� ����");
		return 1;
	}
	
	while(1){
		res = fscanf(ifp, "%s%d%lf", name, &age, &height);	// ���Ͽ��� ������ 
		if(res==EOF) break;
		fprintf(ofp,"%.1lf %d %s\n", height, age, name);	// ���Ͽ� ��� 
	}
	
	fclose(ifp);
	fclose(ofp);
	
	return 0;
}
