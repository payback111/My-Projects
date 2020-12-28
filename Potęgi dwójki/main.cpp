#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c = 1;
    cout <<"podaj do ktorej potegi \n";
    cin >> a;
    for (b = -1; b<a;b++){
    cout<<c<<endl;
		c*=2;
    }
    cout << "Koniec" << endl;
    return 0;
}
