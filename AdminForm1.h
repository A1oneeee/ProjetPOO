#pragma once

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class AdminForm1 : public System::Windows::Forms::Form
	{
	public:
		AdminForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AdminForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl_Admin;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDesStatistiques;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel_Statistiques;

	private: System::Windows::Forms::DataGridView^ DGV_Statistiques;
	private: System::Windows::Forms::Panel^ panel_LogoStat;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDuPersonnel;



	private: System::Windows::Forms::Panel^ panel_Personnel;
	private: System::Windows::Forms::Panel^ panel_LogoPersonnel;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDesCommandes;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDesClients;





	private: System::Windows::Forms::Panel^ panel_Clients;
	private: System::Windows::Forms::Panel^ panel_LogoClients;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDeArticle;



	private: System::Windows::Forms::Panel^ panel_Article;
	private: System::Windows::Forms::Panel^ panel_LogoArticle;



	private: System::Windows::Forms::Button^ btn_SeuilStat;
	private: System::Windows::Forms::Button^ btn_MoinsStat;


	private: System::Windows::Forms::Button^ btn_PlusStat;

	private: System::Windows::Forms::Label^ label_IDStat;
	private: System::Windows::Forms::TextBox^ txt_IDStat;
	private: System::Windows::Forms::Button^ btn_AchatClientStat;
	private: System::Windows::Forms::Button^ btn_PanierMoyenStat;




	private: System::Windows::Forms::DataGridView^ DGV_Personnel;

	private: System::Windows::Forms::Label^ label_Stat;
	private: System::Windows::Forms::Button^ btn_ModifierPersonnel;

	private: System::Windows::Forms::Button^ btn_AfficherPersonnel;
	private: System::Windows::Forms::Button^ btn_SupprimerPersonnel;
	private: System::Windows::Forms::Button^ btn_CreerPersonnel;





	private: System::Windows::Forms::Label^ label_Personnel;
	private: System::Windows::Forms::Label^ label_EmailPersonnel;

	private: System::Windows::Forms::Label^ label_PrenomPersonnel;

	private: System::Windows::Forms::Label^ label_NomPerosnnel;
	private: System::Windows::Forms::Label^ label_IDPersonnel;


	private: System::Windows::Forms::TextBox^ txt_PrenomPersonnel;
	private: System::Windows::Forms::Label^ label_DateEmbauchePersonnel;
	private: System::Windows::Forms::Label^ label_CodeSecuPersonnel;



	private: System::Windows::Forms::Label^ label_MDPPersonnel;
	private: System::Windows::Forms::TextBox^ txt_CodeSecuPersonnel;


	private: System::Windows::Forms::TextBox^ txt_MDPPersonnel;



	private: System::Windows::Forms::TextBox^ txt_EmailPersonnel;
	private: System::Windows::Forms::TextBox^ txt_DateEmbauchePersonnel;
	private: System::Windows::Forms::TextBox^ txt_NumPersonnel;



	private: System::Windows::Forms::TextBox^ txt_IDPersonnel;

	private: System::Windows::Forms::Panel^ panel_Commandes;

	private: System::Windows::Forms::DataGridView^ DGV_Commandes;
	private: System::Windows::Forms::Label^ label_Commandes;
	private: System::Windows::Forms::Panel^ panel_LogoCommande;

	private: System::Windows::Forms::Button^ btn_ModifierCommandes;

	private: System::Windows::Forms::Button^ btn_AfficherCommandes;
	private: System::Windows::Forms::Button^ btn_SupprimerCommandes;
	private: System::Windows::Forms::Button^ btn_CreerCommandes;



	private: System::Windows::Forms::TextBox^ txt_RemiseCommande;
	private: System::Windows::Forms::TextBox^ txt_MontantTVACommande;


	private: System::Windows::Forms::TextBox^ txt_PrixTTCCommande;

	private: System::Windows::Forms::TextBox^ txt_PrixHTCommande;

	private: System::Windows::Forms::TextBox^ txt_DateEmisionCommande;

	private: System::Windows::Forms::TextBox^ txt_DateLivraison;
	private: System::Windows::Forms::TextBox^ txt_DateCommande;
	private: System::Windows::Forms::Label^ label_RemiseCommande;

	private: System::Windows::Forms::Label^ label_MontantTVACommande;

	private: System::Windows::Forms::Label^ label_PrixTTCCommande;

	private: System::Windows::Forms::Label^ label_PrixHTCommande;

	private: System::Windows::Forms::Label^ label_DateEmisionCommande;

	private: System::Windows::Forms::Label^ label_DateLivraisonCommande;

	private: System::Windows::Forms::Label^ label_DateCommande;
	private: System::Windows::Forms::Button^ btn_ModifierClients;

	private: System::Windows::Forms::Button^ btn_AfficherClients;
	private: System::Windows::Forms::Button^ btn_SupprimerClients;
	private: System::Windows::Forms::Button^ btn_CreerClients;





	private: System::Windows::Forms::Label^ label_Clients;
	private: System::Windows::Forms::DataGridView^ DGV_Clients;
	private: System::Windows::Forms::Button^ btn_ModifierArticle;
	private: System::Windows::Forms::Button^ btn_AfficherArticle;
	private: System::Windows::Forms::Button^ btn_SupprimerArticle;
	private: System::Windows::Forms::Button^ btn_CreerArticle;








	private: System::Windows::Forms::TextBox^ txt_VilleClients;

	private: System::Windows::Forms::TextBox^ txt_EmailClients;


	private: System::Windows::Forms::TextBox^ txt_MDPClients;


	private: System::Windows::Forms::TextBox^ txt_PrénomClients;


	private: System::Windows::Forms::TextBox^ txt_IDClients;
	private: System::Windows::Forms::TextBox^ txt_NomClients;
	private: System::Windows::Forms::Label^ label_CodePostaleClients;





	private: System::Windows::Forms::Label^ label_VilleClients;
	private: System::Windows::Forms::Label^ label_NumeroRueClients;





	private: System::Windows::Forms::Label^ label_NomRueClients;

	private: System::Windows::Forms::Label^ label_IDClients;



	private: System::Windows::Forms::Label^ label_MDPClient;
	private: System::Windows::Forms::Label^ label_EmailClients;

	private: System::Windows::Forms::Label^ label_PrenomClients;

	private: System::Windows::Forms::Label^ label_NomClients;
	private: System::Windows::Forms::TextBox^ txt_NumeroRueClients;

	private: System::Windows::Forms::TextBox^ txt_NomRueClients;


	private: System::Windows::Forms::TextBox^ txt_CodePostaleClients;
	private: System::Windows::Forms::DataGridView^ DGV_Article;

	private: System::Windows::Forms::TextBox^ txt_IDCommande;
	private: System::Windows::Forms::Label^ label_IDCommande;
	private: System::Windows::Forms::TextBox^ txt_DateDePayementCommande;

	private: System::Windows::Forms::TextBox^ txt_MoyenDePayementCommande;
	private: System::Windows::Forms::Label^ label_DateDePayementCommande;


	private: System::Windows::Forms::Label^ label_MoyenDePayementCommande;

	private: System::Windows::Forms::Label^ label_RefArticle;
	private: System::Windows::Forms::Label^ label_GestionDeArticle;

	private: System::Windows::Forms::Label^ label_PrixTTCArticle;
	private: System::Windows::Forms::Label^ label_PrixHTArticle;

	private: System::Windows::Forms::Label^ label_NomArticle;
	private: System::Windows::Forms::CheckBox^ checkBox_Admin;
	private: System::Windows::Forms::Label^ label_IDSuppPersonnel;
	private: System::Windows::Forms::TextBox^ txt_IDSuppPersonnel;
	private: System::Windows::Forms::TextBox^ txt_DateDeNaissanceClients;



	private: System::Windows::Forms::Label^ label_DateDeNaissanceClients;

	private: System::Windows::Forms::TextBox^ txt_PrixHTArticle;
	private: System::Windows::Forms::TextBox^ txt_PrixTTCArticle;
	private: System::Windows::Forms::TextBox^ txt_NomArticle;
	private: System::Windows::Forms::TextBox^ txt_ReferenceArticle;
	private: System::Windows::Forms::TabPage^ tabPage_GestionDesStock;

	private: System::Windows::Forms::Panel^ panel_GestionDuStock;

	private: System::Windows::Forms::TextBox^ txt_Stock;



	private: System::Windows::Forms::TextBox^ txt_CouleurStock;

	private: System::Windows::Forms::TextBox^ txtRefArticleStock;

	private: System::Windows::Forms::Label^ label_GestionDuStock;
	private: System::Windows::Forms::DataGridView^ DGV_Stock;


	private: System::Windows::Forms::Button^ btn_ModifierStock;
	private: System::Windows::Forms::Button^ btn_AfficherStock;
	private: System::Windows::Forms::Button^ btn_SupprimerStock;
	private: System::Windows::Forms::Button^ btn_CreerStock;
	private: System::Windows::Forms::Panel^ panel_LogoStock;





	private: System::Windows::Forms::TextBox^ txt_NumeroRuePersonnel;
	private: System::Windows::Forms::TextBox^ txt_NumRuePersonnel;
	private: System::Windows::Forms::TextBox^ txt_CodePostalePersonnel;



	private: System::Windows::Forms::TextBox^ txt_VillePersonnel;
	private: System::Windows::Forms::Label^ label_CodePostalePersonnel;



	private: System::Windows::Forms::Label^ label_VillePersonnel;

	private: System::Windows::Forms::Label^ label_NumeroRuePersonnel;
	private: System::Windows::Forms::Label^ label_NumRuePersonnel;


	private: System::Windows::Forms::TextBox^ txt_AdressePersonnel;

	private: System::Windows::Forms::Label^ label_AdressePersonnel;
	private: System::Windows::Forms::TextBox^ txt_StockMin;

	private: System::Windows::Forms::Label^ label_DateReaproStock;
	private: System::Windows::Forms::Label^ label_StockMin;

	private: System::Windows::Forms::Label^ label_Stock;

	private: System::Windows::Forms::Label^ label_CouleurStock;

	private: System::Windows::Forms::Label^ label_RefArticleStock;
	private: System::Windows::Forms::TextBox^ txt_SateReappro;
	private: System::Windows::Forms::Label^ label_ValeurAchatStat;

	private: System::Windows::Forms::Button^ btn_ValeurAchatStat;
	private: System::Windows::Forms::Label^ label_ValeurCommercialStat;


	private: System::Windows::Forms::Button^ btn_ValeurCommercialStat;
	private: System::Windows::Forms::Label^ label_ChiffreAffaireStat;



	private: System::Windows::Forms::Button^ btn_ChiffreAffaireStat;
	private: System::Windows::Forms::Label^ label_PanierMoyen;
	private: System::Windows::Forms::Button^ btn_rafraichirStat;
	private: System::Windows::Forms::Button^ btn_RafraichirPersonnel;
	private: System::Windows::Forms::Button^ btn_RafraichirCommandes;
	private: System::Windows::Forms::Button^ btn_AfficherAdresseClients;

	private: System::Windows::Forms::Button^ btn_RafraichirArticle;
	private: System::Windows::Forms::Button^ btn_RafraichirStock;
	private: System::Windows::Forms::Button^ btn_AfficherPersonneClients;
	private: System::Windows::Forms::Button^ btn_AfficherClientClients;
	private: System::Windows::Forms::Button^ btn_aficcherPersonnePersonnel_;


	private: System::Windows::Forms::Button^ btn_AfficherClienPersonnel;
	private: System::Windows::Forms::Button^ btn_AfficherAdressePersonnel;

















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl_Admin = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_GestionDesStatistiques = (gcnew System::Windows::Forms::TabPage());
			this->panel_Statistiques = (gcnew System::Windows::Forms::Panel());
			this->btn_rafraichirStat = (gcnew System::Windows::Forms::Button());
			this->label_ValeurAchatStat = (gcnew System::Windows::Forms::Label());
			this->btn_ValeurAchatStat = (gcnew System::Windows::Forms::Button());
			this->label_ValeurCommercialStat = (gcnew System::Windows::Forms::Label());
			this->btn_ValeurCommercialStat = (gcnew System::Windows::Forms::Button());
			this->label_ChiffreAffaireStat = (gcnew System::Windows::Forms::Label());
			this->btn_ChiffreAffaireStat = (gcnew System::Windows::Forms::Button());
			this->label_PanierMoyen = (gcnew System::Windows::Forms::Label());
			this->label_Stat = (gcnew System::Windows::Forms::Label());
			this->btn_SeuilStat = (gcnew System::Windows::Forms::Button());
			this->btn_MoinsStat = (gcnew System::Windows::Forms::Button());
			this->btn_PlusStat = (gcnew System::Windows::Forms::Button());
			this->label_IDStat = (gcnew System::Windows::Forms::Label());
			this->txt_IDStat = (gcnew System::Windows::Forms::TextBox());
			this->btn_AchatClientStat = (gcnew System::Windows::Forms::Button());
			this->btn_PanierMoyenStat = (gcnew System::Windows::Forms::Button());
			this->DGV_Statistiques = (gcnew System::Windows::Forms::DataGridView());
			this->panel_LogoStat = (gcnew System::Windows::Forms::Panel());
			this->tabPage_GestionDuPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->panel_Personnel = (gcnew System::Windows::Forms::Panel());
			this->btn_aficcherPersonnePersonnel_ = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherClienPersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherAdressePersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_RafraichirPersonnel = (gcnew System::Windows::Forms::Button());
			this->txt_NumeroRuePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_NumRuePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_CodePostalePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_VillePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label_CodePostalePersonnel = (gcnew System::Windows::Forms::Label());
			this->label_VillePersonnel = (gcnew System::Windows::Forms::Label());
			this->label_NumeroRuePersonnel = (gcnew System::Windows::Forms::Label());
			this->label_NumRuePersonnel = (gcnew System::Windows::Forms::Label());
			this->txt_AdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label_AdressePersonnel = (gcnew System::Windows::Forms::Label());
			this->checkBox_Admin = (gcnew System::Windows::Forms::CheckBox());
			this->label_IDSuppPersonnel = (gcnew System::Windows::Forms::Label());
			this->txt_IDSuppPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_CodeSecuPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_MDPPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_EmailPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_DateEmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_NumPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_IDPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label_DateEmbauchePersonnel = (gcnew System::Windows::Forms::Label());
			this->label_CodeSecuPersonnel = (gcnew System::Windows::Forms::Label());
			this->label_MDPPersonnel = (gcnew System::Windows::Forms::Label());
			this->label_EmailPersonnel = (gcnew System::Windows::Forms::Label());
			this->label_PrenomPersonnel = (gcnew System::Windows::Forms::Label());
			this->label_NomPerosnnel = (gcnew System::Windows::Forms::Label());
			this->label_IDPersonnel = (gcnew System::Windows::Forms::Label());
			this->btn_ModifierPersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherPersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_SupprimerPersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_CreerPersonnel = (gcnew System::Windows::Forms::Button());
			this->label_Personnel = (gcnew System::Windows::Forms::Label());
			this->DGV_Personnel = (gcnew System::Windows::Forms::DataGridView());
			this->panel_LogoPersonnel = (gcnew System::Windows::Forms::Panel());
			this->tabPage_GestionDesCommandes = (gcnew System::Windows::Forms::TabPage());
			this->panel_Commandes = (gcnew System::Windows::Forms::Panel());
			this->btn_RafraichirCommandes = (gcnew System::Windows::Forms::Button());
			this->txt_IDCommande = (gcnew System::Windows::Forms::TextBox());
			this->label_IDCommande = (gcnew System::Windows::Forms::Label());
			this->txt_DateDePayementCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_MoyenDePayementCommande = (gcnew System::Windows::Forms::TextBox());
			this->label_DateDePayementCommande = (gcnew System::Windows::Forms::Label());
			this->label_MoyenDePayementCommande = (gcnew System::Windows::Forms::Label());
			this->txt_RemiseCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_MontantTVACommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_PrixTTCCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_PrixHTCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_DateEmisionCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_DateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->txt_DateCommande = (gcnew System::Windows::Forms::TextBox());
			this->label_RemiseCommande = (gcnew System::Windows::Forms::Label());
			this->label_MontantTVACommande = (gcnew System::Windows::Forms::Label());
			this->label_PrixTTCCommande = (gcnew System::Windows::Forms::Label());
			this->label_PrixHTCommande = (gcnew System::Windows::Forms::Label());
			this->label_DateEmisionCommande = (gcnew System::Windows::Forms::Label());
			this->label_DateLivraisonCommande = (gcnew System::Windows::Forms::Label());
			this->label_DateCommande = (gcnew System::Windows::Forms::Label());
			this->btn_ModifierCommandes = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherCommandes = (gcnew System::Windows::Forms::Button());
			this->btn_SupprimerCommandes = (gcnew System::Windows::Forms::Button());
			this->btn_CreerCommandes = (gcnew System::Windows::Forms::Button());
			this->DGV_Commandes = (gcnew System::Windows::Forms::DataGridView());
			this->label_Commandes = (gcnew System::Windows::Forms::Label());
			this->panel_LogoCommande = (gcnew System::Windows::Forms::Panel());
			this->tabPage_GestionDesClients = (gcnew System::Windows::Forms::TabPage());
			this->panel_Clients = (gcnew System::Windows::Forms::Panel());
			this->btn_AfficherPersonneClients = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherClientClients = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherAdresseClients = (gcnew System::Windows::Forms::Button());
			this->txt_DateDeNaissanceClients = (gcnew System::Windows::Forms::TextBox());
			this->label_DateDeNaissanceClients = (gcnew System::Windows::Forms::Label());
			this->txt_NumeroRueClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_NomRueClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_CodePostaleClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_VilleClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_EmailClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_MDPClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_PrénomClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_IDClients = (gcnew System::Windows::Forms::TextBox());
			this->txt_NomClients = (gcnew System::Windows::Forms::TextBox());
			this->label_CodePostaleClients = (gcnew System::Windows::Forms::Label());
			this->label_VilleClients = (gcnew System::Windows::Forms::Label());
			this->label_NumeroRueClients = (gcnew System::Windows::Forms::Label());
			this->label_NomRueClients = (gcnew System::Windows::Forms::Label());
			this->label_IDClients = (gcnew System::Windows::Forms::Label());
			this->label_MDPClient = (gcnew System::Windows::Forms::Label());
			this->label_EmailClients = (gcnew System::Windows::Forms::Label());
			this->label_PrenomClients = (gcnew System::Windows::Forms::Label());
			this->label_NomClients = (gcnew System::Windows::Forms::Label());
			this->btn_ModifierClients = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherClients = (gcnew System::Windows::Forms::Button());
			this->btn_SupprimerClients = (gcnew System::Windows::Forms::Button());
			this->btn_CreerClients = (gcnew System::Windows::Forms::Button());
			this->label_Clients = (gcnew System::Windows::Forms::Label());
			this->DGV_Clients = (gcnew System::Windows::Forms::DataGridView());
			this->panel_LogoClients = (gcnew System::Windows::Forms::Panel());
			this->tabPage_GestionDeArticle = (gcnew System::Windows::Forms::TabPage());
			this->panel_Article = (gcnew System::Windows::Forms::Panel());
			this->btn_RafraichirArticle = (gcnew System::Windows::Forms::Button());
			this->txt_PrixHTArticle = (gcnew System::Windows::Forms::TextBox());
			this->txt_PrixTTCArticle = (gcnew System::Windows::Forms::TextBox());
			this->txt_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->txt_ReferenceArticle = (gcnew System::Windows::Forms::TextBox());
			this->label_PrixTTCArticle = (gcnew System::Windows::Forms::Label());
			this->label_PrixHTArticle = (gcnew System::Windows::Forms::Label());
			this->label_NomArticle = (gcnew System::Windows::Forms::Label());
			this->label_RefArticle = (gcnew System::Windows::Forms::Label());
			this->label_GestionDeArticle = (gcnew System::Windows::Forms::Label());
			this->DGV_Article = (gcnew System::Windows::Forms::DataGridView());
			this->btn_ModifierArticle = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherArticle = (gcnew System::Windows::Forms::Button());
			this->btn_SupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->btn_CreerArticle = (gcnew System::Windows::Forms::Button());
			this->panel_LogoArticle = (gcnew System::Windows::Forms::Panel());
			this->tabPage_GestionDesStock = (gcnew System::Windows::Forms::TabPage());
			this->panel_GestionDuStock = (gcnew System::Windows::Forms::Panel());
			this->btn_RafraichirStock = (gcnew System::Windows::Forms::Button());
			this->txt_SateReappro = (gcnew System::Windows::Forms::TextBox());
			this->txt_StockMin = (gcnew System::Windows::Forms::TextBox());
			this->label_DateReaproStock = (gcnew System::Windows::Forms::Label());
			this->label_StockMin = (gcnew System::Windows::Forms::Label());
			this->label_Stock = (gcnew System::Windows::Forms::Label());
			this->label_CouleurStock = (gcnew System::Windows::Forms::Label());
			this->label_RefArticleStock = (gcnew System::Windows::Forms::Label());
			this->txt_Stock = (gcnew System::Windows::Forms::TextBox());
			this->txt_CouleurStock = (gcnew System::Windows::Forms::TextBox());
			this->txtRefArticleStock = (gcnew System::Windows::Forms::TextBox());
			this->label_GestionDuStock = (gcnew System::Windows::Forms::Label());
			this->DGV_Stock = (gcnew System::Windows::Forms::DataGridView());
			this->btn_ModifierStock = (gcnew System::Windows::Forms::Button());
			this->btn_AfficherStock = (gcnew System::Windows::Forms::Button());
			this->btn_SupprimerStock = (gcnew System::Windows::Forms::Button());
			this->btn_CreerStock = (gcnew System::Windows::Forms::Button());
			this->panel_LogoStock = (gcnew System::Windows::Forms::Panel());
			this->tabControl_Admin->SuspendLayout();
			this->tabPage_GestionDesStatistiques->SuspendLayout();
			this->panel_Statistiques->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Statistiques))->BeginInit();
			this->tabPage_GestionDuPersonnel->SuspendLayout();
			this->panel_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Personnel))->BeginInit();
			this->tabPage_GestionDesCommandes->SuspendLayout();
			this->panel_Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Commandes))->BeginInit();
			this->tabPage_GestionDesClients->SuspendLayout();
			this->panel_Clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Clients))->BeginInit();
			this->tabPage_GestionDeArticle->SuspendLayout();
			this->panel_Article->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Article))->BeginInit();
			this->tabPage_GestionDesStock->SuspendLayout();
			this->panel_GestionDuStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Stock))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl_Admin
			// 
			this->tabControl_Admin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDesStatistiques);
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDuPersonnel);
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDesCommandes);
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDesClients);
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDeArticle);
			this->tabControl_Admin->Controls->Add(this->tabPage_GestionDesStock);
			this->tabControl_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl_Admin->Location = System::Drawing::Point(0, 2);
			this->tabControl_Admin->Name = L"tabControl_Admin";
			this->tabControl_Admin->SelectedIndex = 0;
			this->tabControl_Admin->Size = System::Drawing::Size(1149, 529);
			this->tabControl_Admin->TabIndex = 1;
			// 
			// tabPage_GestionDesStatistiques
			// 
			this->tabPage_GestionDesStatistiques->BackColor = System::Drawing::Color::Transparent;
			this->tabPage_GestionDesStatistiques->Controls->Add(this->panel_Statistiques);
			this->tabPage_GestionDesStatistiques->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage_GestionDesStatistiques->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage_GestionDesStatistiques->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDesStatistiques->Name = L"tabPage_GestionDesStatistiques";
			this->tabPage_GestionDesStatistiques->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDesStatistiques->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDesStatistiques->TabIndex = 0;
			this->tabPage_GestionDesStatistiques->Text = L"Gestion des statisques";
			// 
			// panel_Statistiques
			// 
			this->panel_Statistiques->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Statistiques.BackgroundImage")));
			this->panel_Statistiques->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_Statistiques->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Statistiques->Controls->Add(this->btn_rafraichirStat);
			this->panel_Statistiques->Controls->Add(this->label_ValeurAchatStat);
			this->panel_Statistiques->Controls->Add(this->btn_ValeurAchatStat);
			this->panel_Statistiques->Controls->Add(this->label_ValeurCommercialStat);
			this->panel_Statistiques->Controls->Add(this->btn_ValeurCommercialStat);
			this->panel_Statistiques->Controls->Add(this->label_ChiffreAffaireStat);
			this->panel_Statistiques->Controls->Add(this->btn_ChiffreAffaireStat);
			this->panel_Statistiques->Controls->Add(this->label_PanierMoyen);
			this->panel_Statistiques->Controls->Add(this->label_Stat);
			this->panel_Statistiques->Controls->Add(this->btn_SeuilStat);
			this->panel_Statistiques->Controls->Add(this->btn_MoinsStat);
			this->panel_Statistiques->Controls->Add(this->btn_PlusStat);
			this->panel_Statistiques->Controls->Add(this->label_IDStat);
			this->panel_Statistiques->Controls->Add(this->txt_IDStat);
			this->panel_Statistiques->Controls->Add(this->btn_AchatClientStat);
			this->panel_Statistiques->Controls->Add(this->btn_PanierMoyenStat);
			this->panel_Statistiques->Controls->Add(this->DGV_Statistiques);
			this->panel_Statistiques->Controls->Add(this->panel_LogoStat);
			this->panel_Statistiques->Location = System::Drawing::Point(-14, -52);
			this->panel_Statistiques->Name = L"panel_Statistiques";
			this->panel_Statistiques->Size = System::Drawing::Size(963, 522);
			this->panel_Statistiques->TabIndex = 2;
			// 
			// btn_rafraichirStat
			// 
			this->btn_rafraichirStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_rafraichirStat->Location = System::Drawing::Point(757, 418);
			this->btn_rafraichirStat->Name = L"btn_rafraichirStat";
			this->btn_rafraichirStat->Size = System::Drawing::Size(170, 42);
			this->btn_rafraichirStat->TabIndex = 18;
			this->btn_rafraichirStat->Text = L"Rafraichir";
			this->btn_rafraichirStat->UseVisualStyleBackColor = true;
			// 
			// label_ValeurAchatStat
			// 
			this->label_ValeurAchatStat->AutoSize = true;
			this->label_ValeurAchatStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_ValeurAchatStat->ForeColor = System::Drawing::SystemColors::Control;
			this->label_ValeurAchatStat->Location = System::Drawing::Point(338, 392);
			this->label_ValeurAchatStat->Name = L"label_ValeurAchatStat";
			this->label_ValeurAchatStat->Size = System::Drawing::Size(113, 20);
			this->label_ValeurAchatStat->TabIndex = 17;
			this->label_ValeurAchatStat->Text = L"valeur d\'achat";
			// 
			// btn_ValeurAchatStat
			// 
			this->btn_ValeurAchatStat->Location = System::Drawing::Point(314, 353);
			this->btn_ValeurAchatStat->Name = L"btn_ValeurAchatStat";
			this->btn_ValeurAchatStat->Size = System::Drawing::Size(169, 36);
			this->btn_ValeurAchatStat->TabIndex = 16;
			this->btn_ValeurAchatStat->Text = L"Calcul valeur achat";
			this->btn_ValeurAchatStat->UseVisualStyleBackColor = true;
			// 
			// label_ValeurCommercialStat
			// 
			this->label_ValeurCommercialStat->AutoSize = true;
			this->label_ValeurCommercialStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_ValeurCommercialStat->ForeColor = System::Drawing::SystemColors::Control;
			this->label_ValeurCommercialStat->Location = System::Drawing::Point(159, 392);
			this->label_ValeurCommercialStat->Name = L"label_ValeurCommercialStat";
			this->label_ValeurCommercialStat->Size = System::Drawing::Size(149, 20);
			this->label_ValeurCommercialStat->TabIndex = 15;
			this->label_ValeurCommercialStat->Text = L"Valeur commercial";
			// 
			// btn_ValeurCommercialStat
			// 
			this->btn_ValeurCommercialStat->Location = System::Drawing::Point(145, 353);
			this->btn_ValeurCommercialStat->Name = L"btn_ValeurCommercialStat";
			this->btn_ValeurCommercialStat->Size = System::Drawing::Size(158, 36);
			this->btn_ValeurCommercialStat->TabIndex = 14;
			this->btn_ValeurCommercialStat->Text = L"Calcul valeur commercial";
			this->btn_ValeurCommercialStat->UseVisualStyleBackColor = true;
			// 
			// label_ChiffreAffaireStat
			// 
			this->label_ChiffreAffaireStat->AutoSize = true;
			this->label_ChiffreAffaireStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_ChiffreAffaireStat->ForeColor = System::Drawing::SystemColors::Control;
			this->label_ChiffreAffaireStat->Location = System::Drawing::Point(338, 330);
			this->label_ChiffreAffaireStat->Name = L"label_ChiffreAffaireStat";
			this->label_ChiffreAffaireStat->Size = System::Drawing::Size(124, 20);
			this->label_ChiffreAffaireStat->TabIndex = 13;
			this->label_ChiffreAffaireStat->Text = L"Chiffre d\'affaire";
			// 
			// btn_ChiffreAffaireStat
			// 
			this->btn_ChiffreAffaireStat->Location = System::Drawing::Point(314, 291);
			this->btn_ChiffreAffaireStat->Name = L"btn_ChiffreAffaireStat";
			this->btn_ChiffreAffaireStat->Size = System::Drawing::Size(168, 36);
			this->btn_ChiffreAffaireStat->TabIndex = 12;
			this->btn_ChiffreAffaireStat->Text = L"Calcul chiffre d\'affaire";
			this->btn_ChiffreAffaireStat->UseVisualStyleBackColor = true;
			// 
			// label_PanierMoyen
			// 
			this->label_PanierMoyen->AutoSize = true;
			this->label_PanierMoyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PanierMoyen->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PanierMoyen->Location = System::Drawing::Point(159, 330);
			this->label_PanierMoyen->Name = L"label_PanierMoyen";
			this->label_PanierMoyen->Size = System::Drawing::Size(144, 20);
			this->label_PanierMoyen->TabIndex = 11;
			this->label_PanierMoyen->Text = L"Stat panier moyen";
			// 
			// label_Stat
			// 
			this->label_Stat->AutoSize = true;
			this->label_Stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Stat->Location = System::Drawing::Point(70, 33);
			this->label_Stat->Name = L"label_Stat";
			this->label_Stat->Size = System::Drawing::Size(268, 29);
			this->label_Stat->TabIndex = 10;
			this->label_Stat->Text = L"Gestion des statistiques";
			// 
			// btn_SeuilStat
			// 
			this->btn_SeuilStat->Location = System::Drawing::Point(145, 95);
			this->btn_SeuilStat->Name = L"btn_SeuilStat";
			this->btn_SeuilStat->Size = System::Drawing::Size(337, 36);
			this->btn_SeuilStat->TabIndex = 9;
			this->btn_SeuilStat->Text = L"Produits sous le seuil de rapprovisionnement";
			this->btn_SeuilStat->UseVisualStyleBackColor = true;
			// 
			// btn_MoinsStat
			// 
			this->btn_MoinsStat->Location = System::Drawing::Point(145, 249);
			this->btn_MoinsStat->Name = L"btn_MoinsStat";
			this->btn_MoinsStat->Size = System::Drawing::Size(337, 36);
			this->btn_MoinsStat->TabIndex = 8;
			this->btn_MoinsStat->Text = L"Articles les moins vendues";
			this->btn_MoinsStat->UseVisualStyleBackColor = true;
			// 
			// btn_PlusStat
			// 
			this->btn_PlusStat->Location = System::Drawing::Point(145, 207);
			this->btn_PlusStat->Name = L"btn_PlusStat";
			this->btn_PlusStat->Size = System::Drawing::Size(337, 36);
			this->btn_PlusStat->TabIndex = 7;
			this->btn_PlusStat->Text = L"Articles les plus vendues";
			this->btn_PlusStat->UseVisualStyleBackColor = true;
			// 
			// label_IDStat
			// 
			this->label_IDStat->AutoSize = true;
			this->label_IDStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_IDStat->ForeColor = System::Drawing::Color::White;
			this->label_IDStat->Location = System::Drawing::Point(141, 137);
			this->label_IDStat->Name = L"label_IDStat";
			this->label_IDStat->Size = System::Drawing::Size(81, 20);
			this->label_IDStat->TabIndex = 6;
			this->label_IDStat->Text = L"ID client :";
			// 
			// txt_IDStat
			// 
			this->txt_IDStat->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_IDStat->Location = System::Drawing::Point(218, 137);
			this->txt_IDStat->Multiline = true;
			this->txt_IDStat->Name = L"txt_IDStat";
			this->txt_IDStat->Size = System::Drawing::Size(264, 22);
			this->txt_IDStat->TabIndex = 5;
			this->txt_IDStat->Text = L"Entrer ID";
			this->txt_IDStat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_AchatClientStat
			// 
			this->btn_AchatClientStat->Location = System::Drawing::Point(145, 165);
			this->btn_AchatClientStat->Name = L"btn_AchatClientStat";
			this->btn_AchatClientStat->Size = System::Drawing::Size(337, 36);
			this->btn_AchatClientStat->TabIndex = 4;
			this->btn_AchatClientStat->Text = L"Montant total des achat du client";
			this->btn_AchatClientStat->UseVisualStyleBackColor = true;
			// 
			// btn_PanierMoyenStat
			// 
			this->btn_PanierMoyenStat->Location = System::Drawing::Point(145, 291);
			this->btn_PanierMoyenStat->Name = L"btn_PanierMoyenStat";
			this->btn_PanierMoyenStat->Size = System::Drawing::Size(158, 36);
			this->btn_PanierMoyenStat->TabIndex = 3;
			this->btn_PanierMoyenStat->Text = L"Calcul panier moyen";
			this->btn_PanierMoyenStat->UseVisualStyleBackColor = true;
			// 
			// DGV_Statistiques
			// 
			this->DGV_Statistiques->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Statistiques->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->DGV_Statistiques->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Statistiques->DefaultCellStyle = dataGridViewCellStyle14;
			this->DGV_Statistiques->Location = System::Drawing::Point(488, 84);
			this->DGV_Statistiques->Name = L"DGV_Statistiques";
			this->DGV_Statistiques->RowHeadersWidth = 51;
			this->DGV_Statistiques->RowTemplate->Height = 24;
			this->DGV_Statistiques->Size = System::Drawing::Size(309, 314);
			this->DGV_Statistiques->TabIndex = 1;
			// 
			// panel_LogoStat
			// 
			this->panel_LogoStat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoStat->Location = System::Drawing::Point(797, 15);
			this->panel_LogoStat->Name = L"panel_LogoStat";
			this->panel_LogoStat->Size = System::Drawing::Size(95, 47);
			this->panel_LogoStat->TabIndex = 0;
			// 
			// tabPage_GestionDuPersonnel
			// 
			this->tabPage_GestionDuPersonnel->Controls->Add(this->panel_Personnel);
			this->tabPage_GestionDuPersonnel->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDuPersonnel->Name = L"tabPage_GestionDuPersonnel";
			this->tabPage_GestionDuPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDuPersonnel->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDuPersonnel->TabIndex = 1;
			this->tabPage_GestionDuPersonnel->Text = L"Gestion du personnel";
			this->tabPage_GestionDuPersonnel->UseVisualStyleBackColor = true;
			// 
			// panel_Personnel
			// 
			this->panel_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Personnel.BackgroundImage")));
			this->panel_Personnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_Personnel->Controls->Add(this->btn_aficcherPersonnePersonnel_);
			this->panel_Personnel->Controls->Add(this->btn_AfficherClienPersonnel);
			this->panel_Personnel->Controls->Add(this->btn_AfficherAdressePersonnel);
			this->panel_Personnel->Controls->Add(this->btn_RafraichirPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_NumeroRuePersonnel);
			this->panel_Personnel->Controls->Add(this->txt_NumRuePersonnel);
			this->panel_Personnel->Controls->Add(this->txt_CodePostalePersonnel);
			this->panel_Personnel->Controls->Add(this->txt_VillePersonnel);
			this->panel_Personnel->Controls->Add(this->label_CodePostalePersonnel);
			this->panel_Personnel->Controls->Add(this->label_VillePersonnel);
			this->panel_Personnel->Controls->Add(this->label_NumeroRuePersonnel);
			this->panel_Personnel->Controls->Add(this->label_NumRuePersonnel);
			this->panel_Personnel->Controls->Add(this->txt_AdressePersonnel);
			this->panel_Personnel->Controls->Add(this->label_AdressePersonnel);
			this->panel_Personnel->Controls->Add(this->checkBox_Admin);
			this->panel_Personnel->Controls->Add(this->label_IDSuppPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_IDSuppPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_CodeSecuPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_MDPPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_EmailPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_DateEmbauchePersonnel);
			this->panel_Personnel->Controls->Add(this->txt_NumPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_IDPersonnel);
			this->panel_Personnel->Controls->Add(this->txt_PrenomPersonnel);
			this->panel_Personnel->Controls->Add(this->label_DateEmbauchePersonnel);
			this->panel_Personnel->Controls->Add(this->label_CodeSecuPersonnel);
			this->panel_Personnel->Controls->Add(this->label_MDPPersonnel);
			this->panel_Personnel->Controls->Add(this->label_EmailPersonnel);
			this->panel_Personnel->Controls->Add(this->label_PrenomPersonnel);
			this->panel_Personnel->Controls->Add(this->label_NomPerosnnel);
			this->panel_Personnel->Controls->Add(this->label_IDPersonnel);
			this->panel_Personnel->Controls->Add(this->btn_ModifierPersonnel);
			this->panel_Personnel->Controls->Add(this->btn_AfficherPersonnel);
			this->panel_Personnel->Controls->Add(this->btn_SupprimerPersonnel);
			this->panel_Personnel->Controls->Add(this->btn_CreerPersonnel);
			this->panel_Personnel->Controls->Add(this->label_Personnel);
			this->panel_Personnel->Controls->Add(this->DGV_Personnel);
			this->panel_Personnel->Controls->Add(this->panel_LogoPersonnel);
			this->panel_Personnel->Location = System::Drawing::Point(0, 0);
			this->panel_Personnel->Name = L"panel_Personnel";
			this->panel_Personnel->Size = System::Drawing::Size(960, 479);
			this->panel_Personnel->TabIndex = 1;
			// 
			// btn_aficcherPersonnePersonnel_
			// 
			this->btn_aficcherPersonnePersonnel_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_aficcherPersonnePersonnel_->Location = System::Drawing::Point(584, 421);
			this->btn_aficcherPersonnePersonnel_->Name = L"btn_aficcherPersonnePersonnel_";
			this->btn_aficcherPersonnePersonnel_->Size = System::Drawing::Size(153, 30);
			this->btn_aficcherPersonnePersonnel_->TabIndex = 47;
			this->btn_aficcherPersonnePersonnel_->Text = L"Afficher personne";
			this->btn_aficcherPersonnePersonnel_->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherClienPersonnel
			// 
			this->btn_AfficherClienPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_AfficherClienPersonnel->Location = System::Drawing::Point(266, 422);
			this->btn_AfficherClienPersonnel->Name = L"btn_AfficherClienPersonnel";
			this->btn_AfficherClienPersonnel->Size = System::Drawing::Size(153, 30);
			this->btn_AfficherClienPersonnel->TabIndex = 46;
			this->btn_AfficherClienPersonnel->Text = L"Afficher Client";
			this->btn_AfficherClienPersonnel->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherAdressePersonnel
			// 
			this->btn_AfficherAdressePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_AfficherAdressePersonnel->Location = System::Drawing::Point(425, 421);
			this->btn_AfficherAdressePersonnel->Name = L"btn_AfficherAdressePersonnel";
			this->btn_AfficherAdressePersonnel->Size = System::Drawing::Size(153, 30);
			this->btn_AfficherAdressePersonnel->TabIndex = 45;
			this->btn_AfficherAdressePersonnel->Text = L"Afficher Adresse";
			this->btn_AfficherAdressePersonnel->UseVisualStyleBackColor = true;
			// 
			// btn_RafraichirPersonnel
			// 
			this->btn_RafraichirPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_RafraichirPersonnel->Location = System::Drawing::Point(743, 414);
			this->btn_RafraichirPersonnel->Name = L"btn_RafraichirPersonnel";
			this->btn_RafraichirPersonnel->Size = System::Drawing::Size(170, 42);
			this->btn_RafraichirPersonnel->TabIndex = 41;
			this->btn_RafraichirPersonnel->Text = L"Rafraichir";
			this->btn_RafraichirPersonnel->UseVisualStyleBackColor = true;
			// 
			// txt_NumeroRuePersonnel
			// 
			this->txt_NumeroRuePersonnel->Location = System::Drawing::Point(172, 334);
			this->txt_NumeroRuePersonnel->Name = L"txt_NumeroRuePersonnel";
			this->txt_NumeroRuePersonnel->Size = System::Drawing::Size(152, 22);
			this->txt_NumeroRuePersonnel->TabIndex = 40;
			// 
			// txt_NumRuePersonnel
			// 
			this->txt_NumRuePersonnel->Location = System::Drawing::Point(336, 333);
			this->txt_NumRuePersonnel->Name = L"txt_NumRuePersonnel";
			this->txt_NumRuePersonnel->Size = System::Drawing::Size(152, 22);
			this->txt_NumRuePersonnel->TabIndex = 39;
			// 
			// txt_CodePostalePersonnel
			// 
			this->txt_CodePostalePersonnel->Location = System::Drawing::Point(339, 382);
			this->txt_CodePostalePersonnel->Name = L"txt_CodePostalePersonnel";
			this->txt_CodePostalePersonnel->Size = System::Drawing::Size(152, 22);
			this->txt_CodePostalePersonnel->TabIndex = 38;
			// 
			// txt_VillePersonnel
			// 
			this->txt_VillePersonnel->Location = System::Drawing::Point(169, 382);
			this->txt_VillePersonnel->Name = L"txt_VillePersonnel";
			this->txt_VillePersonnel->Size = System::Drawing::Size(152, 22);
			this->txt_VillePersonnel->TabIndex = 37;
			// 
			// label_CodePostalePersonnel
			// 
			this->label_CodePostalePersonnel->AutoSize = true;
			this->label_CodePostalePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_CodePostalePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_CodePostalePersonnel->Location = System::Drawing::Point(335, 359);
			this->label_CodePostalePersonnel->Name = L"label_CodePostalePersonnel";
			this->label_CodePostalePersonnel->Size = System::Drawing::Size(117, 20);
			this->label_CodePostalePersonnel->TabIndex = 36;
			this->label_CodePostalePersonnel->Text = L"Code postale :";
			// 
			// label_VillePersonnel
			// 
			this->label_VillePersonnel->AutoSize = true;
			this->label_VillePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_VillePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_VillePersonnel->Location = System::Drawing::Point(168, 359);
			this->label_VillePersonnel->Name = L"label_VillePersonnel";
			this->label_VillePersonnel->Size = System::Drawing::Size(51, 20);
			this->label_VillePersonnel->TabIndex = 35;
			this->label_VillePersonnel->Text = L"Ville :";
			// 
			// label_NumeroRuePersonnel
			// 
			this->label_NumeroRuePersonnel->AutoSize = true;
			this->label_NumeroRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NumeroRuePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NumeroRuePersonnel->Location = System::Drawing::Point(168, 310);
			this->label_NumeroRuePersonnel->Name = L"label_NumeroRuePersonnel";
			this->label_NumeroRuePersonnel->Size = System::Drawing::Size(113, 20);
			this->label_NumeroRuePersonnel->TabIndex = 34;
			this->label_NumeroRuePersonnel->Text = L"Numéro Rue :";
			// 
			// label_NumRuePersonnel
			// 
			this->label_NumRuePersonnel->AutoSize = true;
			this->label_NumRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NumRuePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NumRuePersonnel->Location = System::Drawing::Point(335, 310);
			this->label_NumRuePersonnel->Name = L"label_NumRuePersonnel";
			this->label_NumRuePersonnel->Size = System::Drawing::Size(83, 20);
			this->label_NumRuePersonnel->TabIndex = 33;
			this->label_NumRuePersonnel->Text = L"Nom rue :";
			// 
			// txt_AdressePersonnel
			// 
			this->txt_AdressePersonnel->Location = System::Drawing::Point(328, 237);
			this->txt_AdressePersonnel->Name = L"txt_AdressePersonnel";
			this->txt_AdressePersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_AdressePersonnel->TabIndex = 25;
			// 
			// label_AdressePersonnel
			// 
			this->label_AdressePersonnel->AutoSize = true;
			this->label_AdressePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_AdressePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_AdressePersonnel->Location = System::Drawing::Point(324, 214);
			this->label_AdressePersonnel->Name = L"label_AdressePersonnel";
			this->label_AdressePersonnel->Size = System::Drawing::Size(81, 20);
			this->label_AdressePersonnel->TabIndex = 24;
			this->label_AdressePersonnel->Text = L"Adresse :";
			// 
			// checkBox_Admin
			// 
			this->checkBox_Admin->AutoSize = true;
			this->checkBox_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_Admin->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox_Admin->Location = System::Drawing::Point(413, 283);
			this->checkBox_Admin->Name = L"checkBox_Admin";
			this->checkBox_Admin->Size = System::Drawing::Size(78, 24);
			this->checkBox_Admin->TabIndex = 23;
			this->checkBox_Admin->Text = L"Admin";
			this->checkBox_Admin->UseVisualStyleBackColor = true;
			// 
			// label_IDSuppPersonnel
			// 
			this->label_IDSuppPersonnel->AutoSize = true;
			this->label_IDSuppPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IDSuppPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_IDSuppPersonnel->Location = System::Drawing::Point(148, 262);
			this->label_IDSuppPersonnel->Name = L"label_IDSuppPersonnel";
			this->label_IDSuppPersonnel->Size = System::Drawing::Size(77, 20);
			this->label_IDSuppPersonnel->TabIndex = 22;
			this->label_IDSuppPersonnel->Text = L"ID supp :";
			// 
			// txt_IDSuppPersonnel
			// 
			this->txt_IDSuppPersonnel->Location = System::Drawing::Point(152, 285);
			this->txt_IDSuppPersonnel->Name = L"txt_IDSuppPersonnel";
			this->txt_IDSuppPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_IDSuppPersonnel->TabIndex = 21;
			// 
			// txt_CodeSecuPersonnel
			// 
			this->txt_CodeSecuPersonnel->Location = System::Drawing::Point(152, 237);
			this->txt_CodeSecuPersonnel->Name = L"txt_CodeSecuPersonnel";
			this->txt_CodeSecuPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_CodeSecuPersonnel->TabIndex = 20;
			// 
			// txt_MDPPersonnel
			// 
			this->txt_MDPPersonnel->Location = System::Drawing::Point(152, 189);
			this->txt_MDPPersonnel->Name = L"txt_MDPPersonnel";
			this->txt_MDPPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_MDPPersonnel->TabIndex = 19;
			// 
			// txt_EmailPersonnel
			// 
			this->txt_EmailPersonnel->Location = System::Drawing::Point(328, 189);
			this->txt_EmailPersonnel->Name = L"txt_EmailPersonnel";
			this->txt_EmailPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_EmailPersonnel->TabIndex = 18;
			// 
			// txt_DateEmbauchePersonnel
			// 
			this->txt_DateEmbauchePersonnel->Location = System::Drawing::Point(328, 141);
			this->txt_DateEmbauchePersonnel->Name = L"txt_DateEmbauchePersonnel";
			this->txt_DateEmbauchePersonnel->Size = System::Drawing::Size(167, 22);
			this->txt_DateEmbauchePersonnel->TabIndex = 17;
			// 
			// txt_NumPersonnel
			// 
			this->txt_NumPersonnel->Location = System::Drawing::Point(328, 93);
			this->txt_NumPersonnel->Name = L"txt_NumPersonnel";
			this->txt_NumPersonnel->Size = System::Drawing::Size(167, 22);
			this->txt_NumPersonnel->TabIndex = 16;
			// 
			// txt_IDPersonnel
			// 
			this->txt_IDPersonnel->Location = System::Drawing::Point(152, 93);
			this->txt_IDPersonnel->Name = L"txt_IDPersonnel";
			this->txt_IDPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_IDPersonnel->TabIndex = 15;
			// 
			// txt_PrenomPersonnel
			// 
			this->txt_PrenomPersonnel->Location = System::Drawing::Point(152, 141);
			this->txt_PrenomPersonnel->Name = L"txt_PrenomPersonnel";
			this->txt_PrenomPersonnel->Size = System::Drawing::Size(163, 22);
			this->txt_PrenomPersonnel->TabIndex = 14;
			// 
			// label_DateEmbauchePersonnel
			// 
			this->label_DateEmbauchePersonnel->AutoSize = true;
			this->label_DateEmbauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateEmbauchePersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateEmbauchePersonnel->Location = System::Drawing::Point(324, 118);
			this->label_DateEmbauchePersonnel->Name = L"label_DateEmbauchePersonnel";
			this->label_DateEmbauchePersonnel->Size = System::Drawing::Size(150, 20);
			this->label_DateEmbauchePersonnel->TabIndex = 13;
			this->label_DateEmbauchePersonnel->Text = L"Date d\'embauche :";
			// 
			// label_CodeSecuPersonnel
			// 
			this->label_CodeSecuPersonnel->AutoSize = true;
			this->label_CodeSecuPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_CodeSecuPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_CodeSecuPersonnel->Location = System::Drawing::Point(148, 214);
			this->label_CodeSecuPersonnel->Name = L"label_CodeSecuPersonnel";
			this->label_CodeSecuPersonnel->Size = System::Drawing::Size(181, 20);
			this->label_CodeSecuPersonnel->TabIndex = 12;
			this->label_CodeSecuPersonnel->Text = L"Code sécurité sociale :";
			// 
			// label_MDPPersonnel
			// 
			this->label_MDPPersonnel->AutoSize = true;
			this->label_MDPPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_MDPPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_MDPPersonnel->Location = System::Drawing::Point(148, 166);
			this->label_MDPPersonnel->Name = L"label_MDPPersonnel";
			this->label_MDPPersonnel->Size = System::Drawing::Size(120, 20);
			this->label_MDPPersonnel->TabIndex = 11;
			this->label_MDPPersonnel->Text = L"Mot de passe :";
			// 
			// label_EmailPersonnel
			// 
			this->label_EmailPersonnel->AutoSize = true;
			this->label_EmailPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_EmailPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_EmailPersonnel->Location = System::Drawing::Point(324, 166);
			this->label_EmailPersonnel->Name = L"label_EmailPersonnel";
			this->label_EmailPersonnel->Size = System::Drawing::Size(67, 20);
			this->label_EmailPersonnel->TabIndex = 10;
			this->label_EmailPersonnel->Text = L"E-mail :";
			// 
			// label_PrenomPersonnel
			// 
			this->label_PrenomPersonnel->AutoSize = true;
			this->label_PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrenomPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrenomPersonnel->Location = System::Drawing::Point(148, 118);
			this->label_PrenomPersonnel->Name = L"label_PrenomPersonnel";
			this->label_PrenomPersonnel->Size = System::Drawing::Size(77, 20);
			this->label_PrenomPersonnel->TabIndex = 9;
			this->label_PrenomPersonnel->Text = L"Prénom :";
			// 
			// label_NomPerosnnel
			// 
			this->label_NomPerosnnel->AutoSize = true;
			this->label_NomPerosnnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NomPerosnnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NomPerosnnel->Location = System::Drawing::Point(324, 70);
			this->label_NomPerosnnel->Name = L"label_NomPerosnnel";
			this->label_NomPerosnnel->Size = System::Drawing::Size(54, 20);
			this->label_NomPerosnnel->TabIndex = 8;
			this->label_NomPerosnnel->Text = L"Nom :";
			// 
			// label_IDPersonnel
			// 
			this->label_IDPersonnel->AutoSize = true;
			this->label_IDPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IDPersonnel->ForeColor = System::Drawing::SystemColors::Control;
			this->label_IDPersonnel->Location = System::Drawing::Point(148, 70);
			this->label_IDPersonnel->Name = L"label_IDPersonnel";
			this->label_IDPersonnel->Size = System::Drawing::Size(36, 20);
			this->label_IDPersonnel->TabIndex = 7;
			this->label_IDPersonnel->Text = L"ID :";
			// 
			// btn_ModifierPersonnel
			// 
			this->btn_ModifierPersonnel->Location = System::Drawing::Point(565, 370);
			this->btn_ModifierPersonnel->Name = L"btn_ModifierPersonnel";
			this->btn_ModifierPersonnel->Size = System::Drawing::Size(155, 23);
			this->btn_ModifierPersonnel->TabIndex = 6;
			this->btn_ModifierPersonnel->Text = L"Modifier";
			this->btn_ModifierPersonnel->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherPersonnel
			// 
			this->btn_AfficherPersonnel->Location = System::Drawing::Point(726, 332);
			this->btn_AfficherPersonnel->Name = L"btn_AfficherPersonnel";
			this->btn_AfficherPersonnel->Size = System::Drawing::Size(155, 23);
			this->btn_AfficherPersonnel->TabIndex = 5;
			this->btn_AfficherPersonnel->Text = L"Afficher";
			this->btn_AfficherPersonnel->UseVisualStyleBackColor = true;
			// 
			// btn_SupprimerPersonnel
			// 
			this->btn_SupprimerPersonnel->Location = System::Drawing::Point(726, 370);
			this->btn_SupprimerPersonnel->Name = L"btn_SupprimerPersonnel";
			this->btn_SupprimerPersonnel->Size = System::Drawing::Size(155, 23);
			this->btn_SupprimerPersonnel->TabIndex = 4;
			this->btn_SupprimerPersonnel->Text = L"Supprimer";
			this->btn_SupprimerPersonnel->UseVisualStyleBackColor = true;
			// 
			// btn_CreerPersonnel
			// 
			this->btn_CreerPersonnel->Location = System::Drawing::Point(565, 332);
			this->btn_CreerPersonnel->Name = L"btn_CreerPersonnel";
			this->btn_CreerPersonnel->Size = System::Drawing::Size(155, 23);
			this->btn_CreerPersonnel->TabIndex = 3;
			this->btn_CreerPersonnel->Text = L"Créer";
			this->btn_CreerPersonnel->UseVisualStyleBackColor = true;
			// 
			// label_Personnel
			// 
			this->label_Personnel->AutoSize = true;
			this->label_Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Personnel->Location = System::Drawing::Point(72, 32);
			this->label_Personnel->Name = L"label_Personnel";
			this->label_Personnel->Size = System::Drawing::Size(243, 29);
			this->label_Personnel->TabIndex = 2;
			this->label_Personnel->Text = L"Gestion du personnel";
			// 
			// DGV_Personnel
			// 
			this->DGV_Personnel->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Personnel->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->DGV_Personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Personnel->DefaultCellStyle = dataGridViewCellStyle16;
			this->DGV_Personnel->Location = System::Drawing::Point(515, 91);
			this->DGV_Personnel->Name = L"DGV_Personnel";
			this->DGV_Personnel->RowHeadersWidth = 51;
			this->DGV_Personnel->RowTemplate->Height = 24;
			this->DGV_Personnel->Size = System::Drawing::Size(398, 216);
			this->DGV_Personnel->TabIndex = 1;
			this->DGV_Personnel->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm1::DGV_Personnel_CellContentClick);
			// 
			// panel_LogoPersonnel
			// 
			this->panel_LogoPersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoPersonnel->Location = System::Drawing::Point(797, 15);
			this->panel_LogoPersonnel->Name = L"panel_LogoPersonnel";
			this->panel_LogoPersonnel->Size = System::Drawing::Size(95, 47);
			this->panel_LogoPersonnel->TabIndex = 0;
			// 
			// tabPage_GestionDesCommandes
			// 
			this->tabPage_GestionDesCommandes->Controls->Add(this->panel_Commandes);
			this->tabPage_GestionDesCommandes->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDesCommandes->Name = L"tabPage_GestionDesCommandes";
			this->tabPage_GestionDesCommandes->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDesCommandes->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDesCommandes->TabIndex = 2;
			this->tabPage_GestionDesCommandes->Text = L"Gestion des commandes";
			this->tabPage_GestionDesCommandes->UseVisualStyleBackColor = true;
			// 
			// panel_Commandes
			// 
			this->panel_Commandes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Commandes.BackgroundImage")));
			this->panel_Commandes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_Commandes->Controls->Add(this->btn_RafraichirCommandes);
			this->panel_Commandes->Controls->Add(this->txt_IDCommande);
			this->panel_Commandes->Controls->Add(this->label_IDCommande);
			this->panel_Commandes->Controls->Add(this->txt_DateDePayementCommande);
			this->panel_Commandes->Controls->Add(this->txt_MoyenDePayementCommande);
			this->panel_Commandes->Controls->Add(this->label_DateDePayementCommande);
			this->panel_Commandes->Controls->Add(this->label_MoyenDePayementCommande);
			this->panel_Commandes->Controls->Add(this->txt_RemiseCommande);
			this->panel_Commandes->Controls->Add(this->txt_MontantTVACommande);
			this->panel_Commandes->Controls->Add(this->txt_PrixTTCCommande);
			this->panel_Commandes->Controls->Add(this->txt_PrixHTCommande);
			this->panel_Commandes->Controls->Add(this->txt_DateEmisionCommande);
			this->panel_Commandes->Controls->Add(this->txt_DateLivraison);
			this->panel_Commandes->Controls->Add(this->txt_DateCommande);
			this->panel_Commandes->Controls->Add(this->label_RemiseCommande);
			this->panel_Commandes->Controls->Add(this->label_MontantTVACommande);
			this->panel_Commandes->Controls->Add(this->label_PrixTTCCommande);
			this->panel_Commandes->Controls->Add(this->label_PrixHTCommande);
			this->panel_Commandes->Controls->Add(this->label_DateEmisionCommande);
			this->panel_Commandes->Controls->Add(this->label_DateLivraisonCommande);
			this->panel_Commandes->Controls->Add(this->label_DateCommande);
			this->panel_Commandes->Controls->Add(this->btn_ModifierCommandes);
			this->panel_Commandes->Controls->Add(this->btn_AfficherCommandes);
			this->panel_Commandes->Controls->Add(this->btn_SupprimerCommandes);
			this->panel_Commandes->Controls->Add(this->btn_CreerCommandes);
			this->panel_Commandes->Controls->Add(this->DGV_Commandes);
			this->panel_Commandes->Controls->Add(this->label_Commandes);
			this->panel_Commandes->Controls->Add(this->panel_LogoCommande);
			this->panel_Commandes->Location = System::Drawing::Point(-17, -9);
			this->panel_Commandes->Name = L"panel_Commandes";
			this->panel_Commandes->Size = System::Drawing::Size(960, 479);
			this->panel_Commandes->TabIndex = 3;
			// 
			// btn_RafraichirCommandes
			// 
			this->btn_RafraichirCommandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_RafraichirCommandes->Location = System::Drawing::Point(760, 418);
			this->btn_RafraichirCommandes->Name = L"btn_RafraichirCommandes";
			this->btn_RafraichirCommandes->Size = System::Drawing::Size(170, 42);
			this->btn_RafraichirCommandes->TabIndex = 42;
			this->btn_RafraichirCommandes->Text = L"Rafraichir";
			this->btn_RafraichirCommandes->UseVisualStyleBackColor = true;
			// 
			// txt_IDCommande
			// 
			this->txt_IDCommande->Location = System::Drawing::Point(322, 165);
			this->txt_IDCommande->Name = L"txt_IDCommande";
			this->txt_IDCommande->Size = System::Drawing::Size(151, 22);
			this->txt_IDCommande->TabIndex = 30;
			// 
			// label_IDCommande
			// 
			this->label_IDCommande->AutoSize = true;
			this->label_IDCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IDCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_IDCommande->Location = System::Drawing::Point(318, 142);
			this->label_IDCommande->Name = L"label_IDCommande";
			this->label_IDCommande->Size = System::Drawing::Size(123, 20);
			this->label_IDCommande->TabIndex = 29;
			this->label_IDCommande->Text = L"ID commande :";
			// 
			// txt_DateDePayementCommande
			// 
			this->txt_DateDePayementCommande->Location = System::Drawing::Point(322, 309);
			this->txt_DateDePayementCommande->Name = L"txt_DateDePayementCommande";
			this->txt_DateDePayementCommande->Size = System::Drawing::Size(151, 22);
			this->txt_DateDePayementCommande->TabIndex = 28;
			// 
			// txt_MoyenDePayementCommande
			// 
			this->txt_MoyenDePayementCommande->Location = System::Drawing::Point(147, 309);
			this->txt_MoyenDePayementCommande->Name = L"txt_MoyenDePayementCommande";
			this->txt_MoyenDePayementCommande->Size = System::Drawing::Size(151, 22);
			this->txt_MoyenDePayementCommande->TabIndex = 27;
			// 
			// label_DateDePayementCommande
			// 
			this->label_DateDePayementCommande->AutoSize = true;
			this->label_DateDePayementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateDePayementCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateDePayementCommande->Location = System::Drawing::Point(318, 286);
			this->label_DateDePayementCommande->Name = L"label_DateDePayementCommande";
			this->label_DateDePayementCommande->Size = System::Drawing::Size(155, 20);
			this->label_DateDePayementCommande->TabIndex = 26;
			this->label_DateDePayementCommande->Text = L"Date de payement :";
			// 
			// label_MoyenDePayementCommande
			// 
			this->label_MoyenDePayementCommande->AutoSize = true;
			this->label_MoyenDePayementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_MoyenDePayementCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_MoyenDePayementCommande->Location = System::Drawing::Point(143, 286);
			this->label_MoyenDePayementCommande->Name = L"label_MoyenDePayementCommande";
			this->label_MoyenDePayementCommande->Size = System::Drawing::Size(168, 20);
			this->label_MoyenDePayementCommande->TabIndex = 25;
			this->label_MoyenDePayementCommande->Text = L"Moyen de payement :";
			// 
			// txt_RemiseCommande
			// 
			this->txt_RemiseCommande->Location = System::Drawing::Point(322, 261);
			this->txt_RemiseCommande->Name = L"txt_RemiseCommande";
			this->txt_RemiseCommande->Size = System::Drawing::Size(151, 22);
			this->txt_RemiseCommande->TabIndex = 24;
			// 
			// txt_MontantTVACommande
			// 
			this->txt_MontantTVACommande->Location = System::Drawing::Point(147, 261);
			this->txt_MontantTVACommande->Name = L"txt_MontantTVACommande";
			this->txt_MontantTVACommande->Size = System::Drawing::Size(151, 22);
			this->txt_MontantTVACommande->TabIndex = 23;
			// 
			// txt_PrixTTCCommande
			// 
			this->txt_PrixTTCCommande->Location = System::Drawing::Point(322, 213);
			this->txt_PrixTTCCommande->Name = L"txt_PrixTTCCommande";
			this->txt_PrixTTCCommande->Size = System::Drawing::Size(151, 22);
			this->txt_PrixTTCCommande->TabIndex = 22;
			// 
			// txt_PrixHTCommande
			// 
			this->txt_PrixHTCommande->Location = System::Drawing::Point(147, 213);
			this->txt_PrixHTCommande->Name = L"txt_PrixHTCommande";
			this->txt_PrixHTCommande->Size = System::Drawing::Size(151, 22);
			this->txt_PrixHTCommande->TabIndex = 21;
			// 
			// txt_DateEmisionCommande
			// 
			this->txt_DateEmisionCommande->Location = System::Drawing::Point(147, 165);
			this->txt_DateEmisionCommande->Name = L"txt_DateEmisionCommande";
			this->txt_DateEmisionCommande->Size = System::Drawing::Size(151, 22);
			this->txt_DateEmisionCommande->TabIndex = 20;
			// 
			// txt_DateLivraison
			// 
			this->txt_DateLivraison->Location = System::Drawing::Point(322, 117);
			this->txt_DateLivraison->Name = L"txt_DateLivraison";
			this->txt_DateLivraison->Size = System::Drawing::Size(151, 22);
			this->txt_DateLivraison->TabIndex = 19;
			// 
			// txt_DateCommande
			// 
			this->txt_DateCommande->Location = System::Drawing::Point(147, 117);
			this->txt_DateCommande->Name = L"txt_DateCommande";
			this->txt_DateCommande->Size = System::Drawing::Size(151, 22);
			this->txt_DateCommande->TabIndex = 18;
			// 
			// label_RemiseCommande
			// 
			this->label_RemiseCommande->AutoSize = true;
			this->label_RemiseCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_RemiseCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_RemiseCommande->Location = System::Drawing::Point(318, 238);
			this->label_RemiseCommande->Name = L"label_RemiseCommande";
			this->label_RemiseCommande->Size = System::Drawing::Size(81, 20);
			this->label_RemiseCommande->TabIndex = 17;
			this->label_RemiseCommande->Text = L"Remise  :";
			// 
			// label_MontantTVACommande
			// 
			this->label_MontantTVACommande->AutoSize = true;
			this->label_MontantTVACommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_MontantTVACommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_MontantTVACommande->Location = System::Drawing::Point(145, 238);
			this->label_MontantTVACommande->Name = L"label_MontantTVACommande";
			this->label_MontantTVACommande->Size = System::Drawing::Size(116, 20);
			this->label_MontantTVACommande->TabIndex = 16;
			this->label_MontantTVACommande->Text = L"Montant TVA :";
			// 
			// label_PrixTTCCommande
			// 
			this->label_PrixTTCCommande->AutoSize = true;
			this->label_PrixTTCCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrixTTCCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrixTTCCommande->Location = System::Drawing::Point(318, 190);
			this->label_PrixTTCCommande->Name = L"label_PrixTTCCommande";
			this->label_PrixTTCCommande->Size = System::Drawing::Size(90, 20);
			this->label_PrixTTCCommande->TabIndex = 15;
			this->label_PrixTTCCommande->Text = L"Prix TTC  :";
			// 
			// label_PrixHTCommande
			// 
			this->label_PrixHTCommande->AutoSize = true;
			this->label_PrixHTCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrixHTCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrixHTCommande->Location = System::Drawing::Point(143, 190);
			this->label_PrixHTCommande->Name = L"label_PrixHTCommande";
			this->label_PrixHTCommande->Size = System::Drawing::Size(76, 20);
			this->label_PrixHTCommande->TabIndex = 14;
			this->label_PrixHTCommande->Text = L"Prix HT :";
			// 
			// label_DateEmisionCommande
			// 
			this->label_DateEmisionCommande->AutoSize = true;
			this->label_DateEmisionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateEmisionCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateEmisionCommande->Location = System::Drawing::Point(143, 142);
			this->label_DateEmisionCommande->Name = L"label_DateEmisionCommande";
			this->label_DateEmisionCommande->Size = System::Drawing::Size(118, 20);
			this->label_DateEmisionCommande->TabIndex = 13;
			this->label_DateEmisionCommande->Text = L"Date emision :";
			// 
			// label_DateLivraisonCommande
			// 
			this->label_DateLivraisonCommande->AutoSize = true;
			this->label_DateLivraisonCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateLivraisonCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateLivraisonCommande->Location = System::Drawing::Point(318, 94);
			this->label_DateLivraisonCommande->Name = L"label_DateLivraisonCommande";
			this->label_DateLivraisonCommande->Size = System::Drawing::Size(122, 20);
			this->label_DateLivraisonCommande->TabIndex = 12;
			this->label_DateLivraisonCommande->Text = L"Date livraison :";
			// 
			// label_DateCommande
			// 
			this->label_DateCommande->AutoSize = true;
			this->label_DateCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateCommande->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateCommande->Location = System::Drawing::Point(143, 94);
			this->label_DateCommande->Name = L"label_DateCommande";
			this->label_DateCommande->Size = System::Drawing::Size(142, 20);
			this->label_DateCommande->TabIndex = 11;
			this->label_DateCommande->Text = L"Date commande :";
			// 
			// btn_ModifierCommandes
			// 
			this->btn_ModifierCommandes->Location = System::Drawing::Point(161, 387);
			this->btn_ModifierCommandes->Name = L"btn_ModifierCommandes";
			this->btn_ModifierCommandes->Size = System::Drawing::Size(155, 23);
			this->btn_ModifierCommandes->TabIndex = 10;
			this->btn_ModifierCommandes->Text = L"Modifier";
			this->btn_ModifierCommandes->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherCommandes
			// 
			this->btn_AfficherCommandes->Location = System::Drawing::Point(322, 349);
			this->btn_AfficherCommandes->Name = L"btn_AfficherCommandes";
			this->btn_AfficherCommandes->Size = System::Drawing::Size(155, 23);
			this->btn_AfficherCommandes->TabIndex = 9;
			this->btn_AfficherCommandes->Text = L"Afficher";
			this->btn_AfficherCommandes->UseVisualStyleBackColor = true;
			// 
			// btn_SupprimerCommandes
			// 
			this->btn_SupprimerCommandes->Location = System::Drawing::Point(322, 387);
			this->btn_SupprimerCommandes->Name = L"btn_SupprimerCommandes";
			this->btn_SupprimerCommandes->Size = System::Drawing::Size(155, 23);
			this->btn_SupprimerCommandes->TabIndex = 8;
			this->btn_SupprimerCommandes->Text = L"Supprimer";
			this->btn_SupprimerCommandes->UseVisualStyleBackColor = true;
			// 
			// btn_CreerCommandes
			// 
			this->btn_CreerCommandes->Location = System::Drawing::Point(161, 349);
			this->btn_CreerCommandes->Name = L"btn_CreerCommandes";
			this->btn_CreerCommandes->Size = System::Drawing::Size(155, 23);
			this->btn_CreerCommandes->TabIndex = 7;
			this->btn_CreerCommandes->Text = L"Créer";
			this->btn_CreerCommandes->UseVisualStyleBackColor = true;
			// 
			// DGV_Commandes
			// 
			this->DGV_Commandes->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Commandes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->DGV_Commandes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Commandes->DefaultCellStyle = dataGridViewCellStyle18;
			this->DGV_Commandes->Location = System::Drawing::Point(483, 85);
			this->DGV_Commandes->Name = L"DGV_Commandes";
			this->DGV_Commandes->RowHeadersWidth = 51;
			this->DGV_Commandes->RowTemplate->Height = 24;
			this->DGV_Commandes->Size = System::Drawing::Size(313, 312);
			this->DGV_Commandes->TabIndex = 2;
			// 
			// label_Commandes
			// 
			this->label_Commandes->AutoSize = true;
			this->label_Commandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Commandes->Location = System::Drawing::Point(66, 33);
			this->label_Commandes->Name = L"label_Commandes";
			this->label_Commandes->Size = System::Drawing::Size(280, 29);
			this->label_Commandes->TabIndex = 1;
			this->label_Commandes->Text = L"Gestion des commandes";
			// 
			// panel_LogoCommande
			// 
			this->panel_LogoCommande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoCommande->Location = System::Drawing::Point(797, 15);
			this->panel_LogoCommande->Name = L"panel_LogoCommande";
			this->panel_LogoCommande->Size = System::Drawing::Size(95, 47);
			this->panel_LogoCommande->TabIndex = 0;
			// 
			// tabPage_GestionDesClients
			// 
			this->tabPage_GestionDesClients->Controls->Add(this->panel_Clients);
			this->tabPage_GestionDesClients->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDesClients->Name = L"tabPage_GestionDesClients";
			this->tabPage_GestionDesClients->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDesClients->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDesClients->TabIndex = 3;
			this->tabPage_GestionDesClients->Text = L"Gestion des clients";
			this->tabPage_GestionDesClients->UseVisualStyleBackColor = true;
			// 
			// panel_Clients
			// 
			this->panel_Clients->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Clients.BackgroundImage")));
			this->panel_Clients->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_Clients->Controls->Add(this->btn_AfficherPersonneClients);
			this->panel_Clients->Controls->Add(this->btn_AfficherClientClients);
			this->panel_Clients->Controls->Add(this->btn_AfficherAdresseClients);
			this->panel_Clients->Controls->Add(this->txt_DateDeNaissanceClients);
			this->panel_Clients->Controls->Add(this->label_DateDeNaissanceClients);
			this->panel_Clients->Controls->Add(this->txt_NumeroRueClients);
			this->panel_Clients->Controls->Add(this->txt_NomRueClients);
			this->panel_Clients->Controls->Add(this->txt_CodePostaleClients);
			this->panel_Clients->Controls->Add(this->txt_VilleClients);
			this->panel_Clients->Controls->Add(this->txt_EmailClients);
			this->panel_Clients->Controls->Add(this->txt_MDPClients);
			this->panel_Clients->Controls->Add(this->txt_PrénomClients);
			this->panel_Clients->Controls->Add(this->txt_IDClients);
			this->panel_Clients->Controls->Add(this->txt_NomClients);
			this->panel_Clients->Controls->Add(this->label_CodePostaleClients);
			this->panel_Clients->Controls->Add(this->label_VilleClients);
			this->panel_Clients->Controls->Add(this->label_NumeroRueClients);
			this->panel_Clients->Controls->Add(this->label_NomRueClients);
			this->panel_Clients->Controls->Add(this->label_IDClients);
			this->panel_Clients->Controls->Add(this->label_MDPClient);
			this->panel_Clients->Controls->Add(this->label_EmailClients);
			this->panel_Clients->Controls->Add(this->label_PrenomClients);
			this->panel_Clients->Controls->Add(this->label_NomClients);
			this->panel_Clients->Controls->Add(this->btn_ModifierClients);
			this->panel_Clients->Controls->Add(this->btn_AfficherClients);
			this->panel_Clients->Controls->Add(this->btn_SupprimerClients);
			this->panel_Clients->Controls->Add(this->btn_CreerClients);
			this->panel_Clients->Controls->Add(this->label_Clients);
			this->panel_Clients->Controls->Add(this->DGV_Clients);
			this->panel_Clients->Controls->Add(this->panel_LogoClients);
			this->panel_Clients->Location = System::Drawing::Point(-17, -9);
			this->panel_Clients->Name = L"panel_Clients";
			this->panel_Clients->Size = System::Drawing::Size(960, 479);
			this->panel_Clients->TabIndex = 2;
			// 
			// btn_AfficherPersonneClients
			// 
			this->btn_AfficherPersonneClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_AfficherPersonneClients->Location = System::Drawing::Point(483, 400);
			this->btn_AfficherPersonneClients->Name = L"btn_AfficherPersonneClients";
			this->btn_AfficherPersonneClients->Size = System::Drawing::Size(153, 30);
			this->btn_AfficherPersonneClients->TabIndex = 44;
			this->btn_AfficherPersonneClients->Text = L"Afficher personne";
			this->btn_AfficherPersonneClients->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherClientClients
			// 
			this->btn_AfficherClientClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_AfficherClientClients->Location = System::Drawing::Point(645, 400);
			this->btn_AfficherClientClients->Name = L"btn_AfficherClientClients";
			this->btn_AfficherClientClients->Size = System::Drawing::Size(153, 30);
			this->btn_AfficherClientClients->TabIndex = 43;
			this->btn_AfficherClientClients->Text = L"Afficher Client";
			this->btn_AfficherClientClients->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherAdresseClients
			// 
			this->btn_AfficherAdresseClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_AfficherAdresseClients->Location = System::Drawing::Point(482, 436);
			this->btn_AfficherAdresseClients->Name = L"btn_AfficherAdresseClients";
			this->btn_AfficherAdresseClients->Size = System::Drawing::Size(153, 30);
			this->btn_AfficherAdresseClients->TabIndex = 42;
			this->btn_AfficherAdresseClients->Text = L"Afficher Adresse";
			this->btn_AfficherAdresseClients->UseVisualStyleBackColor = true;
			// 
			// txt_DateDeNaissanceClients
			// 
			this->txt_DateDeNaissanceClients->Location = System::Drawing::Point(322, 213);
			this->txt_DateDeNaissanceClients->Name = L"txt_DateDeNaissanceClients";
			this->txt_DateDeNaissanceClients->Size = System::Drawing::Size(152, 22);
			this->txt_DateDeNaissanceClients->TabIndex = 34;
			// 
			// label_DateDeNaissanceClients
			// 
			this->label_DateDeNaissanceClients->AutoSize = true;
			this->label_DateDeNaissanceClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateDeNaissanceClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_DateDeNaissanceClients->Location = System::Drawing::Point(318, 190);
			this->label_DateDeNaissanceClients->Name = L"label_DateDeNaissanceClients";
			this->label_DateDeNaissanceClients->Size = System::Drawing::Size(159, 20);
			this->label_DateDeNaissanceClients->TabIndex = 33;
			this->label_DateDeNaissanceClients->Text = L"Date de naissance :";
			// 
			// txt_NumeroRueClients
			// 
			this->txt_NumeroRueClients->Location = System::Drawing::Point(322, 310);
			this->txt_NumeroRueClients->Name = L"txt_NumeroRueClients";
			this->txt_NumeroRueClients->Size = System::Drawing::Size(152, 22);
			this->txt_NumeroRueClients->TabIndex = 32;
			// 
			// txt_NomRueClients
			// 
			this->txt_NomRueClients->Location = System::Drawing::Point(150, 310);
			this->txt_NomRueClients->Name = L"txt_NomRueClients";
			this->txt_NomRueClients->Size = System::Drawing::Size(152, 22);
			this->txt_NomRueClients->TabIndex = 31;
			// 
			// txt_CodePostaleClients
			// 
			this->txt_CodePostaleClients->Location = System::Drawing::Point(322, 261);
			this->txt_CodePostaleClients->Name = L"txt_CodePostaleClients";
			this->txt_CodePostaleClients->Size = System::Drawing::Size(152, 22);
			this->txt_CodePostaleClients->TabIndex = 30;
			// 
			// txt_VilleClients
			// 
			this->txt_VilleClients->Location = System::Drawing::Point(150, 261);
			this->txt_VilleClients->Name = L"txt_VilleClients";
			this->txt_VilleClients->Size = System::Drawing::Size(152, 22);
			this->txt_VilleClients->TabIndex = 29;
			// 
			// txt_EmailClients
			// 
			this->txt_EmailClients->Location = System::Drawing::Point(150, 213);
			this->txt_EmailClients->Name = L"txt_EmailClients";
			this->txt_EmailClients->Size = System::Drawing::Size(152, 22);
			this->txt_EmailClients->TabIndex = 28;
			// 
			// txt_MDPClients
			// 
			this->txt_MDPClients->Location = System::Drawing::Point(322, 165);
			this->txt_MDPClients->Name = L"txt_MDPClients";
			this->txt_MDPClients->Size = System::Drawing::Size(152, 22);
			this->txt_MDPClients->TabIndex = 27;
			// 
			// txt_PrénomClients
			// 
			this->txt_PrénomClients->Location = System::Drawing::Point(150, 165);
			this->txt_PrénomClients->Name = L"txt_PrénomClients";
			this->txt_PrénomClients->Size = System::Drawing::Size(152, 22);
			this->txt_PrénomClients->TabIndex = 26;
			// 
			// txt_IDClients
			// 
			this->txt_IDClients->Location = System::Drawing::Point(322, 117);
			this->txt_IDClients->Name = L"txt_IDClients";
			this->txt_IDClients->Size = System::Drawing::Size(152, 22);
			this->txt_IDClients->TabIndex = 25;
			// 
			// txt_NomClients
			// 
			this->txt_NomClients->Location = System::Drawing::Point(150, 117);
			this->txt_NomClients->Name = L"txt_NomClients";
			this->txt_NomClients->Size = System::Drawing::Size(152, 22);
			this->txt_NomClients->TabIndex = 24;
			// 
			// label_CodePostaleClients
			// 
			this->label_CodePostaleClients->AutoSize = true;
			this->label_CodePostaleClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_CodePostaleClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_CodePostaleClients->Location = System::Drawing::Point(318, 238);
			this->label_CodePostaleClients->Name = L"label_CodePostaleClients";
			this->label_CodePostaleClients->Size = System::Drawing::Size(117, 20);
			this->label_CodePostaleClients->TabIndex = 23;
			this->label_CodePostaleClients->Text = L"Code postale :";
			// 
			// label_VilleClients
			// 
			this->label_VilleClients->AutoSize = true;
			this->label_VilleClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_VilleClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_VilleClients->Location = System::Drawing::Point(149, 238);
			this->label_VilleClients->Name = L"label_VilleClients";
			this->label_VilleClients->Size = System::Drawing::Size(51, 20);
			this->label_VilleClients->TabIndex = 22;
			this->label_VilleClients->Text = L"Ville :";
			// 
			// label_NumeroRueClients
			// 
			this->label_NumeroRueClients->AutoSize = true;
			this->label_NumeroRueClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NumeroRueClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NumeroRueClients->Location = System::Drawing::Point(318, 286);
			this->label_NumeroRueClients->Name = L"label_NumeroRueClients";
			this->label_NumeroRueClients->Size = System::Drawing::Size(113, 20);
			this->label_NumeroRueClients->TabIndex = 21;
			this->label_NumeroRueClients->Text = L"Numéro Rue :";
			// 
			// label_NomRueClients
			// 
			this->label_NomRueClients->AutoSize = true;
			this->label_NomRueClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NomRueClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NomRueClients->Location = System::Drawing::Point(149, 287);
			this->label_NomRueClients->Name = L"label_NomRueClients";
			this->label_NomRueClients->Size = System::Drawing::Size(83, 20);
			this->label_NomRueClients->TabIndex = 20;
			this->label_NomRueClients->Text = L"Nom rue :";
			// 
			// label_IDClients
			// 
			this->label_IDClients->AutoSize = true;
			this->label_IDClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_IDClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_IDClients->Location = System::Drawing::Point(318, 94);
			this->label_IDClients->Name = L"label_IDClients";
			this->label_IDClients->Size = System::Drawing::Size(36, 20);
			this->label_IDClients->TabIndex = 19;
			this->label_IDClients->Text = L"ID :";
			// 
			// label_MDPClient
			// 
			this->label_MDPClient->AutoSize = true;
			this->label_MDPClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_MDPClient->ForeColor = System::Drawing::SystemColors::Control;
			this->label_MDPClient->Location = System::Drawing::Point(318, 142);
			this->label_MDPClient->Name = L"label_MDPClient";
			this->label_MDPClient->Size = System::Drawing::Size(120, 20);
			this->label_MDPClient->TabIndex = 18;
			this->label_MDPClient->Text = L"Mot de passe :";
			// 
			// label_EmailClients
			// 
			this->label_EmailClients->AutoSize = true;
			this->label_EmailClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_EmailClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_EmailClients->Location = System::Drawing::Point(146, 190);
			this->label_EmailClients->Name = L"label_EmailClients";
			this->label_EmailClients->Size = System::Drawing::Size(67, 20);
			this->label_EmailClients->TabIndex = 17;
			this->label_EmailClients->Text = L"E-mail :";
			// 
			// label_PrenomClients
			// 
			this->label_PrenomClients->AutoSize = true;
			this->label_PrenomClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrenomClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrenomClients->Location = System::Drawing::Point(146, 142);
			this->label_PrenomClients->Name = L"label_PrenomClients";
			this->label_PrenomClients->Size = System::Drawing::Size(77, 20);
			this->label_PrenomClients->TabIndex = 16;
			this->label_PrenomClients->Text = L"Prénom :";
			// 
			// label_NomClients
			// 
			this->label_NomClients->AutoSize = true;
			this->label_NomClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NomClients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NomClients->Location = System::Drawing::Point(146, 94);
			this->label_NomClients->Name = L"label_NomClients";
			this->label_NomClients->Size = System::Drawing::Size(54, 20);
			this->label_NomClients->TabIndex = 15;
			this->label_NomClients->Text = L"Nom :";
			// 
			// btn_ModifierClients
			// 
			this->btn_ModifierClients->Location = System::Drawing::Point(161, 388);
			this->btn_ModifierClients->Name = L"btn_ModifierClients";
			this->btn_ModifierClients->Size = System::Drawing::Size(155, 23);
			this->btn_ModifierClients->TabIndex = 14;
			this->btn_ModifierClients->Text = L"Modifier";
			this->btn_ModifierClients->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherClients
			// 
			this->btn_AfficherClients->Location = System::Drawing::Point(322, 350);
			this->btn_AfficherClients->Name = L"btn_AfficherClients";
			this->btn_AfficherClients->Size = System::Drawing::Size(155, 23);
			this->btn_AfficherClients->TabIndex = 13;
			this->btn_AfficherClients->Text = L"Afficher";
			this->btn_AfficherClients->UseVisualStyleBackColor = true;
			// 
			// btn_SupprimerClients
			// 
			this->btn_SupprimerClients->Location = System::Drawing::Point(322, 388);
			this->btn_SupprimerClients->Name = L"btn_SupprimerClients";
			this->btn_SupprimerClients->Size = System::Drawing::Size(155, 23);
			this->btn_SupprimerClients->TabIndex = 12;
			this->btn_SupprimerClients->Text = L"Supprimer";
			this->btn_SupprimerClients->UseVisualStyleBackColor = true;
			// 
			// btn_CreerClients
			// 
			this->btn_CreerClients->Location = System::Drawing::Point(161, 350);
			this->btn_CreerClients->Name = L"btn_CreerClients";
			this->btn_CreerClients->Size = System::Drawing::Size(155, 23);
			this->btn_CreerClients->TabIndex = 11;
			this->btn_CreerClients->Text = L"Créer";
			this->btn_CreerClients->UseVisualStyleBackColor = true;
			// 
			// label_Clients
			// 
			this->label_Clients->AutoSize = true;
			this->label_Clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Clients->ForeColor = System::Drawing::SystemColors::Control;
			this->label_Clients->Location = System::Drawing::Point(72, 33);
			this->label_Clients->Name = L"label_Clients";
			this->label_Clients->Size = System::Drawing::Size(217, 29);
			this->label_Clients->TabIndex = 2;
			this->label_Clients->Text = L"Gestion des clients";
			// 
			// DGV_Clients
			// 
			this->DGV_Clients->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Clients->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->DGV_Clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Clients->DefaultCellStyle = dataGridViewCellStyle20;
			this->DGV_Clients->Location = System::Drawing::Point(482, 84);
			this->DGV_Clients->Name = L"DGV_Clients";
			this->DGV_Clients->RowHeadersWidth = 51;
			this->DGV_Clients->RowTemplate->Height = 24;
			this->DGV_Clients->Size = System::Drawing::Size(316, 310);
			this->DGV_Clients->TabIndex = 1;
			// 
			// panel_LogoClients
			// 
			this->panel_LogoClients->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoClients->Location = System::Drawing::Point(797, 15);
			this->panel_LogoClients->Name = L"panel_LogoClients";
			this->panel_LogoClients->Size = System::Drawing::Size(95, 47);
			this->panel_LogoClients->TabIndex = 0;
			// 
			// tabPage_GestionDeArticle
			// 
			this->tabPage_GestionDeArticle->Controls->Add(this->panel_Article);
			this->tabPage_GestionDeArticle->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDeArticle->Name = L"tabPage_GestionDeArticle";
			this->tabPage_GestionDeArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDeArticle->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDeArticle->TabIndex = 4;
			this->tabPage_GestionDeArticle->Text = L"Gestions de l\'article";
			this->tabPage_GestionDeArticle->UseVisualStyleBackColor = true;
			// 
			// panel_Article
			// 
			this->panel_Article->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Article.BackgroundImage")));
			this->panel_Article->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_Article->Controls->Add(this->btn_RafraichirArticle);
			this->panel_Article->Controls->Add(this->txt_PrixHTArticle);
			this->panel_Article->Controls->Add(this->txt_PrixTTCArticle);
			this->panel_Article->Controls->Add(this->txt_NomArticle);
			this->panel_Article->Controls->Add(this->txt_ReferenceArticle);
			this->panel_Article->Controls->Add(this->label_PrixTTCArticle);
			this->panel_Article->Controls->Add(this->label_PrixHTArticle);
			this->panel_Article->Controls->Add(this->label_NomArticle);
			this->panel_Article->Controls->Add(this->label_RefArticle);
			this->panel_Article->Controls->Add(this->label_GestionDeArticle);
			this->panel_Article->Controls->Add(this->DGV_Article);
			this->panel_Article->Controls->Add(this->btn_ModifierArticle);
			this->panel_Article->Controls->Add(this->btn_AfficherArticle);
			this->panel_Article->Controls->Add(this->btn_SupprimerArticle);
			this->panel_Article->Controls->Add(this->btn_CreerArticle);
			this->panel_Article->Controls->Add(this->panel_LogoArticle);
			this->panel_Article->Location = System::Drawing::Point(0, 0);
			this->panel_Article->Name = L"panel_Article";
			this->panel_Article->Size = System::Drawing::Size(960, 479);
			this->panel_Article->TabIndex = 2;
			// 
			// btn_RafraichirArticle
			// 
			this->btn_RafraichirArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_RafraichirArticle->Location = System::Drawing::Point(743, 409);
			this->btn_RafraichirArticle->Name = L"btn_RafraichirArticle";
			this->btn_RafraichirArticle->Size = System::Drawing::Size(170, 42);
			this->btn_RafraichirArticle->TabIndex = 42;
			this->btn_RafraichirArticle->Text = L"Rafraichir";
			this->btn_RafraichirArticle->UseVisualStyleBackColor = true;
			// 
			// txt_PrixHTArticle
			// 
			this->txt_PrixHTArticle->Location = System::Drawing::Point(151, 260);
			this->txt_PrixHTArticle->Name = L"txt_PrixHTArticle";
			this->txt_PrixHTArticle->Size = System::Drawing::Size(326, 22);
			this->txt_PrixHTArticle->TabIndex = 25;
			// 
			// txt_PrixTTCArticle
			// 
			this->txt_PrixTTCArticle->Location = System::Drawing::Point(151, 212);
			this->txt_PrixTTCArticle->Name = L"txt_PrixTTCArticle";
			this->txt_PrixTTCArticle->Size = System::Drawing::Size(326, 22);
			this->txt_PrixTTCArticle->TabIndex = 24;
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(151, 164);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(326, 22);
			this->txt_NomArticle->TabIndex = 23;
			// 
			// txt_ReferenceArticle
			// 
			this->txt_ReferenceArticle->Location = System::Drawing::Point(151, 116);
			this->txt_ReferenceArticle->Name = L"txt_ReferenceArticle";
			this->txt_ReferenceArticle->Size = System::Drawing::Size(326, 22);
			this->txt_ReferenceArticle->TabIndex = 22;
			// 
			// label_PrixTTCArticle
			// 
			this->label_PrixTTCArticle->AutoSize = true;
			this->label_PrixTTCArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrixTTCArticle->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrixTTCArticle->Location = System::Drawing::Point(147, 189);
			this->label_PrixTTCArticle->Name = L"label_PrixTTCArticle";
			this->label_PrixTTCArticle->Size = System::Drawing::Size(85, 20);
			this->label_PrixTTCArticle->TabIndex = 21;
			this->label_PrixTTCArticle->Text = L"Prix TTC :";
			// 
			// label_PrixHTArticle
			// 
			this->label_PrixHTArticle->AutoSize = true;
			this->label_PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrixHTArticle->ForeColor = System::Drawing::SystemColors::Control;
			this->label_PrixHTArticle->Location = System::Drawing::Point(147, 237);
			this->label_PrixHTArticle->Name = L"label_PrixHTArticle";
			this->label_PrixHTArticle->Size = System::Drawing::Size(71, 20);
			this->label_PrixHTArticle->TabIndex = 20;
			this->label_PrixHTArticle->Text = L"PrixHT :";
			// 
			// label_NomArticle
			// 
			this->label_NomArticle->AutoSize = true;
			this->label_NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NomArticle->ForeColor = System::Drawing::SystemColors::Control;
			this->label_NomArticle->Location = System::Drawing::Point(147, 141);
			this->label_NomArticle->Name = L"label_NomArticle";
			this->label_NomArticle->Size = System::Drawing::Size(54, 20);
			this->label_NomArticle->TabIndex = 18;
			this->label_NomArticle->Text = L"Nom :";
			// 
			// label_RefArticle
			// 
			this->label_RefArticle->AutoSize = true;
			this->label_RefArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_RefArticle->ForeColor = System::Drawing::SystemColors::Control;
			this->label_RefArticle->Location = System::Drawing::Point(147, 93);
			this->label_RefArticle->Name = L"label_RefArticle";
			this->label_RefArticle->Size = System::Drawing::Size(96, 20);
			this->label_RefArticle->TabIndex = 17;
			this->label_RefArticle->Text = L"Référence :";
			// 
			// label_GestionDeArticle
			// 
			this->label_GestionDeArticle->AutoSize = true;
			this->label_GestionDeArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_GestionDeArticle->ForeColor = System::Drawing::SystemColors::Control;
			this->label_GestionDeArticle->Location = System::Drawing::Point(68, 33);
			this->label_GestionDeArticle->Name = L"label_GestionDeArticle";
			this->label_GestionDeArticle->Size = System::Drawing::Size(211, 29);
			this->label_GestionDeArticle->TabIndex = 16;
			this->label_GestionDeArticle->Text = L"Gestion de l\'article";
			// 
			// DGV_Article
			// 
			this->DGV_Article->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Article->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->DGV_Article->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Article->DefaultCellStyle = dataGridViewCellStyle22;
			this->DGV_Article->Location = System::Drawing::Point(483, 84);
			this->DGV_Article->Name = L"DGV_Article";
			this->DGV_Article->RowHeadersWidth = 51;
			this->DGV_Article->RowTemplate->Height = 24;
			this->DGV_Article->Size = System::Drawing::Size(314, 318);
			this->DGV_Article->TabIndex = 15;
			// 
			// btn_ModifierArticle
			// 
			this->btn_ModifierArticle->Location = System::Drawing::Point(161, 389);
			this->btn_ModifierArticle->Name = L"btn_ModifierArticle";
			this->btn_ModifierArticle->Size = System::Drawing::Size(155, 23);
			this->btn_ModifierArticle->TabIndex = 14;
			this->btn_ModifierArticle->Text = L"Modifier";
			this->btn_ModifierArticle->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherArticle
			// 
			this->btn_AfficherArticle->Location = System::Drawing::Point(322, 351);
			this->btn_AfficherArticle->Name = L"btn_AfficherArticle";
			this->btn_AfficherArticle->Size = System::Drawing::Size(155, 23);
			this->btn_AfficherArticle->TabIndex = 13;
			this->btn_AfficherArticle->Text = L"Afficher";
			this->btn_AfficherArticle->UseVisualStyleBackColor = true;
			// 
			// btn_SupprimerArticle
			// 
			this->btn_SupprimerArticle->Location = System::Drawing::Point(322, 389);
			this->btn_SupprimerArticle->Name = L"btn_SupprimerArticle";
			this->btn_SupprimerArticle->Size = System::Drawing::Size(155, 23);
			this->btn_SupprimerArticle->TabIndex = 12;
			this->btn_SupprimerArticle->Text = L"Supprimer";
			this->btn_SupprimerArticle->UseVisualStyleBackColor = true;
			// 
			// btn_CreerArticle
			// 
			this->btn_CreerArticle->Location = System::Drawing::Point(161, 351);
			this->btn_CreerArticle->Name = L"btn_CreerArticle";
			this->btn_CreerArticle->Size = System::Drawing::Size(155, 23);
			this->btn_CreerArticle->TabIndex = 11;
			this->btn_CreerArticle->Text = L"Créer";
			this->btn_CreerArticle->UseVisualStyleBackColor = true;
			// 
			// panel_LogoArticle
			// 
			this->panel_LogoArticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoArticle->Location = System::Drawing::Point(797, 15);
			this->panel_LogoArticle->Name = L"panel_LogoArticle";
			this->panel_LogoArticle->Size = System::Drawing::Size(95, 47);
			this->panel_LogoArticle->TabIndex = 0;
			// 
			// tabPage_GestionDesStock
			// 
			this->tabPage_GestionDesStock->Controls->Add(this->panel_GestionDuStock);
			this->tabPage_GestionDesStock->Location = System::Drawing::Point(4, 25);
			this->tabPage_GestionDesStock->Name = L"tabPage_GestionDesStock";
			this->tabPage_GestionDesStock->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_GestionDesStock->Size = System::Drawing::Size(1141, 500);
			this->tabPage_GestionDesStock->TabIndex = 5;
			this->tabPage_GestionDesStock->Text = L"Gestion du stock";
			this->tabPage_GestionDesStock->UseVisualStyleBackColor = true;
			// 
			// panel_GestionDuStock
			// 
			this->panel_GestionDuStock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_GestionDuStock.BackgroundImage")));
			this->panel_GestionDuStock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_GestionDuStock->Controls->Add(this->btn_RafraichirStock);
			this->panel_GestionDuStock->Controls->Add(this->txt_SateReappro);
			this->panel_GestionDuStock->Controls->Add(this->txt_StockMin);
			this->panel_GestionDuStock->Controls->Add(this->label_DateReaproStock);
			this->panel_GestionDuStock->Controls->Add(this->label_StockMin);
			this->panel_GestionDuStock->Controls->Add(this->label_Stock);
			this->panel_GestionDuStock->Controls->Add(this->label_CouleurStock);
			this->panel_GestionDuStock->Controls->Add(this->label_RefArticleStock);
			this->panel_GestionDuStock->Controls->Add(this->txt_Stock);
			this->panel_GestionDuStock->Controls->Add(this->txt_CouleurStock);
			this->panel_GestionDuStock->Controls->Add(this->txtRefArticleStock);
			this->panel_GestionDuStock->Controls->Add(this->label_GestionDuStock);
			this->panel_GestionDuStock->Controls->Add(this->DGV_Stock);
			this->panel_GestionDuStock->Controls->Add(this->btn_ModifierStock);
			this->panel_GestionDuStock->Controls->Add(this->btn_AfficherStock);
			this->panel_GestionDuStock->Controls->Add(this->btn_SupprimerStock);
			this->panel_GestionDuStock->Controls->Add(this->btn_CreerStock);
			this->panel_GestionDuStock->Controls->Add(this->panel_LogoStock);
			this->panel_GestionDuStock->Location = System::Drawing::Point(-17, -9);
			this->panel_GestionDuStock->Name = L"panel_GestionDuStock";
			this->panel_GestionDuStock->Size = System::Drawing::Size(960, 479);
			this->panel_GestionDuStock->TabIndex = 3;
			// 
			// btn_RafraichirStock
			// 
			this->btn_RafraichirStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_RafraichirStock->Location = System::Drawing::Point(760, 418);
			this->btn_RafraichirStock->Name = L"btn_RafraichirStock";
			this->btn_RafraichirStock->Size = System::Drawing::Size(170, 42);
			this->btn_RafraichirStock->TabIndex = 42;
			this->btn_RafraichirStock->Text = L"Rafraichir";
			this->btn_RafraichirStock->UseVisualStyleBackColor = true;
			// 
			// txt_SateReappro
			// 
			this->txt_SateReappro->Location = System::Drawing::Point(151, 308);
			this->txt_SateReappro->Name = L"txt_SateReappro";
			this->txt_SateReappro->Size = System::Drawing::Size(326, 22);
			this->txt_SateReappro->TabIndex = 32;
			// 
			// txt_StockMin
			// 
			this->txt_StockMin->Location = System::Drawing::Point(151, 260);
			this->txt_StockMin->Name = L"txt_StockMin";
			this->txt_StockMin->Size = System::Drawing::Size(326, 22);
			this->txt_StockMin->TabIndex = 31;
			// 
			// label_DateReaproStock
			// 
			this->label_DateReaproStock->AutoSize = true;
			this->label_DateReaproStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_DateReaproStock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_DateReaproStock->Location = System::Drawing::Point(147, 285);
			this->label_DateReaproStock->Name = L"label_DateReaproStock";
			this->label_DateReaproStock->Size = System::Drawing::Size(210, 20);
			this->label_DateReaproStock->TabIndex = 30;
			this->label_DateReaproStock->Text = L"Date réapprovisionnement:";
			// 
			// label_StockMin
			// 
			this->label_StockMin->AutoSize = true;
			this->label_StockMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_StockMin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_StockMin->Location = System::Drawing::Point(147, 237);
			this->label_StockMin->Name = L"label_StockMin";
			this->label_StockMin->Size = System::Drawing::Size(134, 20);
			this->label_StockMin->TabIndex = 29;
			this->label_StockMin->Text = L"Stock minimum :";
			// 
			// label_Stock
			// 
			this->label_Stock->AutoSize = true;
			this->label_Stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Stock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_Stock->Location = System::Drawing::Point(147, 189);
			this->label_Stock->Name = L"label_Stock";
			this->label_Stock->Size = System::Drawing::Size(61, 20);
			this->label_Stock->TabIndex = 28;
			this->label_Stock->Text = L"Stock :";
			// 
			// label_CouleurStock
			// 
			this->label_CouleurStock->AutoSize = true;
			this->label_CouleurStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_CouleurStock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_CouleurStock->Location = System::Drawing::Point(147, 141);
			this->label_CouleurStock->Name = L"label_CouleurStock";
			this->label_CouleurStock->Size = System::Drawing::Size(77, 20);
			this->label_CouleurStock->TabIndex = 27;
			this->label_CouleurStock->Text = L"Couleur :";
			// 
			// label_RefArticleStock
			// 
			this->label_RefArticleStock->AutoSize = true;
			this->label_RefArticleStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_RefArticleStock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_RefArticleStock->Location = System::Drawing::Point(147, 93);
			this->label_RefArticleStock->Name = L"label_RefArticleStock";
			this->label_RefArticleStock->Size = System::Drawing::Size(147, 20);
			this->label_RefArticleStock->TabIndex = 26;
			this->label_RefArticleStock->Text = L"Référence article :";
			// 
			// txt_Stock
			// 
			this->txt_Stock->Location = System::Drawing::Point(151, 212);
			this->txt_Stock->Name = L"txt_Stock";
			this->txt_Stock->Size = System::Drawing::Size(326, 22);
			this->txt_Stock->TabIndex = 24;
			// 
			// txt_CouleurStock
			// 
			this->txt_CouleurStock->Location = System::Drawing::Point(151, 164);
			this->txt_CouleurStock->Name = L"txt_CouleurStock";
			this->txt_CouleurStock->Size = System::Drawing::Size(326, 22);
			this->txt_CouleurStock->TabIndex = 23;
			// 
			// txtRefArticleStock
			// 
			this->txtRefArticleStock->Location = System::Drawing::Point(151, 116);
			this->txtRefArticleStock->Name = L"txtRefArticleStock";
			this->txtRefArticleStock->Size = System::Drawing::Size(326, 22);
			this->txtRefArticleStock->TabIndex = 22;
			// 
			// label_GestionDuStock
			// 
			this->label_GestionDuStock->AutoSize = true;
			this->label_GestionDuStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_GestionDuStock->ForeColor = System::Drawing::SystemColors::Control;
			this->label_GestionDuStock->Location = System::Drawing::Point(68, 33);
			this->label_GestionDuStock->Name = L"label_GestionDuStock";
			this->label_GestionDuStock->Size = System::Drawing::Size(191, 29);
			this->label_GestionDuStock->TabIndex = 16;
			this->label_GestionDuStock->Text = L"Gestion du stock";
			// 
			// DGV_Stock
			// 
			this->DGV_Stock->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Stock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle23;
			this->DGV_Stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Stock->DefaultCellStyle = dataGridViewCellStyle24;
			this->DGV_Stock->Location = System::Drawing::Point(483, 84);
			this->DGV_Stock->Name = L"DGV_Stock";
			this->DGV_Stock->RowHeadersWidth = 51;
			this->DGV_Stock->RowTemplate->Height = 24;
			this->DGV_Stock->Size = System::Drawing::Size(314, 318);
			this->DGV_Stock->TabIndex = 15;
			// 
			// btn_ModifierStock
			// 
			this->btn_ModifierStock->Location = System::Drawing::Point(161, 389);
			this->btn_ModifierStock->Name = L"btn_ModifierStock";
			this->btn_ModifierStock->Size = System::Drawing::Size(155, 23);
			this->btn_ModifierStock->TabIndex = 14;
			this->btn_ModifierStock->Text = L"Modifier";
			this->btn_ModifierStock->UseVisualStyleBackColor = true;
			// 
			// btn_AfficherStock
			// 
			this->btn_AfficherStock->Location = System::Drawing::Point(322, 351);
			this->btn_AfficherStock->Name = L"btn_AfficherStock";
			this->btn_AfficherStock->Size = System::Drawing::Size(155, 23);
			this->btn_AfficherStock->TabIndex = 13;
			this->btn_AfficherStock->Text = L"Afficher";
			this->btn_AfficherStock->UseVisualStyleBackColor = true;
			// 
			// btn_SupprimerStock
			// 
			this->btn_SupprimerStock->Location = System::Drawing::Point(322, 389);
			this->btn_SupprimerStock->Name = L"btn_SupprimerStock";
			this->btn_SupprimerStock->Size = System::Drawing::Size(155, 23);
			this->btn_SupprimerStock->TabIndex = 12;
			this->btn_SupprimerStock->Text = L"Supprimer";
			this->btn_SupprimerStock->UseVisualStyleBackColor = true;
			// 
			// btn_CreerStock
			// 
			this->btn_CreerStock->Location = System::Drawing::Point(161, 351);
			this->btn_CreerStock->Name = L"btn_CreerStock";
			this->btn_CreerStock->Size = System::Drawing::Size(155, 23);
			this->btn_CreerStock->TabIndex = 11;
			this->btn_CreerStock->Text = L"Créer";
			this->btn_CreerStock->UseVisualStyleBackColor = true;
			// 
			// panel_LogoStock
			// 
			this->panel_LogoStock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_LogoStock->Location = System::Drawing::Point(797, 15);
			this->panel_LogoStock->Name = L"panel_LogoStock";
			this->panel_LogoStock->Size = System::Drawing::Size(95, 47);
			this->panel_LogoStock->TabIndex = 0;
			// 
			// AdminForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(929, 490);
			this->Controls->Add(this->tabControl_Admin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminForm1";
			this->tabControl_Admin->ResumeLayout(false);
			this->tabPage_GestionDesStatistiques->ResumeLayout(false);
			this->panel_Statistiques->ResumeLayout(false);
			this->panel_Statistiques->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Statistiques))->EndInit();
			this->tabPage_GestionDuPersonnel->ResumeLayout(false);
			this->panel_Personnel->ResumeLayout(false);
			this->panel_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Personnel))->EndInit();
			this->tabPage_GestionDesCommandes->ResumeLayout(false);
			this->panel_Commandes->ResumeLayout(false);
			this->panel_Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Commandes))->EndInit();
			this->tabPage_GestionDesClients->ResumeLayout(false);
			this->panel_Clients->ResumeLayout(false);
			this->panel_Clients->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Clients))->EndInit();
			this->tabPage_GestionDeArticle->ResumeLayout(false);
			this->panel_Article->ResumeLayout(false);
			this->panel_Article->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Article))->EndInit();
			this->tabPage_GestionDesStock->ResumeLayout(false);
			this->panel_GestionDuStock->ResumeLayout(false);
			this->panel_GestionDuStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Stock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DGV_Personnel_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
