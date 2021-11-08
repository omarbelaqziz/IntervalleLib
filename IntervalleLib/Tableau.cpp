#include "pch.h"
#include "assert.h"
#include <iostream>
#include "Tableau.h"
using namespace std;
namespace Tab 
{
    Tab::Tableau::Tableau(unsigned int taille)
    {
        assert(taille > 0);
        this->taille = taille;
        this->element = new float[taille];
        //this->element = new float[taille]();
        if (this->element)
            for (int i = 0; i < this->taille; i++)
                this->element[i] = 0;
    }

    Tab::Tableau::~Tableau()
    {
        if (this->element)
        {
            delete[] this->element;
            this->element = 0;
        }
        
    }
    /*
        int a = 6; constructeur de recopie;
        affectation necessite des objet deja crees;
    
    */
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
            if (this->element)
            {
                delete[] this->element;
                this->element = 0;
            }
            this->element = new float[this->taille];
            if(this->element)
                for (int i = 0; i < T.taille; i++)
                    this->element[i] = T.element[i];
        }
        return *this;
    }
    // const float& : la reference nest pas modifiable meme si on retourne une reference.
    float& Tab::Tableau::operator[](unsigned int indice) const
    {
        assert(indice >= 0 && indice < this->taille);
        return this->element[indice];
    }
    void Tableau::print() const
    {
        for (int i = 0; i < this->taille; i++)
            cout << this->element[i] << "\t";
        cout << endl;
    }
};