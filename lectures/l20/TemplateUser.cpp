#include <iostream>

class Dollars{
private:
    int _dollars;
public:
    Dollars(int dollars): _dollars(dollars){}
    friend bool operator>(const Dollars &d1, const Dollars &d2){
        return(d1._dollars > d2._dollars);
    }
    friend std::ostream & operator<<(std::ostream &out, const Dollars &dollars);
};

std::ostream& operator<<(std::ostream &out,const Dollars &dollars){
    out<< "Dollars(" <<dollars._dollars << ")";
    return out;
}

template <typename T>
const T& max(const T& a, const T& b){
    return (a > b) ? a:b;
}

int main(){
    Dollars seven(7);
    Dollars ten(10);

    Dollars bigger = max(seven, ten);
    std::cout << bigger << std::endl;

    return 0;
}