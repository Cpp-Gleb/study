#include <iostream>

class Animal {// abstract parents class
protected:
    std::string m_name;
public:
    Animal(std::string name) : m_name(name)
    { }
    std::string getName() { return m_name; }
    virtual const char* speak() = 0;//virtual func
};

const char* Animal::speak()
{
//default realization
    return "buzz";
}

class Dragonfly: public Animal {
public:
    Dragonfly(std::string name)
            : Animal(name) {
    }
    virtual const char* speak() { // class not abstract we redefinition func
        return Animal::speak(); // use default of class animal
    }
};

int main() {
    Dragonfly dfly("Barbara");
    std::cout << dfly.getName() << " says " <<
              dfly.speak() << '\n';
}