#include <iostream>

class Point{
private:
    double _x;
    double _y;
public:
    Point(double x = 0.0, double  y = 0.0): _x(x), _y(y){}
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    friend std::istream & operator >> (std::istream &in, Point &point);
};

void Point::setX(double x) {
    _x = x;
}

void Point::setY(double y) {
    _y = y;
}

double Point::getX() {
    return _x;
}

double Point::getY() {
    return _y;
}

std::istream& operator >> (std::istream &in, Point &point){
    double x;
    double y;
    in >> x >> y;
    if(in) {
        point.setX(x);
        point.setY(y);
    }
    return in;
}

int main(){
    Point point1(5.0,6.0);
    std::cin >> point1;
    std::cout << point1.getX() << " " << point1.getY() << std::endl;
}