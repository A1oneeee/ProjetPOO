#pragma once
#include <iostream>
#include "CLserviceClient.h"
#include "CLserviceArticle.h"
#include "CLserviceStock.h"
#include "CLserviceSeuil.h"
#include "CLservicePlus.h"
#include "CLserviceMoins.h"
#include "CLserviceCommande.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelForm(void)
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
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TabControl^ GestionStats;

    private: CLservicesClient^ oSvc;
    private: CLserviceArticle^ oSvc2;
    private: CLserviceStock^ oSvc3;
    private: CLserviceSeuil^ oSvc4;
    private: CLservicePlus^ oSvc5;
    private: CLserviceMoins^ oSvc6;
    private: CLserviceCommande^ oSvc7;
    private: System::Data::DataSet^ oDs;

    protected:
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::TextBox^ tbDateEmission;
    private: System::Windows::Forms::TextBox^ tbIdAdressFact;
    private: System::Windows::Forms::TextBox^ tbMoyenPayement;
    private: System::Windows::Forms::TextBox^ tbPrixTTCCommande;
    private: System::Windows::Forms::TextBox^ tbDateLivraison;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ R;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::TextBox^ tbIdPrsnComm;
    private: System::Windows::Forms::TextBox^ tbIdClientComm;
    private: System::Windows::Forms::TextBox^ tnQuantite;
    private: System::Windows::Forms::TextBox^ tbRefArticleComm;
    private: System::Windows::Forms::TextBox^ tbDatePayement;
    private: System::Windows::Forms::TextBox^ tbIdAdressLivr;
    private: System::Windows::Forms::TextBox^ tbRemise;
    private: System::Windows::Forms::TextBox^ tbPrixHTCommande;
    private: System::Windows::Forms::TextBox^ tbRefCommande;
    private: System::Windows::Forms::Button^ btnSuppComm;
    private: System::Windows::Forms::Button^ btnModifierComm;
    private: System::Windows::Forms::Button^ btnCreerComm;
    private: System::Windows::Forms::Button^ btnAjouterALaComm;
    private: System::Windows::Forms::Button^ btnAfficherComm;
    private: System::Windows::Forms::DataGridView^ dataGridCommande;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::DataGridView^ dataGridViewClient;
    private: System::Windows::Forms::Button^ btnSupprClient;
    private: System::Windows::Forms::Button^ btnModClient;
    private: System::Windows::Forms::Button^ btnCreerClient;
    private: System::Windows::Forms::Button^ btnAffClient;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ tbDateClient;
    private: System::Windows::Forms::TextBox^ tbPrenomClient;
    private: System::Windows::Forms::TextBox^ tbMdpClient;
    private: System::Windows::Forms::TextBox^ tbEmailClient;
    private: System::Windows::Forms::TextBox^ tbNomClient;
    private: System::Windows::Forms::TextBox^ tbIDclient;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::Button^ btnClearArt;
    private: System::Windows::Forms::Button^ btnSupprArticle;
    private: System::Windows::Forms::Button^ btnModifArticle;
    private: System::Windows::Forms::Button^ btnCreerArticle;
    private: System::Windows::Forms::Button^ btnAffArticle;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ tbPrixTTC;
    private: System::Windows::Forms::TextBox^ tbPrixHT;
    private: System::Windows::Forms::TextBox^ tbPrixAchat;
    private: System::Windows::Forms::TextBox^ tbNomArticle;
    private: System::Windows::Forms::TextBox^ tbCouleurArticle;
    private: System::Windows::Forms::TextBox^ tbIdType;
    private: System::Windows::Forms::TextBox^ tbRefArticle;
    private: System::Windows::Forms::DataGridView^ dataGridViewArticle;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::DataGridView^ dataGridStockage;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::TextBox^ tbDateReapro;
    private: System::Windows::Forms::TextBox^ tbStockAdd;
    private: System::Windows::Forms::TextBox^ tbStockMini;
    private: System::Windows::Forms::TextBox^ tbRefStock;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonnelForm::typeid));
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->GestionStats = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->tbDateEmission = (gcnew System::Windows::Forms::TextBox());
            this->tbIdAdressFact = (gcnew System::Windows::Forms::TextBox());
            this->tbMoyenPayement = (gcnew System::Windows::Forms::TextBox());
            this->tbPrixTTCCommande = (gcnew System::Windows::Forms::TextBox());
            this->tbDateLivraison = (gcnew System::Windows::Forms::TextBox());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->R = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->tbIdPrsnComm = (gcnew System::Windows::Forms::TextBox());
            this->tbIdClientComm = (gcnew System::Windows::Forms::TextBox());
            this->tnQuantite = (gcnew System::Windows::Forms::TextBox());
            this->tbRefArticleComm = (gcnew System::Windows::Forms::TextBox());
            this->tbDatePayement = (gcnew System::Windows::Forms::TextBox());
            this->tbIdAdressLivr = (gcnew System::Windows::Forms::TextBox());
            this->tbRemise = (gcnew System::Windows::Forms::TextBox());
            this->tbPrixHTCommande = (gcnew System::Windows::Forms::TextBox());
            this->tbRefCommande = (gcnew System::Windows::Forms::TextBox());
            this->btnSuppComm = (gcnew System::Windows::Forms::Button());
            this->btnModifierComm = (gcnew System::Windows::Forms::Button());
            this->btnCreerComm = (gcnew System::Windows::Forms::Button());
            this->btnAjouterALaComm = (gcnew System::Windows::Forms::Button());
            this->btnAfficherComm = (gcnew System::Windows::Forms::Button());
            this->dataGridCommande = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
            this->btnSupprClient = (gcnew System::Windows::Forms::Button());
            this->btnModClient = (gcnew System::Windows::Forms::Button());
            this->btnCreerClient = (gcnew System::Windows::Forms::Button());
            this->btnAffClient = (gcnew System::Windows::Forms::Button());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->tbDateClient = (gcnew System::Windows::Forms::TextBox());
            this->tbPrenomClient = (gcnew System::Windows::Forms::TextBox());
            this->tbMdpClient = (gcnew System::Windows::Forms::TextBox());
            this->tbEmailClient = (gcnew System::Windows::Forms::TextBox());
            this->tbNomClient = (gcnew System::Windows::Forms::TextBox());
            this->tbIDclient = (gcnew System::Windows::Forms::TextBox());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->btnClearArt = (gcnew System::Windows::Forms::Button());
            this->btnSupprArticle = (gcnew System::Windows::Forms::Button());
            this->btnModifArticle = (gcnew System::Windows::Forms::Button());
            this->btnCreerArticle = (gcnew System::Windows::Forms::Button());
            this->btnAffArticle = (gcnew System::Windows::Forms::Button());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->tbPrixTTC = (gcnew System::Windows::Forms::TextBox());
            this->tbPrixHT = (gcnew System::Windows::Forms::TextBox());
            this->tbPrixAchat = (gcnew System::Windows::Forms::TextBox());
            this->tbNomArticle = (gcnew System::Windows::Forms::TextBox());
            this->tbCouleurArticle = (gcnew System::Windows::Forms::TextBox());
            this->tbIdType = (gcnew System::Windows::Forms::TextBox());
            this->tbRefArticle = (gcnew System::Windows::Forms::TextBox());
            this->dataGridViewArticle = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->dataGridStockage = (gcnew System::Windows::Forms::DataGridView());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->tbDateReapro = (gcnew System::Windows::Forms::TextBox());
            this->tbStockAdd = (gcnew System::Windows::Forms::TextBox());
            this->tbStockMini = (gcnew System::Windows::Forms::TextBox());
            this->tbRefStock = (gcnew System::Windows::Forms::TextBox());
            this->GestionStats->SuspendLayout();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCommande))->BeginInit();
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
            this->tabPage5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticle))->BeginInit();
            this->tabPage6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStockage))->BeginInit();
            this->SuspendLayout();
            // 
            // GestionStats
            // 
            this->GestionStats->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
            this->GestionStats->Controls->Add(this->tabPage3);
            this->GestionStats->Controls->Add(this->tabPage4);
            this->GestionStats->Controls->Add(this->tabPage5);
            this->GestionStats->Controls->Add(this->tabPage6);
            this->GestionStats->ItemSize = System::Drawing::Size(1000, 24);
            this->GestionStats->Location = System::Drawing::Point(-2, -4);
            this->GestionStats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->GestionStats->Name = L"GestionStats";
            this->GestionStats->SelectedIndex = 0;
            this->GestionStats->Size = System::Drawing::Size(1416, 736);
            this->GestionStats->TabIndex = 1;
            // 
            // tabPage3
            // 
            this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
            this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tabPage3->Controls->Add(this->label56);
            this->tabPage3->Controls->Add(this->label55);
            this->tabPage3->Controls->Add(this->label48);
            this->tabPage3->Controls->Add(this->label47);
            this->tabPage3->Controls->Add(this->label45);
            this->tabPage3->Controls->Add(this->label43);
            this->tabPage3->Controls->Add(this->label41);
            this->tabPage3->Controls->Add(this->label39);
            this->tabPage3->Controls->Add(this->tbDateEmission);
            this->tabPage3->Controls->Add(this->tbIdAdressFact);
            this->tabPage3->Controls->Add(this->tbMoyenPayement);
            this->tabPage3->Controls->Add(this->tbPrixTTCCommande);
            this->tabPage3->Controls->Add(this->tbDateLivraison);
            this->tabPage3->Controls->Add(this->label51);
            this->tabPage3->Controls->Add(this->label49);
            this->tabPage3->Controls->Add(this->label50);
            this->tabPage3->Controls->Add(this->label42);
            this->tabPage3->Controls->Add(this->label46);
            this->tabPage3->Controls->Add(this->label44);
            this->tabPage3->Controls->Add(this->R);
            this->tabPage3->Controls->Add(this->label40);
            this->tabPage3->Controls->Add(this->label38);
            this->tabPage3->Controls->Add(this->tbIdPrsnComm);
            this->tabPage3->Controls->Add(this->tbIdClientComm);
            this->tabPage3->Controls->Add(this->tnQuantite);
            this->tabPage3->Controls->Add(this->tbRefArticleComm);
            this->tabPage3->Controls->Add(this->tbDatePayement);
            this->tabPage3->Controls->Add(this->tbIdAdressLivr);
            this->tabPage3->Controls->Add(this->tbRemise);
            this->tabPage3->Controls->Add(this->tbPrixHTCommande);
            this->tabPage3->Controls->Add(this->tbRefCommande);
            this->tabPage3->Controls->Add(this->btnSuppComm);
            this->tabPage3->Controls->Add(this->btnModifierComm);
            this->tabPage3->Controls->Add(this->btnCreerComm);
            this->tabPage3->Controls->Add(this->btnAjouterALaComm);
            this->tabPage3->Controls->Add(this->btnAfficherComm);
            this->tabPage3->Controls->Add(this->dataGridCommande);
            this->tabPage3->Location = System::Drawing::Point(4, 28);
            this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Size = System::Drawing::Size(1408, 704);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Gestion des commandes";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->BackColor = System::Drawing::Color::Transparent;
            this->label56->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->ForeColor = System::Drawing::Color::Silver;
            this->label56->Location = System::Drawing::Point(240, 459);
            this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(173, 18);
            this->label56->TabIndex = 35;
            this->label56->Text = L"Format : MM-JJ-AAAA";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->BackColor = System::Drawing::Color::Transparent;
            this->label55->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::Color::Silver;
            this->label55->Location = System::Drawing::Point(461, 459);
            this->label55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(173, 18);
            this->label55->TabIndex = 34;
            this->label55->Text = L"Format : MM-JJ-AAAA";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->BackColor = System::Drawing::Color::Transparent;
            this->label48->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(116, 57);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(425, 36);
            this->label48->TabIndex = 13;
            this->label48->Text = L"Gestion des commandes";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->BackColor = System::Drawing::Color::Transparent;
            this->label47->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label47->Location = System::Drawing::Point(441, 399);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(169, 20);
            this->label47->TabIndex = 12;
            this->label47->Text = L"Date d\'émission:";
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->BackColor = System::Drawing::Color::Transparent;
            this->label45->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label45->Location = System::Drawing::Point(441, 327);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(193, 20);
            this->label45->TabIndex = 12;
            this->label45->Text = L"ID adr facturation :";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->BackColor = System::Drawing::Color::Transparent;
            this->label43->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label43->Location = System::Drawing::Point(441, 260);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(213, 20);
            this->label43->TabIndex = 12;
            this->label43->Text = L"Moyen de payement :";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->BackColor = System::Drawing::Color::Transparent;
            this->label41->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label41->Location = System::Drawing::Point(441, 198);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(101, 20);
            this->label41->TabIndex = 12;
            this->label41->Text = L"Prix TTC :";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->BackColor = System::Drawing::Color::Transparent;
            this->label39->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label39->Location = System::Drawing::Point(441, 136);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(154, 20);
            this->label39->TabIndex = 12;
            this->label39->Text = L"Date livraison :";
            // 
            // tbDateEmission
            // 
            this->tbDateEmission->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbDateEmission->Location = System::Drawing::Point(441, 429);
            this->tbDateEmission->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbDateEmission->Name = L"tbDateEmission";
            this->tbDateEmission->Size = System::Drawing::Size(226, 28);
            this->tbDateEmission->TabIndex = 11;
            this->tbDateEmission->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbIdAdressFact
            // 
            this->tbIdAdressFact->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIdAdressFact->Location = System::Drawing::Point(441, 357);
            this->tbIdAdressFact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbIdAdressFact->Name = L"tbIdAdressFact";
            this->tbIdAdressFact->Size = System::Drawing::Size(226, 28);
            this->tbIdAdressFact->TabIndex = 11;
            this->tbIdAdressFact->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbMoyenPayement
            // 
            this->tbMoyenPayement->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbMoyenPayement->Location = System::Drawing::Point(441, 290);
            this->tbMoyenPayement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbMoyenPayement->Name = L"tbMoyenPayement";
            this->tbMoyenPayement->Size = System::Drawing::Size(226, 28);
            this->tbMoyenPayement->TabIndex = 11;
            this->tbMoyenPayement->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbPrixTTCCommande
            // 
            this->tbPrixTTCCommande->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrixTTCCommande->Location = System::Drawing::Point(441, 228);
            this->tbPrixTTCCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbPrixTTCCommande->Name = L"tbPrixTTCCommande";
            this->tbPrixTTCCommande->Size = System::Drawing::Size(226, 28);
            this->tbPrixTTCCommande->TabIndex = 11;
            this->tbPrixTTCCommande->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbDateLivraison
            // 
            this->tbDateLivraison->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbDateLivraison->Location = System::Drawing::Point(441, 166);
            this->tbDateLivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbDateLivraison->Name = L"tbDateLivraison";
            this->tbDateLivraison->Size = System::Drawing::Size(226, 28);
            this->tbDateLivraison->TabIndex = 11;
            this->tbDateLivraison->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->BackColor = System::Drawing::Color::Transparent;
            this->label51->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label51->Location = System::Drawing::Point(239, 506);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(99, 20);
            this->label51->TabIndex = 10;
            this->label51->Text = L"ID_prsn :";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->BackColor = System::Drawing::Color::Transparent;
            this->label49->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label49->Location = System::Drawing::Point(239, 557);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(110, 20);
            this->label49->TabIndex = 10;
            this->label49->Text = L"ID_client :";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->BackColor = System::Drawing::Color::Transparent;
            this->label50->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label50->Location = System::Drawing::Point(672, 89);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(104, 20);
            this->label50->TabIndex = 10;
            this->label50->Text = L"Quantité :";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->BackColor = System::Drawing::Color::Transparent;
            this->label42->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label42->Location = System::Drawing::Point(672, 38);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(119, 20);
            this->label42->TabIndex = 10;
            this->label42->Text = L"Ref article :";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->BackColor = System::Drawing::Color::Transparent;
            this->label46->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label46->Location = System::Drawing::Point(211, 399);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(195, 20);
            this->label46->TabIndex = 10;
            this->label46->Text = L"Date de payement :";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->BackColor = System::Drawing::Color::Transparent;
            this->label44->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label44->Location = System::Drawing::Point(211, 327);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(170, 20);
            this->label44->TabIndex = 10;
            this->label44->Text = L"ID adr livraison :";
            // 
            // R
            // 
            this->R->AutoSize = true;
            this->R->BackColor = System::Drawing::Color::Transparent;
            this->R->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->R->Location = System::Drawing::Point(211, 260);
            this->R->Name = L"R";
            this->R->Size = System::Drawing::Size(91, 20);
            this->R->TabIndex = 10;
            this->R->Text = L"Remise :";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->BackColor = System::Drawing::Color::Transparent;
            this->label40->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label40->Location = System::Drawing::Point(211, 198);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(85, 20);
            this->label40->TabIndex = 10;
            this->label40->Text = L"Prix HT:";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->BackColor = System::Drawing::Color::Transparent;
            this->label38->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label38->Location = System::Drawing::Point(211, 136);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(163, 20);
            this->label38->TabIndex = 10;
            this->label38->Text = L"Ref commande :";
            // 
            // tbIdPrsnComm
            // 
            this->tbIdPrsnComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIdPrsnComm->Location = System::Drawing::Point(364, 505);
            this->tbIdPrsnComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbIdPrsnComm->Name = L"tbIdPrsnComm";
            this->tbIdPrsnComm->Size = System::Drawing::Size(220, 28);
            this->tbIdPrsnComm->TabIndex = 9;
            this->tbIdPrsnComm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbIdClientComm
            // 
            this->tbIdClientComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIdClientComm->Location = System::Drawing::Point(364, 556);
            this->tbIdClientComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbIdClientComm->Name = L"tbIdClientComm";
            this->tbIdClientComm->Size = System::Drawing::Size(220, 28);
            this->tbIdClientComm->TabIndex = 9;
            this->tbIdClientComm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tnQuantite
            // 
            this->tnQuantite->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tnQuantite->Location = System::Drawing::Point(817, 86);
            this->tnQuantite->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tnQuantite->Name = L"tnQuantite";
            this->tnQuantite->Size = System::Drawing::Size(118, 28);
            this->tnQuantite->TabIndex = 9;
            this->tnQuantite->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbRefArticleComm
            // 
            this->tbRefArticleComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbRefArticleComm->Location = System::Drawing::Point(817, 38);
            this->tbRefArticleComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbRefArticleComm->Name = L"tbRefArticleComm";
            this->tbRefArticleComm->Size = System::Drawing::Size(118, 28);
            this->tbRefArticleComm->TabIndex = 9;
            this->tbRefArticleComm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbDatePayement
            // 
            this->tbDatePayement->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbDatePayement->Location = System::Drawing::Point(211, 429);
            this->tbDatePayement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbDatePayement->Name = L"tbDatePayement";
            this->tbDatePayement->Size = System::Drawing::Size(220, 28);
            this->tbDatePayement->TabIndex = 9;
            this->tbDatePayement->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbIdAdressLivr
            // 
            this->tbIdAdressLivr->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIdAdressLivr->Location = System::Drawing::Point(211, 357);
            this->tbIdAdressLivr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbIdAdressLivr->Name = L"tbIdAdressLivr";
            this->tbIdAdressLivr->Size = System::Drawing::Size(220, 28);
            this->tbIdAdressLivr->TabIndex = 9;
            this->tbIdAdressLivr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbRemise
            // 
            this->tbRemise->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbRemise->Location = System::Drawing::Point(211, 290);
            this->tbRemise->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbRemise->Name = L"tbRemise";
            this->tbRemise->Size = System::Drawing::Size(220, 28);
            this->tbRemise->TabIndex = 9;
            this->tbRemise->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbPrixHTCommande
            // 
            this->tbPrixHTCommande->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrixHTCommande->Location = System::Drawing::Point(211, 228);
            this->tbPrixHTCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbPrixHTCommande->Name = L"tbPrixHTCommande";
            this->tbPrixHTCommande->Size = System::Drawing::Size(220, 28);
            this->tbPrixHTCommande->TabIndex = 9;
            this->tbPrixHTCommande->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbRefCommande
            // 
            this->tbRefCommande->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbRefCommande->Location = System::Drawing::Point(211, 166);
            this->tbRefCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbRefCommande->Name = L"tbRefCommande";
            this->tbRefCommande->Size = System::Drawing::Size(220, 28);
            this->tbRefCommande->TabIndex = 9;
            this->tbRefCommande->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // btnSuppComm
            // 
            this->btnSuppComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSuppComm->Location = System::Drawing::Point(934, 535);
            this->btnSuppComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnSuppComm->Name = L"btnSuppComm";
            this->btnSuppComm->Size = System::Drawing::Size(200, 38);
            this->btnSuppComm->TabIndex = 5;
            this->btnSuppComm->Text = L"Supprimer";
            this->btnSuppComm->UseVisualStyleBackColor = true;
            this->btnSuppComm->Click += gcnew System::EventHandler(this, &PersonnelForm::btnSuppComm_Click);
            // 
            // btnModifierComm
            // 
            this->btnModifierComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnModifierComm->Location = System::Drawing::Point(702, 535);
            this->btnModifierComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnModifierComm->Name = L"btnModifierComm";
            this->btnModifierComm->Size = System::Drawing::Size(196, 38);
            this->btnModifierComm->TabIndex = 6;
            this->btnModifierComm->Text = L"Modifier";
            this->btnModifierComm->UseVisualStyleBackColor = true;
            this->btnModifierComm->Click += gcnew System::EventHandler(this, &PersonnelForm::btnModifierComm_Click);
            // 
            // btnCreerComm
            // 
            this->btnCreerComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCreerComm->Location = System::Drawing::Point(934, 473);
            this->btnCreerComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnCreerComm->Name = L"btnCreerComm";
            this->btnCreerComm->Size = System::Drawing::Size(200, 38);
            this->btnCreerComm->TabIndex = 7;
            this->btnCreerComm->Text = L"Créer";
            this->btnCreerComm->UseVisualStyleBackColor = true;
            this->btnCreerComm->Click += gcnew System::EventHandler(this, &PersonnelForm::btnCreerComm_Click);
            // 
            // btnAjouterALaComm
            // 
            this->btnAjouterALaComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAjouterALaComm->Location = System::Drawing::Point(960, 38);
            this->btnAjouterALaComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnAjouterALaComm->Name = L"btnAjouterALaComm";
            this->btnAjouterALaComm->Size = System::Drawing::Size(196, 76);
            this->btnAjouterALaComm->TabIndex = 8;
            this->btnAjouterALaComm->Text = L"Ajouter à la commande";
            this->btnAjouterALaComm->UseVisualStyleBackColor = true;
            // 
            // btnAfficherComm
            // 
            this->btnAfficherComm->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAfficherComm->Location = System::Drawing::Point(702, 473);
            this->btnAfficherComm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnAfficherComm->Name = L"btnAfficherComm";
            this->btnAfficherComm->Size = System::Drawing::Size(196, 38);
            this->btnAfficherComm->TabIndex = 8;
            this->btnAfficherComm->Text = L"Afficher";
            this->btnAfficherComm->UseVisualStyleBackColor = true;
            this->btnAfficherComm->Click += gcnew System::EventHandler(this, &PersonnelForm::btnAfficherComm_Click);
            // 
            // dataGridCommande
            // 
            this->dataGridCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridCommande->Location = System::Drawing::Point(675, 127);
            this->dataGridCommande->Name = L"dataGridCommande";
            this->dataGridCommande->RowHeadersVisible = false;
            this->dataGridCommande->RowHeadersWidth = 51;
            this->dataGridCommande->RowTemplate->Height = 24;
            this->dataGridCommande->Size = System::Drawing::Size(720, 330);
            this->dataGridCommande->TabIndex = 0;
            // 
            // tabPage4
            // 
            this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
            this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tabPage4->Controls->Add(this->label17);
            this->tabPage4->Controls->Add(this->label28);
            this->tabPage4->Controls->Add(this->dataGridViewClient);
            this->tabPage4->Controls->Add(this->btnSupprClient);
            this->tabPage4->Controls->Add(this->btnModClient);
            this->tabPage4->Controls->Add(this->btnCreerClient);
            this->tabPage4->Controls->Add(this->btnAffClient);
            this->tabPage4->Controls->Add(this->label19);
            this->tabPage4->Controls->Add(this->label21);
            this->tabPage4->Controls->Add(this->label22);
            this->tabPage4->Controls->Add(this->label24);
            this->tabPage4->Controls->Add(this->label26);
            this->tabPage4->Controls->Add(this->label27);
            this->tabPage4->Controls->Add(this->tbDateClient);
            this->tabPage4->Controls->Add(this->tbPrenomClient);
            this->tabPage4->Controls->Add(this->tbMdpClient);
            this->tabPage4->Controls->Add(this->tbEmailClient);
            this->tabPage4->Controls->Add(this->tbNomClient);
            this->tabPage4->Controls->Add(this->tbIDclient);
            this->tabPage4->Location = System::Drawing::Point(4, 28);
            this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Size = System::Drawing::Size(1408, 704);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Gestion des clients";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::Silver;
            this->label17->Location = System::Drawing::Point(503, 306);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(173, 18);
            this->label17->TabIndex = 33;
            this->label17->Text = L"Format : MM-JJ-AAAA";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->BackColor = System::Drawing::Color::Transparent;
            this->label28->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(115, 58);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(333, 36);
            this->label28->TabIndex = 32;
            this->label28->Text = L"Gestion des clients";
            // 
            // dataGridViewClient
            // 
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridViewClient->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewClient->Cursor = System::Windows::Forms::Cursors::IBeam;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridViewClient->DefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridViewClient->Location = System::Drawing::Point(729, 138);
            this->dataGridViewClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridViewClient->Name = L"dataGridViewClient";
            this->dataGridViewClient->RowHeadersVisible = false;
            this->dataGridViewClient->RowHeadersWidth = 51;
            this->dataGridViewClient->RowTemplate->Height = 24;
            this->dataGridViewClient->Size = System::Drawing::Size(656, 458);
            this->dataGridViewClient->TabIndex = 31;
            // 
            // btnSupprClient
            // 
            this->btnSupprClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSupprClient->Location = System::Drawing::Point(485, 538);
            this->btnSupprClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnSupprClient->Name = L"btnSupprClient";
            this->btnSupprClient->Size = System::Drawing::Size(200, 38);
            this->btnSupprClient->TabIndex = 30;
            this->btnSupprClient->Text = L"Supprimer";
            this->btnSupprClient->UseVisualStyleBackColor = true;
            this->btnSupprClient->Click += gcnew System::EventHandler(this, &PersonnelForm::btnSupprClient_Click);
            // 
            // btnModClient
            // 
            this->btnModClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnModClient->Location = System::Drawing::Point(252, 538);
            this->btnModClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnModClient->Name = L"btnModClient";
            this->btnModClient->Size = System::Drawing::Size(196, 38);
            this->btnModClient->TabIndex = 29;
            this->btnModClient->Text = L"Modifier";
            this->btnModClient->UseVisualStyleBackColor = true;
            this->btnModClient->Click += gcnew System::EventHandler(this, &PersonnelForm::btnModClient_Click);
            // 
            // btnCreerClient
            // 
            this->btnCreerClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCreerClient->Location = System::Drawing::Point(485, 478);
            this->btnCreerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnCreerClient->Name = L"btnCreerClient";
            this->btnCreerClient->Size = System::Drawing::Size(200, 38);
            this->btnCreerClient->TabIndex = 28;
            this->btnCreerClient->Text = L"Créer";
            this->btnCreerClient->UseVisualStyleBackColor = true;
            this->btnCreerClient->Click += gcnew System::EventHandler(this, &PersonnelForm::btnCreerClient_Click);
            // 
            // btnAffClient
            // 
            this->btnAffClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAffClient->Location = System::Drawing::Point(252, 478);
            this->btnAffClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnAffClient->Name = L"btnAffClient";
            this->btnAffClient->Size = System::Drawing::Size(196, 38);
            this->btnAffClient->TabIndex = 27;
            this->btnAffClient->Text = L"Afficher";
            this->btnAffClient->UseVisualStyleBackColor = true;
            this->btnAffClient->Click += gcnew System::EventHandler(this, &PersonnelForm::btnAffClient_Click);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label19->Location = System::Drawing::Point(483, 245);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(194, 20);
            this->label19->TabIndex = 23;
            this->label19->Text = L"Date de naissance :";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label21->Location = System::Drawing::Point(483, 350);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(141, 20);
            this->label21->TabIndex = 21;
            this->label21->Text = L"Mot de passe:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label22->Location = System::Drawing::Point(477, 138);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(66, 20);
            this->label22->TabIndex = 20;
            this->label22->Text = L"Nom :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label24->Location = System::Drawing::Point(219, 245);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(95, 20);
            this->label24->TabIndex = 26;
            this->label24->Text = L"Prenom :";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label26->Location = System::Drawing::Point(219, 350);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(83, 20);
            this->label26->TabIndex = 17;
            this->label26->Text = L"E-mail :";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::Color::Transparent;
            this->label27->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label27->Location = System::Drawing::Point(213, 138);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(139, 20);
            this->label27->TabIndex = 16;
            this->label27->Text = L"ID personne :";
            // 
            // tbDateClient
            // 
            this->tbDateClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbDateClient->Location = System::Drawing::Point(483, 276);
            this->tbDateClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbDateClient->Name = L"tbDateClient";
            this->tbDateClient->Size = System::Drawing::Size(227, 28);
            this->tbDateClient->TabIndex = 12;
            this->tbDateClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbPrenomClient
            // 
            this->tbPrenomClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrenomClient->Location = System::Drawing::Point(219, 276);
            this->tbPrenomClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbPrenomClient->Name = L"tbPrenomClient";
            this->tbPrenomClient->Size = System::Drawing::Size(227, 28);
            this->tbPrenomClient->TabIndex = 10;
            this->tbPrenomClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbMdpClient
            // 
            this->tbMdpClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbMdpClient->Location = System::Drawing::Point(483, 380);
            this->tbMdpClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbMdpClient->Name = L"tbMdpClient";
            this->tbMdpClient->Size = System::Drawing::Size(227, 28);
            this->tbMdpClient->TabIndex = 7;
            this->tbMdpClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbEmailClient
            // 
            this->tbEmailClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbEmailClient->Location = System::Drawing::Point(219, 380);
            this->tbEmailClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbEmailClient->Name = L"tbEmailClient";
            this->tbEmailClient->Size = System::Drawing::Size(227, 28);
            this->tbEmailClient->TabIndex = 6;
            this->tbEmailClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbNomClient
            // 
            this->tbNomClient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbNomClient->Location = System::Drawing::Point(477, 169);
            this->tbNomClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbNomClient->Name = L"tbNomClient";
            this->tbNomClient->Size = System::Drawing::Size(227, 28);
            this->tbNomClient->TabIndex = 15;
            this->tbNomClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tbIDclient
            // 
            this->tbIDclient->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIDclient->Location = System::Drawing::Point(213, 169);
            this->tbIDclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tbIDclient->Name = L"tbIDclient";
            this->tbIDclient->Size = System::Drawing::Size(227, 28);
            this->tbIDclient->TabIndex = 5;
            this->tbIDclient->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tabPage5
            // 
            this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage5.BackgroundImage")));
            this->tabPage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tabPage5->Controls->Add(this->btnClearArt);
            this->tabPage5->Controls->Add(this->btnSupprArticle);
            this->tabPage5->Controls->Add(this->btnModifArticle);
            this->tabPage5->Controls->Add(this->btnCreerArticle);
            this->tabPage5->Controls->Add(this->btnAffArticle);
            this->tabPage5->Controls->Add(this->label30);
            this->tabPage5->Controls->Add(this->label29);
            this->tabPage5->Controls->Add(this->label25);
            this->tabPage5->Controls->Add(this->label23);
            this->tabPage5->Controls->Add(this->label31);
            this->tabPage5->Controls->Add(this->label32);
            this->tabPage5->Controls->Add(this->label20);
            this->tabPage5->Controls->Add(this->label18);
            this->tabPage5->Controls->Add(this->tbPrixTTC);
            this->tabPage5->Controls->Add(this->tbPrixHT);
            this->tabPage5->Controls->Add(this->tbPrixAchat);
            this->tabPage5->Controls->Add(this->tbNomArticle);
            this->tabPage5->Controls->Add(this->tbCouleurArticle);
            this->tabPage5->Controls->Add(this->tbIdType);
            this->tabPage5->Controls->Add(this->tbRefArticle);
            this->tabPage5->Controls->Add(this->dataGridViewArticle);
            this->tabPage5->Location = System::Drawing::Point(4, 28);
            this->tabPage5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage5->Size = System::Drawing::Size(1408, 704);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"Gestion des articles";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // btnClearArt
            // 
            this->btnClearArt->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnClearArt->Location = System::Drawing::Point(1000, 607);
            this->btnClearArt->Name = L"btnClearArt";
            this->btnClearArt->Size = System::Drawing::Size(190, 65);
            this->btnClearArt->TabIndex = 40;
            this->btnClearArt->Text = L"Vider les Text Box";
            this->btnClearArt->UseVisualStyleBackColor = true;
            // 
            // btnSupprArticle
            // 
            this->btnSupprArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSupprArticle->Location = System::Drawing::Point(592, 538);
            this->btnSupprArticle->Name = L"btnSupprArticle";
            this->btnSupprArticle->Size = System::Drawing::Size(116, 35);
            this->btnSupprArticle->TabIndex = 39;
            this->btnSupprArticle->Text = L"Supprimer";
            this->btnSupprArticle->UseVisualStyleBackColor = true;
            this->btnSupprArticle->Click += gcnew System::EventHandler(this, &PersonnelForm::btnSupprArticle_Click);
            // 
            // btnModifArticle
            // 
            this->btnModifArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnModifArticle->Location = System::Drawing::Point(415, 540);
            this->btnModifArticle->Name = L"btnModifArticle";
            this->btnModifArticle->Size = System::Drawing::Size(116, 34);
            this->btnModifArticle->TabIndex = 38;
            this->btnModifArticle->Text = L"Modifier";
            this->btnModifArticle->UseVisualStyleBackColor = true;
            this->btnModifArticle->Click += gcnew System::EventHandler(this, &PersonnelForm::btnModifArticle_Click);
            // 
            // btnCreerArticle
            // 
            this->btnCreerArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCreerArticle->Location = System::Drawing::Point(243, 540);
            this->btnCreerArticle->Name = L"btnCreerArticle";
            this->btnCreerArticle->Size = System::Drawing::Size(116, 33);
            this->btnCreerArticle->TabIndex = 37;
            this->btnCreerArticle->Text = L"Créer";
            this->btnCreerArticle->UseVisualStyleBackColor = true;
            this->btnCreerArticle->Click += gcnew System::EventHandler(this, &PersonnelForm::btnCreerArticle_Click);
            // 
            // btnAffArticle
            // 
            this->btnAffArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAffArticle->Location = System::Drawing::Point(1000, 540);
            this->btnAffArticle->Name = L"btnAffArticle";
            this->btnAffArticle->Size = System::Drawing::Size(190, 41);
            this->btnAffArticle->TabIndex = 36;
            this->btnAffArticle->Text = L"Afficher Article";
            this->btnAffArticle->UseVisualStyleBackColor = true;
            this->btnAffArticle->Click += gcnew System::EventHandler(this, &PersonnelForm::btnAffArticle_Click);
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->BackColor = System::Drawing::Color::Transparent;
            this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label30->Location = System::Drawing::Point(237, 449);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(121, 25);
            this->label30->TabIndex = 34;
            this->label30->Text = L"Prix TTC :";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::Transparent;
            this->label29->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label29->Location = System::Drawing::Point(217, 367);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(110, 25);
            this->label29->TabIndex = 34;
            this->label29->Text = L"Prix HT :";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::Transparent;
            this->label25->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label25->Location = System::Drawing::Point(217, 292);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(125, 25);
            this->label25->TabIndex = 34;
            this->label25->Text = L"Prix achat";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label23->Location = System::Drawing::Point(217, 215);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(142, 25);
            this->label23->TabIndex = 34;
            this->label23->Text = L"Nom article";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Transparent;
            this->label31->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label31->Location = System::Drawing::Point(488, 215);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(191, 25);
            this->label31->TabIndex = 34;
            this->label31->Text = L"Couleur article :";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label32->Location = System::Drawing::Point(488, 141);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(111, 25);
            this->label32->TabIndex = 34;
            this->label32->Text = L"ID type :";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label20->Location = System::Drawing::Point(217, 141);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(139, 25);
            this->label20->TabIndex = 34;
            this->label20->Text = L"Référence :";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(118, 57);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(347, 36);
            this->label18->TabIndex = 33;
            this->label18->Text = L"Gestion des articles";
            // 
            // tbPrixTTC
            // 
            this->tbPrixTTC->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrixTTC->Location = System::Drawing::Point(242, 486);
            this->tbPrixTTC->Name = L"tbPrixTTC";
            this->tbPrixTTC->Size = System::Drawing::Size(243, 28);
            this->tbPrixTTC->TabIndex = 1;
            // 
            // tbPrixHT
            // 
            this->tbPrixHT->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrixHT->Location = System::Drawing::Point(222, 404);
            this->tbPrixHT->Name = L"tbPrixHT";
            this->tbPrixHT->Size = System::Drawing::Size(243, 28);
            this->tbPrixHT->TabIndex = 1;
            // 
            // tbPrixAchat
            // 
            this->tbPrixAchat->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbPrixAchat->Location = System::Drawing::Point(222, 329);
            this->tbPrixAchat->Name = L"tbPrixAchat";
            this->tbPrixAchat->Size = System::Drawing::Size(243, 28);
            this->tbPrixAchat->TabIndex = 1;
            // 
            // tbNomArticle
            // 
            this->tbNomArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbNomArticle->Location = System::Drawing::Point(222, 252);
            this->tbNomArticle->Name = L"tbNomArticle";
            this->tbNomArticle->Size = System::Drawing::Size(243, 28);
            this->tbNomArticle->TabIndex = 1;
            // 
            // tbCouleurArticle
            // 
            this->tbCouleurArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbCouleurArticle->Location = System::Drawing::Point(493, 252);
            this->tbCouleurArticle->Name = L"tbCouleurArticle";
            this->tbCouleurArticle->Size = System::Drawing::Size(243, 28);
            this->tbCouleurArticle->TabIndex = 1;
            // 
            // tbIdType
            // 
            this->tbIdType->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbIdType->Location = System::Drawing::Point(493, 178);
            this->tbIdType->Name = L"tbIdType";
            this->tbIdType->Size = System::Drawing::Size(243, 28);
            this->tbIdType->TabIndex = 1;
            // 
            // tbRefArticle
            // 
            this->tbRefArticle->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbRefArticle->Location = System::Drawing::Point(222, 178);
            this->tbRefArticle->Name = L"tbRefArticle";
            this->tbRefArticle->Size = System::Drawing::Size(243, 28);
            this->tbRefArticle->TabIndex = 1;
            // 
            // dataGridViewArticle
            // 
            this->dataGridViewArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewArticle->Location = System::Drawing::Point(758, 128);
            this->dataGridViewArticle->Name = L"dataGridViewArticle";
            this->dataGridViewArticle->RowHeadersVisible = false;
            this->dataGridViewArticle->RowHeadersWidth = 51;
            this->dataGridViewArticle->RowTemplate->Height = 24;
            this->dataGridViewArticle->Size = System::Drawing::Size(637, 398);
            this->dataGridViewArticle->TabIndex = 0;
            // 
            // tabPage6
            // 
            this->tabPage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage6.BackgroundImage")));
            this->tabPage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tabPage6->Controls->Add(this->label54);
            this->tabPage6->Controls->Add(this->label37);
            this->tabPage6->Controls->Add(this->button6);
            this->tabPage6->Controls->Add(this->button10);
            this->tabPage6->Controls->Add(this->dataGridStockage);
            this->tabPage6->Controls->Add(this->label36);
            this->tabPage6->Controls->Add(this->label34);
            this->tabPage6->Controls->Add(this->label35);
            this->tabPage6->Controls->Add(this->label33);
            this->tabPage6->Controls->Add(this->tbDateReapro);
            this->tabPage6->Controls->Add(this->tbStockAdd);
            this->tabPage6->Controls->Add(this->tbStockMini);
            this->tabPage6->Controls->Add(this->tbRefStock);
            this->tabPage6->Location = System::Drawing::Point(4, 28);
            this->tabPage6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage6->Size = System::Drawing::Size(1408, 704);
            this->tabPage6->TabIndex = 5;
            this->tabPage6->Text = L"Gestion du stock";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->BackColor = System::Drawing::Color::Transparent;
            this->label54->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::Color::Silver;
            this->label54->Location = System::Drawing::Point(852, 295);
            this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(173, 18);
            this->label54->TabIndex = 45;
            this->label54->Text = L"Format : MM-JJ-AAAA";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->BackColor = System::Drawing::Color::Transparent;
            this->label37->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(116, 61);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(313, 36);
            this->label37->TabIndex = 44;
            this->label37->Text = L"Gestion des stock";
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(408, 328);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(124, 41);
            this->button6->TabIndex = 42;
            this->button6->Text = L"Modifier";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &PersonnelForm::button6_Click);
            // 
            // button10
            // 
            this->button10->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(735, 328);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(290, 41);
            this->button10->TabIndex = 40;
            this->button10->Text = L"Afficher Article Stockage";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &PersonnelForm::button10_Click);
            // 
            // dataGridStockage
            // 
            this->dataGridStockage->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridStockage->Location = System::Drawing::Point(359, 392);
            this->dataGridStockage->Name = L"dataGridStockage";
            this->dataGridStockage->RowHeadersVisible = false;
            this->dataGridStockage->RowHeadersWidth = 51;
            this->dataGridStockage->RowTemplate->Height = 24;
            this->dataGridStockage->Size = System::Drawing::Size(666, 197);
            this->dataGridStockage->TabIndex = 37;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->BackColor = System::Drawing::Color::Transparent;
            this->label36->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label36->Location = System::Drawing::Point(802, 227);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(160, 25);
            this->label36->TabIndex = 36;
            this->label36->Text = L"Date réapro :";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->BackColor = System::Drawing::Color::Transparent;
            this->label34->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label34->Location = System::Drawing::Point(802, 143);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(207, 25);
            this->label34->TabIndex = 36;
            this->label34->Text = L"Stock à rajouter :";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->BackColor = System::Drawing::Color::Transparent;
            this->label35->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label35->Location = System::Drawing::Point(337, 227);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(186, 25);
            this->label35->TabIndex = 36;
            this->label35->Text = L"Stock minimal :";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::Transparent;
            this->label33->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label33->Location = System::Drawing::Point(337, 143);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(139, 25);
            this->label33->TabIndex = 36;
            this->label33->Text = L"Référence :";
            // 
            // tbDateReapro
            // 
            this->tbDateReapro->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbDateReapro->Location = System::Drawing::Point(807, 264);
            this->tbDateReapro->Name = L"tbDateReapro";
            this->tbDateReapro->Size = System::Drawing::Size(243, 28);
            this->tbDateReapro->TabIndex = 35;
            // 
            // tbStockAdd
            // 
            this->tbStockAdd->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbStockAdd->Location = System::Drawing::Point(807, 180);
            this->tbStockAdd->Name = L"tbStockAdd";
            this->tbStockAdd->Size = System::Drawing::Size(243, 28);
            this->tbStockAdd->TabIndex = 35;
            // 
            // tbStockMini
            // 
            this->tbStockMini->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbStockMini->Location = System::Drawing::Point(342, 264);
            this->tbStockMini->Name = L"tbStockMini";
            this->tbStockMini->Size = System::Drawing::Size(243, 28);
            this->tbStockMini->TabIndex = 35;
            // 
            // tbRefStock
            // 
            this->tbRefStock->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbRefStock->Location = System::Drawing::Point(342, 180);
            this->tbRefStock->Name = L"tbRefStock";
            this->tbRefStock->Size = System::Drawing::Size(243, 28);
            this->tbRefStock->TabIndex = 35;
            // 
            // PersonnelForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1412, 729);
            this->Controls->Add(this->GestionStats);
            this->MaximumSize = System::Drawing::Size(1430, 776);
            this->MinimumSize = System::Drawing::Size(1430, 776);
            this->Name = L"PersonnelForm";
            this->Text = L"RSE : Personnel Panel";
            this->Load += gcnew System::EventHandler(this, &PersonnelForm::AdminForm_Load);
            this->GestionStats->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCommande))->EndInit();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticle))->EndInit();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStockage))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
        private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
            this->oSvc = gcnew CLservicesClient();
            this->oSvc2 = gcnew CLserviceArticle();
            this->oSvc3 = gcnew CLserviceStock();
            this->oSvc4 = gcnew CLserviceSeuil();
            this->oSvc5 = gcnew CLservicePlus();
            this->oSvc6 = gcnew CLserviceMoins();
            this->oSvc7 = gcnew CLserviceCommande();
        }

    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->tbRefStock->Text->Length != 0) {
            this->dataGridStockage->Refresh();
            this->oDs = this->oSvc3->selectionneUnArticleStock("Rsl", this->tbRefStock->Text);
            this->dataGridStockage->DataSource = this->oDs;
            this->dataGridStockage->DataMember = "Rsl";
            return;
        }
        this->dataGridStockage->Refresh();
        this->oDs = this->oSvc3->selectionneToutLeStock("Rsl");
        this->dataGridStockage->DataSource = this->oDs;
        this->dataGridStockage->DataMember = "Rsl";
    }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    int numer;
    if (int::TryParse(this->tbStockAdd->Text, numer) && this->tbStockAdd->Text->Length != 0) {
        String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
        String^ sqlQuery = "Select * FROM article WHERE ref_article = '" + this->tbRefStock->Text + "'; ";
        try {
            SqlConnection sqlConn(connString);
            sqlConn.Open();
            SqlCommand command(sqlQuery, % sqlConn);
            SqlDataReader^ reader = command.ExecuteReader();
            if (reader->Read()) {
                int stockage = reader->GetInt32(2);
                sqlConn.Close();
                this->oSvc3->modifierStock(this->tbRefStock->Text, stockage, Convert::ToInt32(this->tbStockAdd->Text));
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
            return;
        }
    }
    if (int::TryParse(this->tbStockMini->Text, numer) && this->tbStockMini->Text->Length != 0) {
        this->oSvc3->modifierMinReap(this->tbRefStock->Text, Convert::ToInt32(this->tbStockMini->Text));
    }
    ///////////////////// MODIFIER LA DATE DE REAPROVISIONNEMENT
    if (this->tbDateReapro->Text->Length != 0) {
        this->oSvc3->modifierDateReap(this->tbRefStock->Text, tbDateReapro->Text);
    }
    MessageBox::Show("Modification effectuée(s)."); MessageBoxButtons::OK;
}

private: System::Void btnAffArticle_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefArticle->Text->Length != 0) {
        this->dataGridViewArticle->Refresh();
        this->oDs = this->oSvc2->selectionnerUnArticle("Rsl", this->tbRefArticle->Text);
        this->dataGridViewArticle->DataSource = this->oDs;
        this->dataGridViewArticle->DataMember = "Rsl";
        return;
    }
    this->dataGridViewArticle->Refresh();
    this->oDs = this->oSvc2->selectionnerTousLesArticles("Rsl");
    this->dataGridViewArticle->DataSource = this->oDs;
    this->dataGridViewArticle->DataMember = "Rsl";
}

private: System::Void btnCreerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefArticle->Text->Length == 0 || this->tbNomArticle->Text->Length == 0 ||
        this->tbPrixAchat->Text->Length == 0 || this->tbPrixHT->Text->Length == 0 ||
        this->tbPrixTTC->Text->Length == 0 || this->tbIdType->Text->Length == 0 ||
        this->tbCouleurArticle->Text->Length == 0) {
        MessageBox::Show("Veuillez remplir les caractéristiques de l'article à créer."); MessageBoxButtons::OK;
        return;
    }
    int numer;
    if (!int::TryParse(this->tbIdType->Text, numer)) {
        MessageBox::Show("Entrez un ID_TYPE valide."); MessageBoxButtons::OK;
        return;
    }
    this->oSvc2->creerArticle(this->tbRefArticle->Text, this->tbNomArticle->Text, Convert::ToDouble(this->tbPrixAchat->Text), Convert::ToDouble(this->tbPrixHT->Text), Convert::ToDouble(this->tbPrixTTC->Text), this->tbCouleurArticle->Text, Convert::ToInt32(this->tbIdType->Text));
    MessageBox::Show("Article enregistrer en mode défault."); MessageBoxButtons::OK;
}
private: System::Void btnModifArticle_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefArticle->Text->Length == 0) {
        MessageBox::Show("Entrer un référence."); MessageBoxButtons::OK;
        return;
    }
    if (this->tbNomArticle->Text->Length != 0) {
        this->oSvc2->modifierNomArticle(this->tbRefArticle->Text, this->tbNomArticle->Text);
    }
    if (this->tbPrixAchat->Text->Length != 0) {
        this->oSvc2->modifierPrixAchat(this->tbRefArticle->Text, Convert::ToDouble(this->tbPrixAchat->Text));
    }
    if (this->tbPrixHT->Text->Length != 0) {
        this->oSvc2->modifierPrixHT(this->tbRefArticle->Text, Convert::ToDouble(this->tbPrixHT->Text));
    }
    if (this->tbPrixTTC->Text->Length != 0) {
        this->oSvc2->modifierPrixTTC(this->tbRefArticle->Text, Convert::ToDouble(this->tbPrixTTC->Text));
    }
    if (this->tbIdType->Text->Length != 0) {
        int numer;
        if (int::TryParse(this->tbIdType->Text, numer)) {
            this->oSvc2->modifierIdType(this->tbRefArticle->Text, Convert::ToInt32(this->tbIdType->Text));
        }
        else {
            MessageBox::Show("ID TYPE non valide."); MessageBoxButtons::OK;
        }
    }
    if (this->tbCouleurArticle->Text->Length != 0) {
        this->oSvc2->modifierCouleur(this->tbRefArticle->Text, this->tbCouleurArticle->Text);
    }
    MessageBox::Show("Modification enregistrer."); MessageBoxButtons::OK;
}
private: System::Void btnSupprArticle_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefArticle->Text->Length == 0) {
        MessageBox::Show("Entrer un référence."); MessageBoxButtons::OK;
        return;
    }
    this->oSvc2->supprimerArticle(this->tbRefArticle->Text);
    MessageBox::Show("Article supprimé."); MessageBoxButtons::OK;
}
private: System::Void btnAffClient_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbIDclient->Text->Length == 0) {
        this->dataGridViewClient->Refresh();
        this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
        this->dataGridViewClient->DataSource = this->oDs;
        this->dataGridViewClient->DataMember = "Rsl";
    }
    else {
        int numer;
        if (int::TryParse(this->tbIDclient->Text, numer)) {
            this->dataGridViewClient->Refresh();
            this->oDs = this->oSvc->selectionnerClientID("Rsl", Convert::ToInt32(this->tbIDclient->Text));
            this->dataGridViewClient->DataSource = this->oDs;
            this->dataGridViewClient->DataMember = "Rsl";
        }
        else {
            MessageBox::Show("Entrer un ID valide."); MessageBoxButtons::OK;
        }
    }
}
private: System::Void btnCreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbNomClient->Text->Length == 0 || this->tbPrenomClient->Text->Length == 0
        || this->tbDateClient->Text->Length == 0 || this->tbEmailClient->Text->Length == 0
        || this->tbMdpClient->Text->Length == 0 || this->tbDateClient->Text->IndexOf("-") != 2 || this->tbDateClient->Text->LastIndexOf("-") != 5) {
        MessageBox::Show("Veuillez remplir les informations manquantes pour créer un Client."); MessageBoxButtons::OK;
        return;
    }
    this->oSvc->ajouterUnePersonne(this->tbNomClient->Text, this->tbPrenomClient->Text, this->tbEmailClient->Text, this->tbMdpClient->Text);
    String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
    String^ sqlQuery = "SELECT * FROM dbo.Personne WHERE email_prsn ='" + this->tbEmailClient->Text + "';";
    try {
        SqlConnection sqlConn(connString);
        sqlConn.Open();
        SqlCommand command(sqlQuery, % sqlConn);
        SqlDataReader^ reader = command.ExecuteReader();
        if (reader->Read()) {
            int ID_prsn = reader->GetInt32(0);
            sqlConn.Close();
            this->oSvc->ajouterUnClient(ID_prsn, this->tbDateClient->Text, this->tbNomClient->Text,
                this->tbPrenomClient->Text, this->tbEmailClient->Text, this->tbMdpClient->Text);
            MessageBox::Show("Enregistrement effectué client."); MessageBoxButtons::OK;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Probleème connection BDD."); MessageBoxButtons::OK;
        return;
    }
}
private: System::Void btnModClient_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbIDclient->Text->Length != 0) {
        int numer;
        if (int::TryParse(this->tbIDclient->Text, numer)) {
            if (this->tbMdpClient->Text->Length < 6 && this->tbMdpClient->Text->Length != 0) {
                MessageBox::Show("Veuillez mettre un mot de passe de 6 caratères minimum."); MessageBoxButtons::OK;
                return;
            }
            if (this->tbDateClient->Text->Length == 10 && this->tbDateClient->Text->IndexOf("-") == 2 && this->tbDateClient->Text->LastIndexOf("-") == 5) {
                this->oSvc->UpdateUnClientDate(Convert::ToString(this->tbDateClient->Text), Convert::ToInt32(this->tbIDclient->Text));
            }
            else {
                MessageBox::Show("Format de date incorrect."); MessageBoxButtons::OK;
                return;
            }
            if (this->tbNomClient->Text->Length != 0) {
                this->oSvc->UpdateUnePersonneNom(this->tbNomClient->Text, Convert::ToInt32(this->tbIDclient->Text));
                this->oSvc->UpdateUnClientNom(this->tbNomClient->Text, Convert::ToInt32(this->tbIDclient->Text));
            }
            if (this->tbPrenomClient->Text->Length != 0) {
                this->oSvc->UpdateUnePersonnePrenom(this->tbPrenomClient->Text, Convert::ToInt32(this->tbIDclient->Text));
                this->oSvc->UpdateUnClientPrenom(this->tbPrenomClient->Text, Convert::ToInt32(this->tbIDclient->Text));
            }
            if (this->tbMdpClient->Text->Length > 5) {
                this->oSvc->UpdateUnePersonneMdp(this->tbMdpClient->Text, Convert::ToInt32(this->tbIDclient->Text));
                this->oSvc->UpdateUnClientMdp(this->tbMdpClient->Text, Convert::ToInt32(this->tbIDclient->Text));
            }
            if (this->tbEmailClient->Text->Length != 0) {
                this->oSvc->UpdateUnePersonneEmail(this->tbEmailClient->Text, Convert::ToInt32(this->tbIDclient->Text));
                this->oSvc->UpdateUnClientEmail(this->tbEmailClient->Text, Convert::ToInt32(this->tbIDclient->Text));
            }
            MessageBox::Show("Modification effectuée."); MessageBoxButtons::OK;
            return;
        }
        else {
            MessageBox::Show("Entrer un ID valide."); MessageBoxButtons::OK;
        }
    }
    else {
        MessageBox::Show("Veuillez remplir un ID_CLIENT valide pour modifier un CLient."); MessageBoxButtons::OK;
        return;
    }
}
private: System::Void btnSupprClient_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbIDclient->Text->Length != 0) {
        int numer;
        if (int::TryParse(this->tbIDclient->Text, numer)) {
            this->oSvc->supprimerUnClient(Convert::ToInt32(this->tbIDclient->Text));    // Max : 2 147 483 647
            this->oSvc->supprimerUnePersonne(Convert::ToInt32(this->tbIDclient->Text)); // Max : 2 147 483 647
            MessageBox::Show("Client supprimer."); MessageBoxButtons::OK;
            return;
        }
        else {
            MessageBox::Show("Entrer un ID valide."); MessageBoxButtons::OK;
        }
    }
    else {
        MessageBox::Show("Veuillez remplir un ID_CLIENT valide pour supprimer un Client."); MessageBoxButtons::OK;
        return;
    }
}
private: System::Void btnAfficherComm_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefCommande->Text->Length == 0) {
        this->dataGridCommande->Refresh();
        this->oDs = this->oSvc7->afficherLesCommandes("Rsl");
        this->dataGridCommande->DataSource = this->oDs;
        this->dataGridCommande->DataMember = "Rsl";
        return;
    }
    this->dataGridCommande->Refresh();
    this->oDs = this->oSvc7->afficherUneCommande("Rsl", this->tbRefCommande->Text);
    this->dataGridCommande->DataSource = this->oDs;
    this->dataGridCommande->DataMember = "Rsl";
}
private: System::Void btnCreerComm_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbIdPrsnComm->Text->Length == 0 || this->tbIdClientComm->Text->Length == 0
        || this->tbIdAdressFact->Text->Length == 0 || this->tbIdAdressLivr->Text->Length == 0) {
        MessageBox::Show("Veuillez entree des ID correspondant au client."); MessageBoxButtons::OK;
        return;
    }
    int numer;
    if (!int::TryParse(this->tbIdPrsnComm->Text, numer) || !int::TryParse(this->tbIdClientComm->Text, numer)
        || !int::TryParse(this->tbIdAdressFact->Text, numer) || !int::TryParse(this->tbIdAdressLivr->Text, numer)) {
        MessageBox::Show("Veuillez inscrire un ID valide."); MessageBoxButtons::OK;
        return;
    }
    String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
    String^ sqlQuery = "SELECT ID_prsn, UPPER(SUBSTRING(nom_prsn, 1,2)), UPPER(SUBSTRING(prenom_prsn, 1,2)), YEAR(GETDATE()) FROM Personne WHERE ID_prsn = '" + this->tbIdPrsnComm->Text + "';";
    String^ sqlQuery1 = "SELECT ID_adresse , UPPER(SUBSTRING(ville_nom_reel, 1,3)) as ville FROM adresse INNER JOIN VilleCodePFrance ON VilleCodePFrance.ville_id = adresse.ville_id WHERE id_adresse = '" + this->tbIdAdressLivr->Text + "'; ";
    String^ sqlQuery3 = "SELECT * FROM Payement WHERE ID_payement = (SELECT MAX(ID_payement) FROM Payement );";
    try {

        SqlConnection sqlConn(connString);
        sqlConn.Open();
        SqlCommand command(sqlQuery, % sqlConn);
        SqlDataReader^ reader = command.ExecuteReader();
        if (reader->Read()) {
            String^ TOT = reader->GetString(1);
            TOT = TOT->Insert(2, reader->GetString(2));
            TOT = TOT->Insert(4, Convert::ToString(reader->GetInt32(3)));
            sqlConn.Close();
            try {
                SqlConnection sqlConn(connString);
                sqlConn.Open();
                SqlCommand command(sqlQuery1, % sqlConn);
                SqlDataReader^ reader1 = command.ExecuteReader();
                if (reader1->Read()) {
                    TOT = TOT = TOT->Insert(8, reader1->GetString(1));
                    sqlConn.Close();
                    try {
                        int var = 1;
                        while (true) {
                            String^ Tmp = TOT->Insert(11, Convert::ToString(var));
                            String^ sqlQuery2 = "SELECT ref_commande FROM commande WHERE ref_commande = '" + Tmp + "';";
                            SqlConnection sqlConn(connString);
                            sqlConn.Open();
                            SqlCommand command(sqlQuery2, % sqlConn);
                            SqlDataReader^ reader2 = command.ExecuteReader();
                            if (reader2->Read()) {
                                var++;
                                continue;
                            }
                            TOT = Tmp;
                            MessageBox::Show(TOT); MessageBoxButtons::OK;
                            try {
                                this->oSvc7->CreerPayement();
                                MessageBox::Show("Payement créer."); MessageBoxButtons::OK;
                                SqlConnection sqlConn(connString);
                                sqlConn.Open();
                                SqlCommand command(sqlQuery3, % sqlConn);
                                SqlDataReader^ reader3 = command.ExecuteReader();
                                if (reader3->Read()) {
                                    int id_pay = reader3->GetInt32(0);
                                    this->oSvc7->CreerCommande(TOT, id_pay, Convert::ToInt32(this->tbIdPrsnComm->Text), Convert::ToInt32(this->tbIdClientComm->Text), Convert::ToInt32(this->tbIdAdressLivr->Text), Convert::ToInt32(this->tbIdAdressFact->Text));
                                    MessageBox::Show("Commande créer"); MessageBoxButtons::OK;
                                }
                                return;
                            }
                            catch (Exception^ e) {
                                MessageBox::Show("Problème connection BDD 4."); MessageBoxButtons::OK;
                                return;
                            }
                        }
                    }
                    catch (Exception^ e) {
                        MessageBox::Show("Problème connection BDD 3."); MessageBoxButtons::OK;
                        return;
                    }
                }
            }
            catch (Exception^ e) {
                MessageBox::Show("Problème connection BDD 2."); MessageBoxButtons::OK;
                return;
            }
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
        return;
    }
}
private: System::Void btnModifierComm_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefCommande->Text->Length == 0) {
        MessageBox::Show("Veuillez entrer une référence de commande."); MessageBoxButtons::OK;
        return;
    }
    if (this->tbDateLivraison->Text->Length != 0) {
        this->oSvc7->ModifierDateLiv(this->tbRefCommande->Text, this->tbDateLivraison->Text);
    }
    if (this->tbDateEmission->Text->Length != 0) {
        this->oSvc7->ModifierDateEmi(this->tbRefCommande->Text, this->tbDateEmission->Text);
    }
    if (this->tbDatePayement->Text->Length != 0) {
        MessageBox::Show("test"); MessageBoxButtons::OK;
        String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
        String^ sqlQuery = "SELECT ID_payement FROM commande WHERE ref_commande ='" + this->tbRefCommande->Text + " ';";
        try {
            SqlConnection sqlConn(connString);
            sqlConn.Open();
            SqlCommand command(sqlQuery, % sqlConn);
            SqlDataReader^ reader = command.ExecuteReader();
            if (reader->Read()) {
                this->oSvc7->ModifierDatePayement(this->tbDatePayement->Text, reader->GetInt32(0));
                sqlConn.Close();
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
            return;
        }
    }
    if (this->tbMoyenPayement->Text->Length != 0) {
        MessageBox::Show("test"); MessageBoxButtons::OK;
        String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
        String^ sqlQuery = "SELECT ID_payement FROM commande WHERE ref_commande ='" + this->tbRefCommande->Text + " ';";
        try {
            SqlConnection sqlConn(connString);
            sqlConn.Open();
            SqlCommand command(sqlQuery, % sqlConn);
            SqlDataReader^ reader = command.ExecuteReader();
            if (reader->Read()) {
                this->oSvc7->ModifierMoyenPayement(this->tbMoyenPayement->Text, reader->GetInt32(0));
                sqlConn.Close();
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
            return;
        }
    }
    if (this->tbPrixHTCommande->Text->Length != 0) {
        this->oSvc7->ModifierPrixHT(this->tbRefCommande->Text, Convert::ToDouble(this->tbPrixHTCommande->Text));
    }
    if (this->tbPrixTTCCommande->Text->Length != 0) {
        this->oSvc7->ModifierPrixTTC(this->tbRefCommande->Text, Convert::ToDouble(this->tbPrixTTCCommande->Text));
    }
    if (this->tbRemise->Text->Length != 0) {
        this->oSvc7->ModifierRemise(this->tbRefCommande->Text, Convert::ToDouble(this->tbRemise->Text));
    }
    if (this->tbIdAdressLivr->Text->Length != 0) {
        this->oSvc7->ModifierIdLiv(this->tbRefCommande->Text, Convert::ToInt32(this->tbIdAdressLivr->Text));
    }
    MessageBox::Show("Modification(s) de la commande enregistrée(s)."); MessageBoxButtons::OK;
}
private: System::Void btnSuppComm_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->tbRefCommande->Text->Length == 0) {
        MessageBox::Show("Veuillez inscrire une référence de commande."); MessageBoxButtons::OK;
        return;
    }
    this->oSvc7->SupprimerCommande(this->tbRefCommande->Text);
    MessageBox::Show("Commande supprimée."); MessageBoxButtons::OK;
}
};
}
