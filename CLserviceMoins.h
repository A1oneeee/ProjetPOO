#pragma once
#include "CAD.h"
ref class CLserviceMoins
{
private:
	CLcad^ oCad;
public:
	CLserviceMoins();
	System::Data::DataSet^ selectionnerMoinsVendu(System::String^);
};

