#pragma once
#include "Personne.h"

ref class Client : public Personne
{
private:
	int ID_client;
	System::DateTime^ date_naissance;
public:
	Client();
	int getID_client() override;
	void setID_client(int) override;
	//System::DateTime^ getDate_naissance() override;
	void setDate_naissance(System::DateTime^) override;
};
