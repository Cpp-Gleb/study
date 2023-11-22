#include <iostream>

class Base

{
private:
    int privateBase;
protected:
    int protBase;
public:
    int pubBase;
};

class DerivedPriv : private Base{
//унаследованные данные класса
//недоступно:
// int privateBase;
private:
    int protBase;
private:
    int pubBase;
public:
    void updateDerived(){
//privateBase=0; //нельзя получить доступ
//к private данным Base

    protBase=0;
    pubBase=0;
    }
};

class DerivedPriv1 : public DerivedPriv{
public:
    void updateDerived1(){
//privateBase=1;
//нельзя получить доступ

//к private данным Base
//protBase=1;
//protBase недоступно,
//потому что Derived использовал
//private при наследовании от Base

//pubBase=1;
//pubBase недоступно, потому что
//Derived использовал private
//при наследовании от Base

    }
};

class DerivedProt : protected Base{
//унаследованные данные класса
//недоступно:
// int privateBase;
//protected:
// int protBase;
//protected:
// int pubBase;
public:
    void updateDerived(){
//privateBase=0; //нельзя получить доступк

//private данным Base

    protBase=0;
    pubBase=0;
    }
};

class DerivedProt1 : public DerivedProt{
public:
    void updateDerived1(){
//privateBase=1; //нельзя получить доступ к

//private данным Base
    protBase=1; //а тут уже все в порядке,
//в Derived они стали protected
    pubBase=1; // что значит, что наследник имеет

//к ним доступ

    }
};

class DerivedPub : public Base
{
//унаследованные данные класса
//недоступно:
// int privateBase;
//protected:
// int protBase;
//public:
// int pubBase;
public:
    void updateDerived()
    {
//privateBase=0; //нельзя получить доступ к
//private данным Base

    protBase=0;
    pubBase=0;
    }
};

class DerivedPub1 : public DerivedPub
{
public:
    void updateDerived1()
{
//privateBase=1; //нельзя получить доступ к

//private данным Base

    protBase=1;
    pubBase=1;
    }
};

int main()
{
//При вызове извне, получитьдоступ не получится ни к чему
DerivedPriv dd1;
DerivedProt dd2;
DerivedPub  dd3;
//dd.privateBase=3; недоступно
//dd.protBase=3; недоступно
//dd.pubBase=3; недоступно
}

