//
//  main.cpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 12/10/2020.
//

#include <iostream>
#include "friend_request.hpp"
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
        cout << "Les points coincides" << endl;
    }
    
    
    return 0;
}
