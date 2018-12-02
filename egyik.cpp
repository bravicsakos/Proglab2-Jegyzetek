#include <iostream>

template <class T, int N> class Array{
private:
	T data[N];
public:
	Array(T def = 0);
	T operator [] (int  index) const;
	template <int M> Array<T, N> & operator = (Array<T, M> arr);




};


template <class T, int N> Array<T, N>::Array(T def){ //template szerepeljen az osztály nevében, array után a t
	for(int i = 0; i<N; i++) {
		data[i]=def;
	}

}

template <class T, int N> T Array<T,N>::operator [](int index) const{ //azért jó ezt csinálni, mert a függvény működhet másként mint az alap definiált
   return index >=0 && index < N ? data[index]:0.0;


}


template <class T, int N> template <int M> Array<T, N> & Array<T, N> :: operator = (Array<T, M> arr){

	for(int i = 0; i<(N>M?M:N); i++){
		data[i]=arr[i];
	}



	return *this;

}


int main(){
//Array<double> a(2);
/*	Array <double, 3> b (8.2);  //az array double és array long két külön osztály, csak a mintájuk egyezik meg
	Array<long, 8> a (2.5);
	Array<long, 3> c (2.5); //három különböző típusparaméternél három konstruktor




for(int i = 0; i<10; i++){
	std::cout << a[i] << ' ' << b[i]<< std::endl;
}
*/

//legnehezebb kérdés: hogyan lehetne felüldefiniálni az értékadót úgy, hogy az a=c futattható legyen, és az a elemeihez a c elemeit rendeli, ha létezik olyan index mindkettőben
	Array<long, 8> a (2);
		Array<long, 6> c (1);


a=c;

for(int i = 0; i<10; i++){
	std::cout << a[i] << std::endl;
}



}