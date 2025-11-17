#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	int a=10;
	int *ptr=&a;
	printf("\nGia tri cua a : %d",a);
	printf("\nDia chi cua a : %p",(void*)&a);
	printf("\nGia tri cua a : %d",*ptr);
	printf("\nDia chi cua a : %p",(void*)ptr);
}
