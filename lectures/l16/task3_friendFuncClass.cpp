#include <iostream>

using namespace std;

class Hum;
class Temp{
	int m_tmp;
public:
	Temp(int tmp = 0){m_tmp = tmp;}
	friend void outWeth(const Temp &temp, const Hum &hum);
};

class Hum{
private:
	int m_hum;
public:
	Hum(int hum = 0){m_hum = hum;}
	friend void outWeth(const Temp &temp, const Hum &hum);

};

void  outWeth(const Temp &temp, const Hum &hum){
	cout << "Tmp is " << temp.m_tmp << " Hum is " << hum.m_hum <<endl;
}

int main(){
	Temp teip(15);
	Hum huo(11);
	outWeth(teip,huo);
	return 0;
}
