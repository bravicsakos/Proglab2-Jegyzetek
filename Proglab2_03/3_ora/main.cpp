#include <stdio.h>
#include <stdlib.h>

struct book {
	char *title;
	char *author;
};
void print(book b);

void initcap(book b){
	b.title[0] = b.title[0] >= 'a' && b.title[0] <= 'z' ? b.title[0]-'a'+'A' : b.title[0];
	print(b);
}

void print(book b){
	printf("Title: %s, Author: %s",b.title,b.author);
}
int a,b;
int &get(){
	//static int a,b;
	return a>10? b : a;
}

int main(){
	for (int i = 0; i<20;i++){
		get()++;
		printf("%d %d\n",a,b);
	}
	/*char t[100] = "arry Potter";
	char a[100] = "kk Rowling";
	book b = {t,a};
	initcap(b);
	printf("%s",b.title);*/

	return 0;
}



