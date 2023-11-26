#include <iostream>

class Counter
{
public:
    Counter(int number)
    {
        value = number;
    }
    operator int() const { return value; }
private:
    int value;
};

int main()
{
    Counter counter{25};
    int n = counter;    // преобразуем от Counter в int
    std::cout << n << std::endl;             // 25
    // или так
    int m {counter};
    std::cout << m << std::endl;             // 25
}