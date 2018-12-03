template <int N, int M>
class Matrix {

    int data[N][M];

public:
    Matrix(int init = 0);
    Matrix<M, N> rotate() const;

};

template<int N, int M>
Matrix<N, M>::Matrix(int init) {
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            this->data[i][j] = init;
        }
    }
}

template<int N, int M>
Matrix<M, N> Matrix<N, M>::rotate() const {
    Matrix<M, N> result;
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            result.data[j][i] = this->data[i][j];
        }
    }
    return result;
}