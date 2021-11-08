#include "assert.h"
#include "pch.h"
#include "TableauBorne.h"

Tab::TableauBorne::TableauBorne(const TableauBorne& TB):Tableau(TB)
{
    this->bornI = TB.bornI;
    this->bornS = TB.bornS;
}

Tab::TableauBorne::TableauBorne(int taille, float bi, float bs):Tableau(taille)
{
    assert(bi < bs);
    this->bornS = bs;
    this->bornI = bi;
}

Tab::TableauBorne::~TableauBorne()
{
}

Tab::TableauBorne& Tab::TableauBorne::operator=(const TableauBorne& T)
{
    if (this != &T)
    {
        this->Tableau::operator=(T);
        this->bornI = T.bornI;
        this->bornS = T.bornS;
    }
    return *this;
}

const float& Tab::TableauBorne::operator[](unsigned int indice) const
{
    return this->Tableau::operator[](indice);
}

void Tab::TableauBorne::operator()(unsigned int indice, float nv)
{
    assert(nv <= this->bornS && nv >= this->bornI);
    this->Tableau::operator[](indice) = nv;
    //if (indice < this->taille && nv <= this->bornS && nv >= this->bornI)
      //  this->element[indice] = nv;
}