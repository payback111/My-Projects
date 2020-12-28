#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double wynik;
    cout <<"podaj wage ciala \n";
    cin >>a;
    cout <<"podaj wzrost \n";
    cin >>b;
    c=b*b;
    wynik=a/c;
    if (wynik<20){
        cout <<wynik<<" niedowaga\n";
    }
    else if ((wynik>20) && (wynik<=25)){

        cout <<wynik<<" waga w normie\n";
    }
    else if ((wynik>25)&& (wynik<=30)){

        cout <<wynik<<" nadwaga\n";
    }
    else if (wynik>30){
        cout <<wynik<<"otylosc\n";
    }
    cout << "Enter by kontynulowac" << endl;
    return 0;
}
