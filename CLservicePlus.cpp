#include "CLservicePlus.h"

CLservicePlus::CLservicePlus() {
	this->oCad = gcnew CLcad();
}
System::Data::DataSet^ CLservicePlus::selectionnerPlusVendu(System::String^ dataTableName) {
	System::String^ sql = "SELECT ref_article, SUM(qtn_article) as Vendu FROM contenir GROUP BY ref_article ORDER BY SUM(qtn_article) DESC;";
	return this->oCad->getRows(sql, dataTableName);
}