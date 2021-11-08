#pragma once
#include "Tableau.h"
namespace Tab {
    class TableauBorne : private Tableau
    {
    private:
        float bornS, bornI;
    public:
        TableauBorne(const TableauBorne& TB);
        TableauBorne(int taille, float bs,float bi);
        ~TableauBorne();
        TableauBorne& operator=(const TableauBorne& T);
        const float& operator[](unsigned int indice) const;
        void operator()(unsigned int indice, float nv);

    };
};

