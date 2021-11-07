#include "pch.h"
#include "TableauBorne.h"

Tab::TableauBorne::TableauBorne(int taille, float bi, float bs):Tableau(taille)
{
    this->bornS = bs;
    this->bornI = bi;
}

float Tab::TableauBorne::operator[](unsigned int indice)
{
    if (indice < this->taille)
        return this->element[indice];
    return 0;
}

void Tab::TableauBorne::operator()(unsigned int indice, float nv)
{
    if (indice < this->taille && nv <= this->bornS && nv >= this->bornI)
        this->element[indice] = nv;
}
