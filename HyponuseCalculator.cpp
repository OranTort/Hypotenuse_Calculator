#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    double a;
    double b;
    double c;
    char cont;

    do{cout << "Enter Side A: ";
    cin >> a;

    cout << "Enter Side B: ";
    cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c << "\n"; 

    cout << "Do you wish to continue?(Y/N): ";
    cin >> cont;
    cont = toupper(cont);
    }while(cont == 'Y');

    return 0;
}