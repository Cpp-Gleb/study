#include <iostream>

class Point{
private:
    double _x;
    double _y;
public:
    Point(double x = 0.0, double y = 0.0):_x(x), _y(y){}
    friend std::ostream & operator<<(std::ostream &out, const Point &point);
};

std::ostream& operator<<(std::ostream &out,const Point &point){
    out<< "Point(" <<point._x << "," << point._y << ")";
    return out;
}

int main(){
    Point point1(5.0, 6.0);
    std::cout << point1;
    return 0;
}