#include <iostream>
#include <cmath>
#include <string>
#include <addition.h>
#include <soustraction.h>
#include <multiplication.h>
#include <division.h>
#include <modulo.h>
#include <racine.h>
#include <sinus.h>
#include <condition.h>
#include <cosinus.h>
#include <tangente.h>
#include <exponentielle.h>
#include <ln.h>
#include <valeurabsolue.h>
#include <bas.h>
#include <haut.h>
void condition()
{

    std::string choix;

    std::cin >> choix;

    if (choix == "+") {

       addition();

}                      else if (choix == "-") {

                        soustraction();
}
                             else if (choix == "x"){

                                  multiplicaton();
}
                                     else if (choix == "/") {

                                          division();
    }
                                           else if (choix == "%") {

                                             modulo();
    }
                                             else if (choix == "r") {

                                                     racine();
      }
                                              else if(choix == "s"){

                                                   sinus();

     }
                                                else if(choix == "c") {

                                                    cosinus();
                 }
                                                else if(choix == "t") {

                                                        tangente();
                                }
                                                 else if(choix == "e") {

                                                             exponentielle();
    }
                                               else if(choix == "ln"){

                                                        ln();
    }

                                                    else if(choix == "v"){

                                                         valeurabsolue();
}
                                                        else if(choix == "ab"){
                                                               bas();

    }
                                                              else if(choix == "ah"){
                                                                       haut();
    }

                                              else {

                                                   std::cout << "Erreur relancer le programme" << std::endl;
}

}

