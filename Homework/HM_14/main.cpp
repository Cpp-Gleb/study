#include <iostream>
#include <string>

using namespace std;

class Buyer{
private:
    string _surname;
    string _name;
    string _second_name;
    string _address;
    string _credit_card;
    string _bank_account;
    int _balance;
public:
    Buyer(){
        _surname = "Ivanov";
        _name = "Ivan";
        _second_name = "Ivanovich";
        _address = "Ivanovskaya 95";
        _credit_card = "xxxx - xxxx - xxxx - xxxx";
        _bank_account = "xxx - xxx - xxx";
        _balance = 0;
    }

    string get_name();
    void set_name(string name);

    string get_surname();
    void set_surname(string surname);

    string get_second_name();
    void set_second_name(string second_name);

    string get_address();
    void set_address(string address);

    void set_credit_card(string credit_card);

    void set_bank_account(string bank_account);

    int get_balance();
    void set_balance(int balance);

};

class Pruducts{
private:
    string _products_name;
    int _cost;
public:
    Pruducts(){
        _products_name = "Discount card";
        _cost = 0;
    }
    int get_cost();
    void set_cost(int cost);
    string set_product_name(string product_name);
    void show_products();
};

class Money_operation: public Buyer, public Pruducts{
private:
    int _sum;
public:
    Money_operation(){
        _sum = 0;
    }
    void transfer(); //credit_card, bank_account
    void buy_product(); // credit card, cost, sum
};

string Buyer::get_name(){
    return _name;
}
void Buyer::set_name(std::string name){
    _name = name;
}

string Buyer::get_surname() {
    return _surname;
}
void Buyer::set_surname(std::string surname) {
    _surname = surname;
}

string Buyer::get_second_name() {
    return _second_name;
}
void Buyer::set_second_name(std::string second_name) {
    _second_name = second_name;
}

string Buyer::get_address() {
    return _address;
}
void Buyer::set_address(std::string address) {
    _address = address;
}

void Buyer::set_credit_card(std::string credit_card) {
    _credit_card = credit_card;
}

void Buyer::set_bank_account(std::string bank_account) {
    _bank_account = bank_account;
}

int Buyer::get_balance() {
    return _balance;
}
void Buyer::set_balance(int balance) {
    _balance = balance;
}

int Pruducts::get_cost() {
    return _cost;
}
void Pruducts::set_cost(int cost) {
    _cost = cost;
}

string Pruducts::set_product_name(string product_name) {
    _products_name = product_name; //  in future input from file
}
void Pruducts::show_products() {
    cout << _products_name << endl << "cost: " << _cost << endl;
}

void Money_operation::buy_product() {
    // call Products::object
    //if(object.cost <= Buyer::object){}
}

//In  future split func to many funcs and in main put it in while(true)
void Input_Output(){
    class Buyer Tom;
    string name;
    string surname;
    string second_name;
    string address;
    string credit_card;
    string bank_account;
    cout << "Hello! You stay in our online shop!\n Follow the instructions on your display!\n";
    cout << "Put name here:";
    cin >> name;
    cout << "Put surname here:";
    cin >> surname;
    cout << "Put second name:";
    cin >> second_name;
    cout << "Put address:";
    cin.ignore();
    getline(cin, address); // debug
    cout << "Put your credit card number:";
    cin >> credit_card;
    cout << "Put bank account:";
    cin >> bank_account;
    Tom.set_name(name);
    Tom.set_surname(surname);
    Tom.set_second_name(second_name);
    Tom.set_address(address);
    Tom.set_credit_card(credit_card);
    Tom.set_bank_account(bank_account);
    cout << Tom.get_name() << " ";
    cout << Tom.get_surname() << " ";
    cout << Tom.get_second_name() << " ";
    cout <<"Thanks for trust to our shop! \n";
}

int main() {
    Input_Output();
    return 0;
}
