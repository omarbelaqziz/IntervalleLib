#include "pch.h"
#include "Tableau.h"
#include <iostream>
using namespace std;
namespace Tab 
{
    Tab::Tableau::Tableau(unsigned int taille)
    {
        this->taille = taille;
        this->element = new float[taille];
    }

    Tab::Tableau::~Tableau()
    {
        delete this->element;
        this->element = 0;
    }

    Tab::Tableau::Tableau(const Tableau& T)
    {
        this->taille = T.taille;
        this->element = new float[taille];
        for (int i = 0; i < this->taille; i++)
            this->element[i] = T.element[i];
        
    }

    Tableau& Tab::Tableau::operator=(const Tableau& T)
    {
        if (this != &T)
        {
            this->taille = T.taille;
            for (int i = 0; i < T.taille; i++)
                this->element[i] = T.element[i];
        }
        return *this;
    }

    float& Tab::Tableau::operator[](unsigned int indice)
    {
        return this->element[indice];
    }
};