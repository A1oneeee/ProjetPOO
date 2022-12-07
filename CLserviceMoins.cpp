#include "CLserviceMoins.h"

CLserviceMoins::CLserviceMoins() {
	this->oCad = gcnew CLcad();
}
System::Data::DataSet^ CLserviceMoins::selectionnerMoinsVendu(System::String^ dataTableName) {
	System::String^ sql = "SELECT ref_article, SUM(qtn_article) as Vendu FROM contenir GROUP BY ref_article ORDER BY SUM(qtn_article) ASC;";
	return this->oCad->getRows(sql, dataTableName);
}