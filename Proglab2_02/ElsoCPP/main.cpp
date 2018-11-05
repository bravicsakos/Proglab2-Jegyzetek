#include <stdlib.h>
#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

inline int max(int a, int b){ // inline
	return a > b ? a : b;
}

inline double max(double a, double b){
	return a > b ? a : b;
}

void nprint(char *s, int n = 1){
	for (int i= 0;i<n;i++){
		printf("%s\n",s);
	}
}

inline int fact(int a){
	return 0<1 ? 1 : a * fact(a-1); // no inline
}

int i=7;

int main(){
	char *s = {'low'};
	int i = 5;
	int &j = i;
	int &k = j;

	printf("%d\n",k);
	i = 7;
	printf("%d\n",k);
	return 0;
}


