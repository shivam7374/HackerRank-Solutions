
class Matrix {
public:
    vector<vector<int>> a;

    Matrix() {}
    Matrix operator+(Matrix &o) {
        Matrix sum(*this);
        for (int i = 0; i < o.a.size(); i++) {
            for (int j = 0; j < o.a[i].size(); j++) {
                sum.a[i][j] += o.a[i][j];
            }
        }
        return sum;
    }
};
