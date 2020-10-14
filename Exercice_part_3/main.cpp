//
//  main.cpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 12/10/2020.
//

#include <iostream>
#include "friend_request.hpp" //Contient point et vecteur3d
#include "vect_matrice.hpp" //contient vect et mat

using namespace std;

int main(int argc, const char * argv[]) {
    
    point a(5,12); //Déclaration de point
    affiche(a);
    
    point *adp = new point(2, 4);
    affiche(*adp);
    
    //vecteurs
    vecteur3d v1(22,4,54), v2(22,4,54);
    
    //Est ce que les points coïncides ?
    if (coincide(v1, v2)) {
        cout << "Les points coincides" << endl << endl;
    }
    
    //---------------- Vect et matrice ----------------------
    
    vect vect1(4.5, 6.3, 8.87); //Valeur au hasard
    vect res;
    
    double tab [3][3] = {4, 6, 3, 65, 34, 66, 23, 13, 54};
    matrice mat = tab;
    
    res = prod(mat, vect1);
    res.affiche();
    return 0;
}
