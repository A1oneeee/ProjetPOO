#include "CLserviceSeuil.h"

CLserviceSeuil::CLserviceSeuil() {
	this->oCad = gcnew CLcad();
}
System::Data::DataSet^ CLserviceSeuil::selectionnerArticleSeuil(System::String^ dataTableName) {
	System::String^ sql = "SELECT ref_article, nom_article FROM article WHERE stock_article < min_stock_article ;";
	return this->oCad->getRows(sql, dataTableName);
}