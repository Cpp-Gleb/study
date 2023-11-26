#include <iostream>

class Townhouse{
protected:
    std::string _nameApartment;
    std::string _address;
public:
    Townhouse(std::string nameApartment = "Village", std::string address = "Lenina 93"): _nameApartment(nameApartment), _address(address){}
    void setNameApartment(std::string nameApartment);
    std::string getNameApartment();
    void setAddress(std::string address);
    std::string getAddress();
};

class Flat: public Townhouse{
private:
    int _numberFlat;
    double _squareFlat;
public:
    Flat(int numberFlat = 3, double squareFlat = 32.3): _numberFlat(numberFlat), _squareFlat(squareFlat){}
    void setNumberFlat(int numberFlat);
    int getNumberFlat();
    void setSquareFlat(double squareFlat);
    double getSquareFlat();
};

void Flat::setNumberFlat(int numberFlat) {
    _numberFlat = numberFlat;
}

int Flat::getNumberFlat() {
    return _numberFlat;
}

void Flat::setSquareFlat(double squareFlat) {
    _squareFlat = squareFlat;
}

double Flat::getSquareFlat() {
    return _squareFlat;
}

void fillArray(){
    Flat Five[5];
    for(int i =0; i < 5; i++){
        Five[i].setNumberFlat(i+1);
        Five[i].setSquareFlat((i+2)*50/7);
        std::cout << "Number of the flat is " << Five[i].getNumberFlat() << std::endl;
        std::cout << "Square of the flat is " << Five[i].getSquareFlat() << std::endl;
    }
}

int main(){
    fillArray();
    return 0;
}