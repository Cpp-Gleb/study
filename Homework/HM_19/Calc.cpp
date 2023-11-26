#include <iostream>

using namespace std;

class Calc{
protected:
    std::string _nameOperation;
    double _radius;
    const double _pi = 3.1415926;
    Calc(double radius = 0.0, string nameOperation = ""): _radius(radius), _nameOperation(nameOperation){}
public:
    double getValue();
    std::string getName();
    virtual const double calc();
};

string Calc::getName() {
    return _nameOperation;
}

double Calc::getValue() {
    return _radius;
}

const double Calc::calc() {
    return 0.0;
}

class CalcLength: public Calc{
public:
    CalcLength(double value, std::string name): Calc(value, name){}
    virtual const double calc();
};

class CalcArea: public Calc{
public:
    CalcArea(double value, std::string name): Calc(value, name){}
    virtual const double calc();
};

class CalcVolume: public Calc{
public:
    CalcVolume(double value, std::string name): Calc(value, name){}
    virtual const double calc();
};

const double CalcLength::calc() {
    return 2 * _pi * _radius;
}

const double CalcArea::calc() {
    return _pi * _radius * _radius;
}

const double CalcVolume::calc() {
    return 4/3 * _pi * _radius * _radius * _radius;
}

void ShowResult(Calc &calc){
    cout << "Name operation: " << calc.getName() << " radius: " << calc.getValue() << " value " << calc.calc() << endl;
}

int main(){
    CalcLength circle(5, "CalcLength");
    CalcArea squareCircle(8, "CalcArea");
    CalcVolume ball(2, "CalcVolume");
    ShowResult(circle);
    ShowResult(squareCircle);
    ShowResult(ball);
}