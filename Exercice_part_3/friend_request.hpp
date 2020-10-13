//
//  friend_request.hpp
//  Exercice_part_3
//
//  Created by Nicolas BAUER on 12/10/2020.
//

#ifndef friend_request_hpp
#define friend_request_hpp

#include <stdio.h>

//Exercice 81
class point {
    int x, y;
    
public:
    //Constructeur
    point(int abs=0, int ord=0);
    friend void affiche(const point &); //Permettra d'acceder à un membre de la classe point
};

//Exercice 82 : reprise de la classe vecteur3d

class vecteur3d {
    //private
    float m_x, m_y, m_z;
    
public:
    //Constructeur
    vecteur3d(float x=0.0, float y=0.0, float z=0.0);
    
    //Nouvelle fonction coïncide
    friend bool coincide(const vecteur3d &, const vecteur3d &);
};


#endif /* friend_request_hpp */
