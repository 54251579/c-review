#include <stdio.h>

int main(){
	
	// how to print ", / and type of escape squence
	// \\, \"
	printf("\\\t");
	printf("\"\t\n");
	
	/*
	* \0	null character
	* \a	alert sound
	* \b	backspace
	* \f	form feed
	* \n	new line
	* \r	carrage return
	* \t	hrizontal tab
	* \v	vertical tab
	* \ooo	print octal value
	* \xhh	print hexa value
	*/
	
	printf("octal value : \101\n"); // \ooo
	printf("hexa value : \x41\n");	// \xhh
	
	// how to use format specifiers
	
	printf("%10d\n", 20);	// free up space
	printf("%10.2f\n", 20.123456);	// free up space and print 2 decimal places
	printf("%-10d%d\n", 20, 30); // next to free up space
	
	int age;
	char blood_type;
	
	printf("inpurt age: ");
	scanf("%d", &age);
	
	printf("inpurt boold type: ");
	scanf("%c", &blood_type);
	
	printf("your age is %d and blood type is %c\n", age, blood_type);
	// it doesn't recive input blood type
	
	// because stuation in buffer (age\n) age is input in age then now remain '\n' so '\n' is input in blood_type
	// so that's doesn't recive input blood type
	printf("inpurt age: ");
	scanf("%d", &age);
	fflush(stdin);	// now, we can input blood_type it make empty input buffer
	// if you want to make empty output buffer. you use fflush(stdout);
	
	printf("inpurt boold type: ");
	scanf("%c", &blood_type);
	
	printf("your age is %d and blood type is %c\n", age, blood_type);
	
	
	
	return 0;
}
