#include <iostream>

using namespace std;

class Buyer{
private:
    string _surname;
    string _name;
    string _second_name;
    string _address;
    string _credit_card;
    string _bank_account;

public:
    string get_name();
    void set_name(string name);

    string get_surname();
    void set_surname(string surname);

    string get_second_name();
    void set_second_name(string second_name);

    string get_address();
    void set_address(string address);

    string get_credit_card();
    void set_credit_card(string credit_card);

    string get_bank_account();
    void set_bank_account(string bank_account);

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

int main() {
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
    cout << "Your name: " << Tom.get_name() << endl;
    cout << "Your surname: " << Tom.get_surname() << endl;
    cout << "Your second name: " << Tom.get_second_name() << endl;
    cout << "Your address: " << Tom.get_address() << endl;
    cout <<"Thanks for trust to our shop! \n";
    return 0;
}
