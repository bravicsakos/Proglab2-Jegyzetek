#include <iostream>

class Money {
private:
    double Value;
    const char *const Currency;
public :

    Money(double v, const char *c);

    Money operator*(double d);

    Money operator~();

};

Money::Money(double v, const char *c) : Value(v), Currency(c) {}

Money Money::operator*(double d) {
    Money m(Value*d, Currency);
    return m;
}

Money Money::operator~() {
    Money m(round(Value), this->Currency);
    return m;
}

template <int N,int M>class IntList{
private:

public:
    unsigned int n[N];
    unsigned int p[M];
    int nLenght;
    int mLenght;
    IntList():nLenght(0),mLenght(0){}
    IntList<1,1>Sum();
    void Add(int v);
    int operator~();
    int operator[](int i);
};

template<int N, int M>
IntList<1, 1> IntList<N, M>::Sum() {
    IntList<1,1> list;
    int negosszeg = 0;
    for (int i = 0; i < nLenght; i++){
        negosszeg += this->n[i];
    }
    int pozosszeg = 0;
    for (int i = 0; i < mLenght; i++){
        pozosszeg += this->p[i];
    }
    list.Add(negosszeg);
    list.Add(pozosszeg);
    return list;
}

template<int N, int M>
void IntList<N, M>::Add(int v) {
    if (v < 0){
        if (nLenght < N){
            this->n[nLenght] = (unsigned int)(v);
            nLenght++;
        }
    }
    else {
        if (mLenght < M){
            this->p[mLenght] = (unsigned int)(v);
            mLenght++;
        }
    }
}

template<int N, int M>
int IntList<N, M>::operator~() {
    int negosszeg = 0;
    for (int i = 0; i < nLenght; i++){
        negosszeg += this->n[i];
    }
    int pozosszeg = 0;
    for (int i = 0; i < mLenght; i++){
        pozosszeg += this->p[i];
    }
    return negosszeg + pozosszeg;

}

template<int N, int M>
int IntList<N, M>::operator[](int i) {
    if (i < 0 && i > -nLenght){
        return n[i];
    }
    else if (i >= 0 && i <mLenght){
        return p[i];
    } else return 0;
}


int main() {
    IntList<3,5> list;
    list.Add(10);
    list.Add(12);
    list.Add(-5);
    list.Add(-7);
    std::cout << list[1];
    return 0;
}



