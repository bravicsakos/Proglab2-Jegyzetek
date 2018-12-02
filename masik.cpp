#include<stdio.h>
#include <iostream>

#define TMAX(a, b) a>b? a:b //makró szövegszerű behelyettesítés, a makró előnye, hogy nem tartalmaz típusnevet

inline int tmax(int a, int b){ //kód behelyettesítés függvényhívás helyett

	return a>b? a: b;


}

template <class T, class U> inline T tmax(T a, U b){ //t vagy u típusnak veszi mindet, az összes típusnak meg kell jelenni a paraméterlistában

	return a>b? a: b;


}


inline double tmax(double a, double b){ //kód behelyettesítés függvényhívás helyett

	return a>b? a: b;


}

class A {};

int operator > (A arg1, A arg2){

	return 0;

}


int main(){

	int i =5;
	int j =8;
	int k;

	k=TMAX(i++, j++); //k = i++>j++ ? i++:j++
    //printf("i: %d j: %d k: %d\n", i, j, k);

    std::cout  << "i: " << i<<" j: "<<j<<" k: "<<k <<"\n";

    i =5;
    j =8;
    k=tmax(i++, j++);

   // printf("i: %d j: %d k: %d\n", i, j, k);

    std::cout  << "i: " << i<<" j: "<<j<<" k: "<<k <<"\n";


	double i =5.2;
		double j =8.2;
		double k;

		k=TMAX(i++, j++);

		 std::cout  << "i: " << i<<" j: "<<j<<" k: "<<k <<"\n";

		 i =5.2;
		    j =8.2;
		    k=tmax(i++, j++);

		    std::cout  << "i: " << i<<" j: "<<j<<" k: "<<k <<"\n"; */



	tmax(2, 3);
	tmax(3.4, 5.1); //akárhányszor új típussal kell legyártani, új kód keletkezik belőle az exeben
     tmax("as","bs");
   A a, b;
   tmax(a,b); // kell hozzá az operátor túlterhelés, hogy menjen


}