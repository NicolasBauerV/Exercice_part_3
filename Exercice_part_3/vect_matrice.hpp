//
//  vect_matrice.hpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 14/10/2020.
//

#ifndef vect_matrice_hpp
#define vect_matrice_hpp

#include <stdio.h>

//Déclaration de la class matrice (afin de pouvoir y acceder dans vect)
class matrice;

class vect {
    //private
    double vec[3]; //contient les 3 composantes
    
public:
    //Constructeur
    vect(double x = 0, double y = 0, double z = 0);
    
    void affiche();
    
    friend vect prod(const matrice &, const vect &);
};

class matrice {
    //private
    double matTab[3][3];
    
public:
    //Constructeur
    matrice(double t[3][3]);
    friend vect prod(const matrice &, const vect &);
};
#endif /* vect_matrice_hpp */
