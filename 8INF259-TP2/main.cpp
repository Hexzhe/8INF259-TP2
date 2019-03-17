/******************************************************************
* Titre: Arborescence génétique (8INF259\TP2)
* Auteur(e)s: Dominique Boivin (BOID31609701)
*             Jason Gilbert (GILJ05069703)
* Date: 2019-04-02
* Description: 
* Note: L'ordre des fonctions dans main.cpp a du être modifié pour que ca compile.
*       Les fichiers de tests se trouvent dans ResourceFiles/Data/
*******************************************************************/

#include "pch.h"
#include <fstream>
#include <string>
#include "ChromoCell.h"
#include "ColorCell.h"
#include "GenTree.h"

template<class cellType>
std::vector<cellType> analyserFichier(std::ifstream& fichier)
{
	std::vector<cellType> cells;
	while (!fichier.eof())
	{
		cellType cell;
		fichier >> cell;
		cells.push_back(cell);
	}
	return cells;
}

template<class cellType>
void executer(std::ifstream& fichier)
{
	std::vector<cellType> population = analyserFichier<cellType>(fichier);

	GenTree<cellType> genTree(population);

	std::cout << "GenTree resultant : " << std::endl;
	std::cout << genTree << std::endl;

	std::cout << "individu resultant : " << genTree.individuResultant() << std::endl;

	unsigned int nbGen = genTree.nombreDeGeneration();
	std::cout << "Nombre de generation : " << nbGen << std::endl;
	for (unsigned int i = 0; i < nbGen; i++)
	{
		std::cout << "ancetre de niveau " << i << " ---------------" << std::endl;
		std::cout << genTree.ancetresDeNiveau(i) << std::endl;
	}
}

int main()
{
	bool quitter = false;
	while (!quitter)
	{
		std::cout << "------------------------------------------------------------------" << std::endl;
		std::cout << "entrer le nom du fichier contenant la liste d'individus : ";
		std::string nomFichier;
		std::cin >> nomFichier;

		std::ifstream fichier(nomFichier);
		if (!fichier.fail())
		{
			std::string cell;
			fichier >> cell;
			std::cout << "type de cellule " << cell;
			if (cell == "ColorCell")
			{
				std::cout << std::endl;
				executer<ColorCell>(fichier);
			}
			else if (cell == "ChromoCell")
			{
				std::cout << std::endl;
				executer<ChromoCell>(fichier);
			}
			else
			{
				std::cout << " non reconnu" << std::endl;
			}
		}
		else
		{
			std::cout << "Fichier non reconnu - le programme va quitter" << std::endl;
			quitter = true;
		}
	}

	return 0;
}