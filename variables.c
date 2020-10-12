#include <stdio.h>

typedef long int LI; //define new type
int a=10; //global variable

void function(){
	int b=50; //local variable
	static int c=100; //static variable

	b++;
	c++;
	printf("%d, %d\n", b,c);	
}

int main(void){
	printf("Global variable: %d\n",a);
	const LLI d=972930293; //constant
	printf("Constant: %ld\n",d);
	function(); //51, 101
	function(); //51, 102
	return 0;
}
