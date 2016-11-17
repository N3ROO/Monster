#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <iostream>
#include "monster.h"
#include "array"

using namespace std;

// Pour les fleches: dirige vers GAUCHE,DROIT,BAS, ou HAUT
//const int GAUCHE=4;
//const int DROITE=6;
//const int BAS=2;
//const int HAUT=8;

//const int NB_MAX_MONSTER = 45;

const int TAILLE_LIGNE = 9;
const int TAILLE_COLONNE = 5;

const int Wall = 1;
const int Ice = 2;
const int Awake = 3;
const int Sleep = 4;

using grilleLevel = array<array<int,TAILLE_COLONNE>,TAILLE_LIGNE>;

////Définition des prototypes de fonctions
void initLevel(int lvl, grilleLevel &grille, int taille_colonne, int taille_ligne);
void initTabLevel(grilleLevel & grille, int taille_colonne, int taille_ligne);

#endif