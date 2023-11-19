/***
Выполнить сравнение 2-х строк, введенных с клавиатуры с
игнорированием пробелов.
**/

#include <iostream>
#include <string>


using namespace std;

int main (){
	string s1;
	string s2;
	string newS;
	string newS2;
	getline(cin, s1);
	for(auto c :s1){
		if(c != ' '){
        		newS += c; // записывать символ из одной в другую и по принципу с интами
        	}
	}
	getline(cin, s2);
	for(auto c :s2){
                if(c != ' '){
                        newS2 += c; // записывать символ из одной в другую и по принципу с интами
                }
        }
	if(newS.compare(newS2) == 0){
		cout << "strings is equal\n";
	}
	else{
		cout << "strings not equal\n";
	}
	return 0;
}
