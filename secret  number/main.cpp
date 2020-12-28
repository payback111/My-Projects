#include <iostream>

using namespace std;

int main()
{
    int a;
    int tajnyNumer=5;
    cout <<"Podaj numer";
    cin >> a;
    while (a!=tajnyNumer){
        cout <<"Nie, to nie jest ta liczba, ktora wybralem dla ciebie. Sprobuj ponownie!";
        cin >>a;
        if (a==tajnyNumer)
        cout <<"Dobra robota! To numer, ktory wybra³em dla ciebie! Jestes teraz wolny";
    }
    cout << "Koniec" << endl;
    return 0;
}
