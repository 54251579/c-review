#include <stdio.h>

// 공용체 메모리 영역을 공유하는 것외에는 구조체와 동일함 
union student_u{
	int num;
	double grade;
};

// 열거형 기억공간에 정의될 데이터의 집합을 정의 
enum season {spring, summer, fall, winter};

// 열거형 변수들은 앞에 정의된 정수보다 큰값을 가지게된다 
enum day {sun=5, mon, tue, wed=10, thu, fri, sat};
//				5	6   	7	 10		11	12	13


// 재정의를 위한 구조체 
struct student{
	int num;
	double grade;
};

// typedef로 타입 재정의 
typedef struct student Student;

// 축약하면
typedef struct{
	char *name;
	double height;
}Profile;

/*
*	typedef struct{
*		값; 
*		값; 
*	}사용할 이름; 
*/

// 필요에 따라 기본 타입도 재정의 할 수있다 ex) typedef unsigned int size_t;
// typedef "재정의 하고싶은 형" "재정의 한뒤 사용할 이름";

int main(){
	union student_u s1_u = {315};	// 선언과 초기화 
	
	printf("학번: %d\n", s1_u.num);	// 학번 참조하여 출력
	s1_u.grade = 4.4;						// 학점 값 대입 
	printf("학점: %.2lf\n", s1_u.grade);	// 학점 참조하여 출력
	printf("학번: %d\n", s1_u.num);		// 학점 값을 대입함에 의해 데이터가 변질 
	
	enum season ss;
	char *cp;
	
	ss = spring;
	switch(ss){
		case spring: cp = "inline"; break;
		case summer: cp = "swimming"; break;
		case fall: cp = "trip"; break;
		case winter: cp = "skiing"; break;
	}
	printf("나의 레저 활동: %s\n", cp);
	
	Student s1 = {20, 4.5};
	printf("s1 num: %d\ts1 grade: %.2lf\n", s1.num, s1.grade);
	Profile profile1 = {"홍길동", 179.8};
	printf("name: %s\theight: %.2lf\n", profile1.name, profile1.height);
	return 0;
}
