#include<stdio.h>

void ASCAIIVALUE() {
	printf("ASCAII VALUE\n");
	for(char as = 'a'; as <= 'z'; as++){
		printf("%c\t%d\n",as,as);
	}
}
 
int main(){
	ASCAIIVALUE();
}