#include <stdio.h>

// ����ü �޸� ������ �����ϴ� �Ϳܿ��� ����ü�� ������ 
union student_u{
	int num;
	double grade;
};

// ������ �������� ���ǵ� �������� ������ ���� 
enum season {spring, summer, fall, winter};

// ������ �������� �տ� ���ǵ� �������� ū���� �����Եȴ� 
enum day {sun=5, mon, tue, wed=10, thu, fri, sat};
//				5	6   	7	 10		11	12	13


// �����Ǹ� ���� ����ü 
struct student{
	int num;
	double grade;
};

// typedef�� Ÿ�� ������ 
typedef struct student Student;

// ����ϸ�
typedef struct{
	char *name;
	double height;
}Profile;

/*
*	typedef struct{
*		��; 
*		��; 
*	}����� �̸�; 
*/

// �ʿ信 ���� �⺻ Ÿ�Ե� ������ �� ���ִ� ex) typedef unsigned int size_t;
// typedef "������ �ϰ���� ��" "������ �ѵ� ����� �̸�";

int main(){
	union student_u s1_u = {315};	// ����� �ʱ�ȭ 
	
	printf("�й�: %d\n", s1_u.num);	// �й� �����Ͽ� ���
	s1_u.grade = 4.4;						// ���� �� ���� 
	printf("����: %.2lf\n", s1_u.grade);	// ���� �����Ͽ� ���
	printf("�й�: %d\n", s1_u.num);		// ���� ���� �����Կ� ���� �����Ͱ� ���� 
	
	enum season ss;
	char *cp;
	
	ss = spring;
	switch(ss){
		case spring: cp = "inline"; break;
		case summer: cp = "swimming"; break;
		case fall: cp = "trip"; break;
		case winter: cp = "skiing"; break;
	}
	printf("���� ���� Ȱ��: %s\n", cp);
	
	Student s1 = {20, 4.5};
	printf("s1 num: %d\ts1 grade: %.2lf\n", s1.num, s1.grade);
	Profile profile1 = {"ȫ�浿", 179.8};
	printf("name: %s\theight: %.2lf\n", profile1.name, profile1.height);
	return 0;
}
