#include <iostream>
#include <string>
#include <cmath>
#include <condition.h>

int main()
{

     std::string i = "o";

     while (i == "o"){

     std::cout << "Choisis, + = Addition, - = Soustraction, x = Multiplication, / = Division " << std::endl << " % = Reste, r = Racine caree, s = Sinus, c = Cosinus, t = Tangente" << std::endl << "e = Exponentielle, ln = Logarithme neperien, v = Valeur absolue " << std::endl << " ab = Arrondi vers le bas, ah = Arrondi vers le haut" << std::endl;

     condition();

     std::cout << "Veux-tu continuer ? o = Oui, n = Non" << std::endl;

     std::cin >> i;

     std::cout << "----------------------------------------------------" << std::endl;


            }


            return 0;
}
