#include "CLmapARTICLE.h"

void CLmapARTICLE::setRefArticle(System::String^ tmp) {
	this->refArticle = tmp;
}
void CLmapARTICLE::setNomArticle(System::String^ tmp) {
	this->nomArticle = tmp;
}
void CLmapARTICLE::setStock(int tmp) {
	this->stock = tmp;
}
void CLmapARTICLE::setPrixAchat(double tmp) {
	this->prixAchat = tmp;
}
void CLmapARTICLE::setPrixHT(double tmp) {
	this->prixHT = tmp;
}
void CLmapARTICLE::setPrixTTC(double tmp) {
	this->prixTTC = tmp;
}
void CLmapARTICLE::setDate(System::String^ tmp) {
	this->date = tmp;
}
void CLmapARTICLE::setMiniStock(int tmp) {
	this->miniStock = tmp;
}
void CLmapARTICLE::setIdType(int tmp) {
	this->id_type = tmp;
}
void CLmapARTICLE::setNomType(System::String^ tmp) {
	this->nomType = tmp;
}
void CLmapARTICLE::setTauxTVA(double tmp) {
	this->tauxTVA = tmp;
}
void CLmapARTICLE::setCouleur(System::String^ tmp) {
	this->couleur = tmp;
}
void CLmapARTICLE::setAdd(int tmp) {
	this->Add = tmp;
}

System::String^ CLmapARTICLE::creerArticle() {
	return "INSERT INTO article (ref_article, nom_article, stock_article ,prix_achat, prixHT_article, prixTTC_article, min_stock_article,id_type, couleur_article) VALUES ('" + this->refArticle + "','" + this->nomArticle + "','" + 0 + "','" + this->prixAchat + "','" + this->prixHT + "','" + this->prixTTC + "','" + 0 + "','" + this->id_type + "','" + this->couleur + "');";
}
System::String^ CLmapARTICLE::SelectAllArticle() {
	return "SELECT * FROM article WHERE nom_article != ' ';";
}
System::String^ CLmapARTICLE::SelectRefArticle() {
	return "SELECT * FROM article WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::SelectType() {
	return "Select id_type, nom_type, taux_TVA FROM TypeArticle;";
}
System::String^ CLmapARTICLE::creerHistoriqueArticle() {
	return "INSERT INTO HistoriqueArticlesPrix (prix_article, date_modif, ref_article) VALUES ('" + this->prixTTC + "', GETDATE() , '" + this->refArticle + "');";
}
System::String^ CLmapARTICLE::supprimerArticle() {
	return "UPDATE article SET nom_article = ' ' , stock_article = 0 , prix_achat = 0 , prixHT_article = 0 , prixTTC_article = 0 , date_reapro = NULL , min_stock_article = 0 , couleur_article = NULL WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierNomArticle() {
	return "UPDATE article SET nom_article = '" + this->nomArticle + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierPrixAchat() {
	return "UPDATE article SET prix_achat = '" + this->prixAchat + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierPrixHT() {
	return "UPDATE article SET prixHT_article = '" +this->prixHT + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierPrixTTC() {
	return "UPDATE article SET prixTTC_article = '" + this->prixTTC + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierCouleur() {
	return "UPDATE article SET couleur_article = '" + this->couleur + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierIdType() {
	return "UPDATE article SET id_type = '" + this->id_type + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::SelectArticleStock() {
	return "SELECT  ref_article ,nom_article ,stock_article ,date_reapro ,min_stock_article FROM dbo.article WHERE nom_article != ' '; ";
}
System::String^ CLmapARTICLE::SelectUnArticleStock() {
	return "SELECT  ref_article ,nom_article ,stock_article ,date_reapro ,min_stock_article FROM dbo.article WHERE ref_article = '" + this->refArticle + "'; ";
}
System::String^ CLmapARTICLE::modifierStockArticle() {
	return "UPDATE article SET stock_article = '" + this->stock + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierMiniStock() {
	return "UPDATE article SET min_stock_article = '" + this->miniStock + "' WHERE ref_article = '" + this->refArticle + "';";
}
System::String^ CLmapARTICLE::modifierDateReapr() {
	return "UPDATE article SET date_reapro = '" + this->date + "' WHERE ref_article = '" + this->refArticle + "';";
}
