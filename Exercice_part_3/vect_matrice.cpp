//
//  vect_matrice.cpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 14/10/2020.
//

#include <iostream>
#include "vect_matrice.hpp"
using namespace std;

vect::vect(double x, double y, double z) {
    vec[0] = x;
    vec[1] = y;
    vec[2] = z;
}

void vect::affiche() {
    for (int i = 0; i < 3; i++)
        cout << vec[i] << " " << endl;
}

matrice::matrice(double t[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matTab[i][j] = t[i][j];
}

//Fonction prod scal
vect prod(const matrice &mat, const vect &v) {
    //Déclaration variables
    float scal = 0.0;
    vect res;
    
    //Placer le produit scal dans la variable scal.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scal += mat.matTab[i][j] * v.vec[j];
        res.vec[i] = scal;
    }
    return res;
}
