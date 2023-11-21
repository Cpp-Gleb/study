#include <iostream>
#include <string>
#include <utility>

using namespace std;

enum Operation{
    ShowItem = 1,
    BuyItem,
    GetTotal,
    escape
};

class Retailitem{
private:
    string _description;
    double _cost{};
    int _onStockBefore;
    //static int counter;
    int _onStock{};

public:
    void setDescription(string description);
    void setOnStock(int onStock);
    void setOnStockBefore();
    void setCost(double cost);
    double getCost() const;
    int getOnStock() const;
    int getOnStockBefore() const;
    string getDescription();
};

Retailitem array[3];
void fillArray(){
    for(auto & i : ::array){
        cout << "Put Description to product(without space): " << endl;
        string Description;
        cin >> Description;
        i.setDescription(Description);


        cout << "Put Number on stock: " << endl;
        int OnStock;
        cin >> OnStock;
        i.setOnStock(OnStock);
        i.setOnStockBefore();

        cout << "Put cost for product: " << endl;
        double Cost;
        cin >> Cost;
        i.setCost(Cost);
    }
}

class CashRegister: Retailitem{
private:
    double _totalScore{};
public:
    void buyItem(int numberDescription);
    [[nodiscard]] double getTotal() const;
    static void showItem();
};

void Retailitem::setDescription(std::string description) {
    _description = std::move(description);
}

void Retailitem::setOnStock(int onStock) {
    _onStock = onStock;
}

void Retailitem::setCost(double cost) {
    _cost = cost;
}
double Retailitem::getCost() const {
    return _cost;
}

int Retailitem::getOnStock() const {
    return _onStock;
}

void Retailitem::setOnStockBefore() {
    _onStockBefore = _onStock;
}

int Retailitem::getOnStockBefore() const {
    return _onStockBefore;
}

string Retailitem::getDescription() {
    return _description;
}

void CashRegister::buyItem(int numberDescription) {
    if(numberDescription == 1 || numberDescription == 2 || numberDescription == 3) {
        numberDescription--;
        if (::array[numberDescription].getOnStock() != 0) {
            int tmp = ::array[numberDescription].getOnStock() -1;
            ::array[numberDescription].setOnStock(tmp);
            _totalScore += ::array[numberDescription].getCost();
            cout << "Item " << ::array[numberDescription].getDescription() << " was bought\n";
        }
        else {
            cout << "Error! NO Items on Stock!\n";
        }
    }
    else{
        cout << "incorrect number of item!\n";
    }
//array[i]._onStock--
//_totalScore += array[i].cost;
}

double CashRegister::getTotal() const {
    return _totalScore;
}

void CashRegister::showItem() {
    for(auto & i : ::array){
        int k = i.getOnStockBefore() - i.getOnStock();
        for(int j = 0; j < k; j++){
            cout << i.getDescription() << endl;
        }
    }
//for(array[i]){for(i < _onStockBefore - _onStock){print(array[i].description)}}
}

int main(){
    fillArray();
    CashRegister Shop;
    //move declaration table
    while(true){
        int operation;
        for(int i = 0; i < 3; i++){
            cout << "Table\n";
            cout << "Number" << "   " << "Description" << "    " << "Number on stock" << "    "  << "Cost" << endl;
            cout << i+1 << "   " << ::array[i].getDescription() << "   " << ::array[i].getOnStock() << "   " << ::array[i].getCost() << endl;
        }
        cout << "choice operation:\n1 - Show your Items\n2 - Buy Item\n3 - Get Total score\n4 - exit\n";
        cin >> operation;
        switch (operation) {
            case ShowItem:
                Shop.showItem();
                break;
            case BuyItem:
                cout << "Which of item you want to buy?(1,2,3)";
                int item;
                cin >> item;
                Shop.buyItem(item--);
                break;
            case GetTotal:
                cout << "Total scere is  " << Shop.getTotal() << endl;
                break;
            case escape:
                return 0;
            default:
                cout << "incorrect enter!\n";
        }
    }
    return 0;
}