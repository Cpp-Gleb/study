#include  <iostream>
#include <string>

using namespace std;

class Employee{
private:
    int _id;
    string _name;
public:
    Employee(int id = 0, const string &name =""): _id(id), _name(name){
        cout << "Employee " << _name << " created.\n";
    }
    Employee(const string &name): Employee(0,name){}
};

int main(){
    Employee a;
    Employee b ("Ivan");
    return 0;
}
