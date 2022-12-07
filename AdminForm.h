/*#pragma once

#include "CLservices.h"
#include "Personne.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::TabControl^ tcAdmin;
	private: System::Windows::Forms::TabPage^ Client;
	private: System::Windows::Forms::TabPage^ Article;
	private: System::Windows::Forms::Button^ btnAddClient;
	private: System::Windows::Forms::Button^ btnSuppClient;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbMdp;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::Button^ btnBdd;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtMdp;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbId;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Button^ btnRetour;


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
			this->tcAdmin = (gcnew System::Windows::Forms::TabControl());
			this->Client = (gcnew System::Windows::Forms::TabPage());
			this->Article = (gcnew System::Windows::Forms::TabPage());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtMdp = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->lbNom = (gcnew System::Windows::Forms::Label());
			this->btnBdd = (gcnew System::Windows::Forms::Button());
			this->btnSuppClient = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnAddClient = (gcnew System::Windows::Forms::Button());
			this->btnRetour = (gcnew System::Windows::Forms::Button());
			this->tcAdmin->SuspendLayout();
			this->Article->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tcAdmin
			// 
			this->tcAdmin->Controls->Add(this->Client);
			this->tcAdmin->Controls->Add(this->Article);
			this->tcAdmin->Location = System::Drawing::Point(12, 12);
			this->tcAdmin->Name = L"tcAdmin";
			this->tcAdmin->SelectedIndex = 0;
			this->tcAdmin->Size = System::Drawing::Size(1127, 562);
			this->tcAdmin->TabIndex = 1;
			this->tcAdmin->Tag = L"";
			// 
			// Client
			// 
			this->Client->Location = System::Drawing::Point(4, 25);
			this->Client->Name = L"Client";
			this->Client->Padding = System::Windows::Forms::Padding(3);
			this->Client->Size = System::Drawing::Size(1119, 533);
			this->Client->TabIndex = 0;
			this->Client->Text = L"Article";
			this->Client->UseVisualStyleBackColor = true;
			// 
			// Article
			// 
			this->Article->Controls->Add(this->btnRetour);
			this->Article->Controls->Add(this->dgv_enr);
			this->Article->Controls->Add(this->splitContainer3);
			this->Article->Controls->Add(this->splitContainer2);
			this->Article->Controls->Add(this->splitContainer1);
			this->Article->Controls->Add(this->lbId);
			this->Article->Controls->Add(this->lbMdp);
			this->Article->Controls->Add(this->lbEmail);
			this->Article->Controls->Add(this->lbPrenom);
			this->Article->Controls->Add(this->lbNom);
			this->Article->Controls->Add(this->btnBdd);
			this->Article->Controls->Add(this->btnSuppClient);
			this->Article->Controls->Add(this->button2);
			this->Article->Controls->Add(this->btnAddClient);
			this->Article->Location = System::Drawing::Point(4, 25);
			this->Article->Name = L"Article";
			this->Article->Padding = System::Windows::Forms::Padding(3);
			this->Article->Size = System::Drawing::Size(1119, 533);
			this->Article->TabIndex = 1;
			this->Article->Text = L"Client";
			this->Article->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(473, 6);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->RowTemplate->Height = 24;
			this->dgv_enr->Size = System::Drawing::Size(490, 324);
			this->dgv_enr->TabIndex = 18;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Location = System::Drawing::Point(317, 6);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->txtEmail);
			this->splitContainer3->Size = System::Drawing::Size(150, 100);
			this->splitContainer3->TabIndex = 17;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(3, 21);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 22);
			this->txtEmail->TabIndex = 11;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(317, 218);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->txtId);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->txtMdp);
			this->splitContainer2->Size = System::Drawing::Size(150, 100);
			this->splitContainer2->TabIndex = 16;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(3, 25);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 22);
			this->txtId->TabIndex = 14;
			// 
			// txtMdp
			// 
			this->txtMdp->Location = System::Drawing::Point(3, 21);
			this->txtMdp->Name = L"txtMdp";
			this->txtMdp->Size = System::Drawing::Size(100, 22);
			this->txtMdp->TabIndex = 10;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(317, 112);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->txtNom);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->txtPrenom);
			this->splitContainer1->Size = System::Drawing::Size(150, 100);
			this->splitContainer1->TabIndex = 15;
			// 
			// txtNom
			// 
			this->txtNom->Location = System::Drawing::Point(3, 25);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(100, 22);
			this->txtNom->TabIndex = 9;
			// 
			// txtPrenom
			// 
			this->txtPrenom->Location = System::Drawing::Point(3, 21);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(100, 22);
			this->txtPrenom->TabIndex = 12;
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(291, 81);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(20, 16);
			this->lbId->TabIndex = 13;
			this->lbId->Text = L"ID";
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->Location = System::Drawing::Point(222, 293);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(89, 16);
			this->lbMdp->TabIndex = 8;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(266, 243);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(45, 16);
			this->lbEmail->TabIndex = 7;
			this->lbEmail->Text = L"E-mail";
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Location = System::Drawing::Point(260, 187);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(54, 16);
			this->lbPrenom->TabIndex = 6;
			this->lbPrenom->Text = L"Prénom";
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->Location = System::Drawing::Point(275, 137);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(36, 16);
			this->lbNom->TabIndex = 5;
			this->lbNom->Text = L"Nom";
			// 
			// btnBdd
			// 
			this->btnBdd->Location = System::Drawing::Point(473, 417);
			this->btnBdd->Name = L"btnBdd";
			this->btnBdd->Size = System::Drawing::Size(490, 73);
			this->btnBdd->TabIndex = 4;
			this->btnBdd->Text = L"AFFICHER LA BASE DE DONNEE";
			this->btnBdd->UseVisualStyleBackColor = true;
			this->btnBdd->Click += gcnew System::EventHandler(this, &AdminForm::btnBdd_Click);
			// 
			// btnSuppClient
			// 
			this->btnSuppClient->Location = System::Drawing::Point(803, 338);
			this->btnSuppClient->Name = L"btnSuppClient";
			this->btnSuppClient->Size = System::Drawing::Size(160, 73);
			this->btnSuppClient->TabIndex = 3;
			this->btnSuppClient->Text = L"SUPPRIMER";
			this->btnSuppClient->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(639, 338);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 73);
			this->button2->TabIndex = 2;
			this->button2->Text = L"MODIFIER";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnAddClient
			// 
			this->btnAddClient->Location = System::Drawing::Point(473, 336);
			this->btnAddClient->Name = L"btnAddClient";
			this->btnAddClient->Size = System::Drawing::Size(160, 75);
			this->btnAddClient->TabIndex = 1;
			this->btnAddClient->Text = L"AJOUTER";
			this->btnAddClient->UseVisualStyleBackColor = true;
			this->btnAddClient->Click += gcnew System::EventHandler(this, &AdminForm::btnAddClient_Click);
			// 
			// btnRetour
			// 
			this->btnRetour->Location = System::Drawing::Point(1038, 504);
			this->btnRetour->Name = L"btnRetour";
			this->btnRetour->Size = System::Drawing::Size(75, 23);
			this->btnRetour->TabIndex = 19;
			this->btnRetour->Text = L"RETOUR";
			this->btnRetour->UseVisualStyleBackColor = true;
			this->btnRetour->Click += gcnew System::EventHandler(this, &AdminForm::btnRetour_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 586);
			this->Controls->Add(this->tcAdmin);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->tcAdmin->ResumeLayout(false);
			this->Article->ResumeLayout(false);
			this->Article->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc->ajouterUnePersonne(this->txtNom->Text, this->txtPrenom->Text, this->txtEmail->Text, this->txtMdp->Text);
	}


	private: System::Void btnBdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}

	public: NS_Comp_Mappage::Personne^ prsn;
	public: bool switchToLogin = false;
	private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->switchToLogin = true;
		this->Hide();
	}
};
}*/
