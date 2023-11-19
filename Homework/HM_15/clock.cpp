#include <iostream>

using namespace std;

enum Operation{
    setSecond = 1,
    setMinute,
    setHour,
    printTime,
    escape
};

class Clock{
private:
    int _second;
    int _minute;
    int _hour;
public:
    Clock();
    void setSecond(int second);
    void setMinute(int minute);
    void setHour(int hour);
    void printTime();
};

Clock::Clock(){
    _second = 0;
    _minute = 0;
    _hour = 0;
}

void  Clock::setSecond(int second) {
    if(second < 60 && second >= 0) {
        _second = second;
    }
    else {
        cout << "incorrect number!" << endl;
    }
}

void  Clock::setMinute(int minute) {
    if(minute < 60 && minute >= 0){
        _minute = minute;
    }
    else{
        cout << "incorrect number!" << endl;
    }
}

void  Clock::setHour(int hour) {
    if(hour < 24 && hour >= 0){
        _hour = hour;
    }
    else{
        cout << "incorrect number!" << endl;
    }
}

void Clock::printTime() {
    cout << (_hour % 24) / 10 << (_hour % 24) % 10 << ':' << (_minute % 60) / 10 << (_minute % 60) % 10 << ':' << (_second % 60) / 10 << (_second % 60) % 10 << endl;
}

int main(){
    Clock user;
    while(true){
        int operation;
        cout << "choice operation:\n1 - Set Second\n2 - Set Minute\n3 - Set Hour\n4 - Print time\n5 - exit\n";
        cin >> operation;
        switch (operation) {
            case(setSecond):
                int second;
                cin >> second;
                user.setSecond(second);
                break;
            case(setMinute):
                int minute;
                cin >> minute;
                user.setMinute(minute);
                break;
            case(setHour):
                int hour;
                cin >> hour;
                user.setHour(hour);
                break;
            case(printTime):
                user.printTime();
                break;
            case(escape):
                return 0;
            default:
                cout << "try again";
                break;
        }
    }
    return 0;
}