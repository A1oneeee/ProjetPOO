#include "servicesPanier.h"

NS_Comp_Svc::servicesPanier::servicesPanier(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPanier = gcnew NS_Comp_Mappage::Panier();
}

NS_Comp_Svc::servicesArticleFacture::servicesArticleFacture(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticleFacture = gcnew NS_Comp_Mappage::Panier();
}

System::Data::DataSet^ NS_Comp_Svc::servicesPanier::SelectArticlePanier(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPanier->SelectArticlePanier();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::servicesPanier::InsertArticlePanier(System::String^ ref_article, System::String^ qtn_article, System::String^ ref_commande)
{
	System::String^ sql;

	this->oMappPanier->setRefArticle(ref_article);
	this->oMappPanier->setQtnArticle(qtn_article);
	this->oMappPanier->setRefCommande(ref_commande);

	sql = this->oMappPanier->InsertArticlePanier();

	this->oCad->actionRows(sql);
}


System::Data::DataSet^ NS_Comp_Svc::servicesArticleFacture::SelectArticleFacture(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticleFacture->SelectArticleFacture();
	return this->oCad->getRows(sql, dataTableName);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

NS_Comp_Svc::servicesSupprimerArticlePanier::servicesSupprimerArticlePanier(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappSupprimerArticlePanier = gcnew NS_Comp_Mappage::Panier();
}

void NS_Comp_Svc::servicesSupprimerArticlePanier::DeletetArticlePanier(System::String^ ref_article)
{
	System::String^ sql;

	this->oMappSupprimerArticlePanier->setRefArticle(ref_article);
	sql = this->oMappSupprimerArticlePanier->DeletetArticlePanier();
	this->oCad->actionRows(sql);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

NS_Comp_Svc::servicesUpdateArticlePanier::servicesUpdateArticlePanier(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappUpdateArticlePanier = gcnew NS_Comp_Mappage::Panier();
}

void NS_Comp_Svc::servicesUpdateArticlePanier::UpdateArticlePanier(System::String^ ref_article, System::String^qtn_article)
{
	System::String^ sql;
	this->oMappUpdateArticlePanier->setRefArticle(ref_article);
	this->oMappUpdateArticlePanier->setQtnArticle(qtn_article);
	sql = this->oMappUpdateArticlePanier->UpdateArticlePanier();
	this->oCad->actionRows(sql);
}
