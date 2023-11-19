#include <iostream>
#include <string>

using namespace std;

class Retailitem{
private:
    string _description;
    double _cost;
    //static int counter;
protected:
    int _onStock;
public:
    void setDescription(string description);
    void setOnStock(int onStock);
    void setCost(double cost);
};

class CashRegister: Retailitem{
private:
    Retailitem array[3];
    int _onStockBefore;
    double _totalScore;
public:
    CashRegister();
    void buyItem();
    double getTotal();
    void showItem();
    void clear();
};

void Retailitem::setDescription(std::string description) {
    _description = description;
}

void Retailitem::setOnStock(int onStock) {
    _onStock = onStock;
}

void Retailitem::setCost(double cost) {
    _cost = cost;
}

CashRegister::CashRegister() {
    for(int i = 0; i < 3; i++){
        cout << "Put Description to product: ";
        string Description;
        cin >> Description;
        array[i].setDescription(Description);

        cout << "Put Number on stock: ";
        int OnStock;
        cin >> OnStock;
        array[i].setOnStock(OnStock);

        cout << "Put cost for product: ";
        double Cost;
        cin >> Cost;
        array[i].setCost(Cost);
    }
    _onStockBefore = _onStock;
}

void CashRegister::buyItem() {
//array[i]._onStock--
//_totalScore += array[i].cost;
}



void CashRegister::showItem() {
//for(array[i]){for(i < _onStockBefore - _onStock){print(array[i].description)}}
}

int main(){
    return 0;
}