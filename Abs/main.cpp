#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout <<"Podaj pierwsza liczbe \n" ;
    cin >>a;
    if (a<0){
        a = a*(-1);
    }
    cout <<"Podaj druga liczbe \n";
    cin >>b;
    cout << "odleglosc miendzy liczbami wynosi \n" <<a+b<<"\n";



    cout << "Enter by kontynulowac" << endl;
    return 0;
}
