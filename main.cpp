#include <iostream>
using namespace std;

template <class T, int N = 0> class ArrayList {
    T *data;

public:
    explicit ArrayList();
    T operator [] (int i);
    void add(T value, int place);
    int size();

};

template<class T, int N>
ArrayList<T, N>::ArrayList() {
    data = new T[N];
}

template<class T, int N>
T ArrayList<T, N>::operator[](int i) {
    return i >= 0 && i < 10 ? data[i] : NULL;
}

template<class T, int N>
void ArrayList<T, N>::add(T value, int place) {
    if (place >= 0 && place < this->size()) {
        data[place] = value;
    }
}

template<class T, int N>
int ArrayList<T, N>::size() {
    return N;
}

template<class T, int M, int O>
ArrayList<T, M+O> append(ArrayList<T, M> front, ArrayList<T, O> back){
    int length = M + O;
    ArrayList<T, M+O> newData;
    for (int i = 0; i < length; i++){
        if (i < M) {
            newData.add(front[i], i);
        } else {
            newData.add(back[i - M], i);
        }
    }
    return newData;

}

int main() {
    ArrayList<int, 2> list;
    ArrayList<int, 2> list2;
    list.add(10,0);
    list.add(12,1);
    list2.add(25,0);
    list2.add(15,1);
    ArrayList<int, 4> newList = append<>(list, list2);
    for (int i = 0; i < newList.size(); i++){
        cout << newList[i] << " ";
    }
    cout << endl << newList.size() << " " << list.size() << " " << list2.size();
    return 0;
}