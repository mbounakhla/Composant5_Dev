#pragma once

using namespace std;
#include <string>

/**
* Prend en entre une chaine de caractres  hacher
* Retourne le hash de la chaine calcul par l'algorithme SHA-256
*/
string hacher(string chaine_a_hacher);

/**
* Prend en entre une chaine de caractres  verifier et un hash
* Retourne true si le hash de la chaine correspond au hash en entre et false sinon
*/
bool verifier_hachage(string chaine_a_verifier, string chaine_hache);