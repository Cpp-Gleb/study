#include <iostream>

using namespace std;

class Point{
private:
    double _x;
public:
    Point(double x = 0.0): _x(x){}
    friend bool operator >(const Point &p1, const Point &p2);
};

bool operator >(const Point &p1, const Point &p2){
    return(p1._x > p2._x);
}

int main(){
    Point point1(5.5);
    Point point2(3.5);
    if(point1 > point2){
        cout << "point1 more than point2" << endl;
    }
    else{
        cout << "point2 more than point1" << endl;
    }

}