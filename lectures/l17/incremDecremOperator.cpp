#include <iostream>

using namespace std;

class N{
private:
    int _n;
public:
    N(int n = 0): _n(n){}
    N & operator-- ();// prefix
    N operator++ (int); //postfix
    friend ostream &operator<< (ostream &out, const N &n);
};

ostream &operator<< (ostream &out, const N &n){
    out << "N(" << n._n << ")";
    return out;
}

N & N::operator-- (){
    if(_n == 0)
        _n = 8;
    else
        --_n;
    return *this;
}

N N::operator++(int) {
    N tmp(_n);
    (*this)++;
    return tmp;
}

int main(){
    N number(7);
    cout << number;
    cout << --number;
    cout << --number;
    cout << number++;
    return 0;
}