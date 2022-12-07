#include "Panier.h"

System::String^ NS_Comp_Mappage::Panier::SelectArticlePanier(void)
{
	return "SELECT [ref_article], [qtn_article] FROM [ProjetPOO].[dbo].[contenir] WHERE qtn_article > 0";
}

System::String^ NS_Comp_Mappage::Panier::SelectArticleFacture(void)
{
	return "SELECT contenir.[ref_article], [qtn_article], [prixHT_article], [prixTTC_article] FROM contenir INNER JOIN Article ON contenir.ref_article = Article.ref_article ";
}

System::String^ NS_Comp_Mappage::Panier::InsertArticlePanier(void)
{
	return "INSERT INTO contenir (ref_article,qtn_article,ref_commande) VALUES('" + this->ref_article +"','"+ this->qtn_article  +"','"+ this->ref_commande + "')";
}

System::String^ NS_Comp_Mappage::Panier::DeletetArticlePanier(void)
{
	return "DELETE FROM [dbo].[contenir] WHERE ref_article = '" + this->ref_article + "';";
}

System::String^ NS_Comp_Mappage::Panier::UpdateArticlePanier(void)
{
	return "UPDATE contenir SET contenir.qtn_article = '" + this->qtn_article + "' WHERE contenir.ref_article =  '" + this->ref_article + "'";
}

void NS_Comp_Mappage::Panier::setRefArticle(System::String^ ref_article) { this->ref_article = ref_article; };
void NS_Comp_Mappage::Panier::setQtnArticle(System::String^ qtn_article) { this->qtn_article = qtn_article; };
void NS_Comp_Mappage::Panier::setRefCommande(System::String^ ref_commande) { this->ref_commande = ref_commande; };

System::String^ NS_Comp_Mappage::Panier::getRefArticle(void) { return this->ref_article; }
System::String^ NS_Comp_Mappage::Panier::getQtnArticle(void) { return this->qtn_article; }
System::String^ NS_Comp_Mappage::Panier::getRefCommande(void) { return this->ref_commande; }
