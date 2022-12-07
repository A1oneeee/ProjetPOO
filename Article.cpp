#include "Article.h"

System::String^ NS_Comp_Mappage::Article::SelectArticle(void)
{
	return"SELECT [ref_article], [nom_article], [stock_article], [prixHT_article], [date_reapro], [taux_TVA]  FROM Article INNER JOIN TypeArticle ON Article.id_type = TypeArticle.id_type";
}

System::String^ NS_Comp_Mappage::Article::SelectArticlePanier(void)
{
	return"SELECT [ref_article] FROM contenir INNER JOIN WHERE id_client = ";
}

System::String^ NS_Comp_Mappage::Article::UpdateStockArticle(void)
{
	return "UPDATE article SET stock_article = stock_article - (SELECT qtn_article FROM dbo.contenir WHERE ref_commande = 'RISE2022BRE1'AND contenir.ref_article = '"+ this->ref_article +"') FROM article INNER JOIN contenir ON article.ref_article = contenir.ref_article WHERE ref_commande = 'RISE2022BRE1' ";
}

void NS_Comp_Mappage::Article::setRefArticle(System::String^ ref_article) { this->ref_article = ref_article; };
System::String^ NS_Comp_Mappage::Article::getRefArticle(void) { return this->ref_article; };