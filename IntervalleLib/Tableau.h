#pragma once

namespace Tab {
	class Tableau
	{
	private:
		int taille;
		float* element;
	public:
		Tableau(unsigned int taille);
		~Tableau();
		Tableau(const Tableau& T);
		Tableau& operator=(const Tableau& T);
		float& operator[](unsigned int indice) const;
		void print() const;
	};
};