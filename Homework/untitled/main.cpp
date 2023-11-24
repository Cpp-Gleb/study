#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

class Car{
private:
    double _tmpX;
    double _tmpY;
    double _finishX;
    double _finishY;
    double _dist;
    double _angle;
    double _speed;
public:
    Car();
    void setStartX(double startX);
    void setStartY(double startY);
    void setFinishX(double finishX);
    void setFinishY(double finishX);
    void setSpeed(double speed);
    double getDistance();
    double getAngle();
    void moving();
};

Car::Car(){
    _tmpX = 0;
    _tmpY = 0;
    _angle = 0;
    _speed = 0;
    _finishX = 0;
    _finishY = 0;
    _dist = 0;
}

void Car::setSpeed(double speed) {
    _speed = speed;
}

void Car::setStartX(double startX) {
    _tmpX = startX;
}

void Car::setStartY(double startY) {
    _tmpY = startY;
}

void Car::setFinishX(double finishX) {
    _finishX = finishX;
}

void Car::setFinishY(double finishX) {
    _finishY = finishX;
}

double Car::getDistance() {
    _dist = sqrt((pow((_finishX-_tmpX), 2) + pow((_finishY-_tmpY),2)));
    return _dist;
}

double Car::getAngle() {
    srand(10);
    _angle = -atan(((_finishY - _tmpY) / (_finishX - _tmpX)) + (rand() % 10) / 1000);
    return _angle;
}

void Car::moving() {
    srand(10);
    double t = 1 + (rand()%10)/1000;
    _tmpX = _tmpX - _speed * t * cos(_angle);
    _tmpY = _tmpY - _speed * t * cos(_angle);
    getAngle();
    while(getDistance() > 1){
        _tmpX = _tmpX - _speed * t * cos(_angle);
        _tmpY = _tmpY - _speed * t * cos(_angle);
        getAngle();
        std::cout << getDistance() << std::endl;
    }
    std::cout << "You arrived!" << std::endl;
}

int main() {
    Car firstCar;
    double curX;
    double curY;
    double finishX;
    double finishY;
    double speed;

    std::cout << "Put your coordinates(x y): ";
    std::cin >> curX >> curY;
    std::cout << "Put finish coordinates(x y): ";
    std::cin >> finishX >> finishY;
    std::cout << "Put speed: ";
    std::cin >> speed;

    firstCar.setStartX(curX);
    firstCar.setStartY(curY);
    firstCar.setFinishX(finishX);
    firstCar.setFinishY(finishY);
    firstCar.setSpeed(speed);
    firstCar.moving();

    return 0;
}
