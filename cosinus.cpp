#include <iostream>
#include <cmath>
#include <string>
#include <cosinus.h>

void cosinus()
{
    float a;

    std::cout << "Premier chiffre :" << std::endl;

    std::cin >> a;

    std::cout << "Le cosinus de " << a << " est " << cos(a) << std::endl;

}
