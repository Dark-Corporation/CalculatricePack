#include <iostream>
#include <string>
#include <addition.h>

void addition()
{

    float a, b;

    std::cout << "Premier chiffre :" << std::endl;

    std::cin >> a;

    std::cout << "Deuxieme chiffre :" << std::endl;

    std::cin >> b;

    std::cout << "Le resultat de " << a << " + " << b << " = " << a + b << std::endl;


}
