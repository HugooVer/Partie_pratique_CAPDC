#include <string>

using namespace std;

class Exploitation {
public:
    Exploitation();
    Exploitation(string, string, string);
    ~Exploitation();

private:
    string id;
    string nomExploitant;
    string melExploitant;

};

class Parcelle {
public:
    Parcelle();
    Parcelle(string, string, string, double);
    ~Parcelle();
    string ajouteUnTraitement();

private:
    string id;
    string dateSemis;
    string dateRecoltePrevue;
    double surface;
};

class EspeceCultivee {
public:
    EspeceCultivee();
    EspeceCultivee(string, string, string);
    ~EspeceCultivee();

private:
    string id;
    string libelle;
    string type;
};

class TraitementPhytoSanitaire {    //Il me semble que la classe devrais être abstraite
public:
    TraitementPhytoSanitaire();
    TraitementPhytoSanitaire(string);
    ~TraitementPhytoSanitaire();
    float quantitéAppliquee();

protected:
    string id;

};

class TraitementSemence : public TraitementPhytoSanitaire {
public:
    TraitementSemence();
    TraitementSemence(double);
    ~TraitementSemence();
    float quantitéAppliquee();

private:
    double dosageTraitementSemence;

};

class TraitementEnChamp : public TraitementPhytoSanitaire {
public:
    TraitementEnChamp();
    TraitementEnChamp(double);
    ~TraitementEnChamp();
    float quantitéAppliquee();

private:

};

class ProduitPhytoSanitaire {
public:
    ProduitPhytoSanitaire();
    ProduitPhytoSanitaire(string, string);
    ~ProduitPhytoSanitaire();

private:
    string id;
    string libelle;

};

class Pulverisation {
public:
    Pulverisation();
    Pulverisation(string, string, string);
    ~Pulverisation();
private:
    string id;
    string dosage;
    string datePulverisation;

};