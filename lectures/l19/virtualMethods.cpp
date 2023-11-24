#include <iostream>

class Animal{
protected:
    std::string m_name;
Animal(std::string name) : m_name(name){}
public:
    std::string getName() { return m_name; }
    virtual const char* speak() { return "???"; }
};

class Cat final: public Animal { //modifier final make class not inheritance
public:
    Cat(std::string name) : Animal(name){ }
    virtual const char* speak() { return "Meow"; }
};

class Dog: public Animal {
public:
    Dog(std::string name) : Animal(name){ }
    virtual const char* speak() { return "Woof"; }
};

void report(Animal &animal){
    std::cout << animal.getName() << " says " << animal.speak() << '\n';
}

//class Rusik: public Cat //not inheritance
//override -- compiler check redefinition of func


int main(){
    Cat cat("Matros");
    Dog dog("Barsik");
    report(cat);
    report(dog);
}