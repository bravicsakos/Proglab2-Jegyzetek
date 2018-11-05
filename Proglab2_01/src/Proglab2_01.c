/*
 ============================================================================
 Name        : Proglab2_01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int j;

void foo(void){
	int i;
	for (i=1;i<=3;i++){
		printf("%d\n",i*i);
	}
}

int main(void) {
	puts("Hello world"); /* prints !!!Hello World!!! */
	foo();
	return EXIT_SUCCESS;
}
