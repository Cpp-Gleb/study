#include <iostream>
#include <string>

class Human
{
public:
    std::string _name;
    int _age;

    Human(std::string name = "", int age = 0): _name(name), _age(age){}
    std::string getName() const{
        return _name;
    }
    int getAge() const{
        return _age;
    }
};

class BasketballPlayer : public Human{
public:
    double _gameAverage;
    int _points;
    BasketballPlayer(double gameAverage = 0.0, int points = 0): _gameAverage(gameAverage), _points(points){}
};

// Employee открыто наследует Human

class Employee: public Human{
public:
    int _wage;
    long _employeeID;
    Employee(int wage = 0, long employeeID = 0): _wage(wage), _employeeID(employeeID){}
    void printNameAndWage() const{
        std::cout << _name << ": " << _wage << '\n';
    }
};

class Supervisor: public Employee{
public:
// Этот Супервайзер может наблюдать
//максимум за 5-тью Работниками
    long _nOverseesIDs[5];
    Supervisor(){}
};

int main(){
    Supervisor Oleg;
    return 0;
}
