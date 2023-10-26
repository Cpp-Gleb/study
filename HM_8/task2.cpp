/***
*Для 2-х строк введенных с клавиатуры определить все
возможные варианты вхождения второй строки в первую.
***/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	int i =0;
	int count = 0;
// s1 > s2;
	for(auto c : s2){)
		for(auto k : s1){
			if(c ==k){
				i++;
			}
		}
	}
	return 0;
}
