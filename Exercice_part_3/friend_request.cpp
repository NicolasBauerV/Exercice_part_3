//
//  friend_request.cpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 12/10/2020.
//

#include <iostream>
#include "friend_request.hpp"
using namespace std;

point::point(int abs, int ord) {
    x = abs;
    y = ord;
}

void affiche(const point &pt) {
    cout << "Coordonnée: " << pt.x << " " << pt.y << endl;
}

//---------------------------------------------------------

vecteur3d::vecteur3d(float x, float y, float z) :
m_x(x), m_y(y), m_z(z) {}

//Renvoie un type bool
bool coincide(const vecteur3d &v1, const vecteur3d &v2) {
    if (v1.m_x == v2.m_x && v1.m_y == v2.m_y && v1.m_z == v2.m_z)
        return true;
    
    return false;
}
