#include <iostream>

template <typename T>
const T& max(const T& a, const T& b){
    return(a > b) ? a:b;
}

int main(){
    int i = max(4,8);
    std::cout << i << std::endl;

    double d = max(7.222, 8.3323323);
    std::cout << d << std::endl;

    char c = max('b', 'v');
    std::cout << c << std::endl;

    return 0;
}