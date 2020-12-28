#include <iostream>

using namespace std;

int main()
{
    string aa;
    string bb="pumpernikiel";
    cout <<"prosze podac slowo";
    cin >> aa;
    while (aa!=bb){
        cout <<"prosze podac slowo";
        cin >>aa;
        if (aa==bb){
            break;
        }

    }

    cout << "Udalo ci sie opuscic petle." << endl;
    return 0;
}
