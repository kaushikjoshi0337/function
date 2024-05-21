#include<stdio.h>

void Naturalnumber(){
	int sum = 0;
	for (int n=1; n<=10; n++){
		sum +=n;
	}
	printf("%d",sum);
}

int main(){
	Naturalnumber();
}