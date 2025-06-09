#include <iostream>
#include <vector>
#include <cmath>


int main() {

    double a;
    double b;
    double c;
    char cont;

    do{std::cout << "Enter Side A: ";
    std::cin >> a;

    std::cout << "Enter Side B: ";
    std::cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C: " << c << "\n"; 

    std::cout << "Do you wish to continue?(Y/N): ";
    std::cin >> cont;
    }while(cont == 'Y' || cont == 'y');

    return 0;
}