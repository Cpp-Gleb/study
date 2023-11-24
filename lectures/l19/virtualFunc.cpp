#include <iostream>

class Animal{ //abstract class
protected:
    std::string m_name;
public:
    Animal(std::string name): m_name(name){}
    std::string getName() { return m_name; }
    virtual const char* speak() = 0; // virtual func
};

class Lion: public Animal{
public:
    Lion(std::string name)
            : Animal(name)
    {
    }
    virtual const char* speak() { return "RAWRR!";
    }
};

int main()
{
    Lion lion("John");
    std::cout << lion.getName() << " says " <<
              lion.speak() << '\n';
}
