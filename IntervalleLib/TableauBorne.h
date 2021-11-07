#pragma once
#include "Tableau.h"
namespace Tab {
    class TableauBorne :
        public Tableau
    {
    private:
        float bornS, bornI;
    public:
        TableauBorne(int taille, float bs,float bi);
        float operator[](unsigned int indice);
        void operator()(unsigned int indice, float nv);

    };
};

