#pragma once
#include "Personne.h"

ref class Personnel : public Personne
{
private:
	int ID_personnel;
	System::String^ code_secu;
	System::DateTime^ date_embauche;
	int ID_supp;
	bool admin_;
	int ID_adresse;
public:
	Personnel();
	void setID_personnel(int) override;
	int getID_personnel() override;
	void setCode_secu(System::String^) override;
	System::String^ getCode_secu() override;
	void setDate_embauche(System::DateTime^) override;
	//System::DateTime^ getDate_embauche() override;
	void setID_supp(int) override;
	int getID_supp() override;
	void setAdmin(bool) override;
	bool getAdmin() override;
	void setID_adresse(int) override;
	int getID_adresse() override;
};

