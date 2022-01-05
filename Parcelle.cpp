#include <string>
#include <iostream>
#include "Classe.hpp"

using namespace std;

Parcelle::Parcelle(string id, string dateSemis, string dateRecoltePrevue, double surface) {
	this->id = id;
	this->dateSemis = dateSemis;
	this->dateRecoltePrevue = dateRecoltePrevue;
	this->surface = surface;
}