#pragma once

#include "CLservices.h"
#include "ServicesClient.h"
#include "LoginForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: NS_Comp_Svc::CLservices^ oSvc;
	private: NS_Comp_Svc::ServicesClient^ oSvc1;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::ToolStripPanel^ BottomToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^ TopToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^ RightToolStripPanel;
	private: System::Windows::Forms::ToolStripPanel^ LeftToolStripPanel;
	private: System::Windows::Forms::ToolStripContentPanel^ ContentPanel;
	private: System::Windows::Forms::Label^ lbMdp;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtMdp;
	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Button^ btnContinuer;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::Label^ lbCreerCompte;
	private: System::Windows::Forms::Label^ lbText;
	private: System::Windows::Forms::LinkLabel^ llbSeConnecter;
	private: System::Windows::Forms::Label^ lbConfirmMdp;
	private: System::Windows::Forms::TextBox^ txtConfirmMdp;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SplitContainer^ splitContainer4;
	private: System::Windows::Forms::SplitContainer^ splitContainer5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::SplitContainer^ splitContainer6;
	private: System::Windows::Forms::Label^ lbDateNaissance;







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
			this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbNom = (gcnew System::Windows::Forms::Label());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtMdp = (gcnew System::Windows::Forms::TextBox());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->btnContinuer = (gcnew System::Windows::Forms::Button());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->lbCreerCompte = (gcnew System::Windows::Forms::Label());
			this->lbText = (gcnew System::Windows::Forms::Label());
			this->llbSeConnecter = (gcnew System::Windows::Forms::LinkLabel());
			this->lbConfirmMdp = (gcnew System::Windows::Forms::Label());
			this->txtConfirmMdp = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->lbDateNaissance = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			this->SuspendLayout();
			// 
			// BottomToolStripPanel
			// 
			this->BottomToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->BottomToolStripPanel->Name = L"BottomToolStripPanel";
			this->BottomToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->BottomToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->BottomToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// TopToolStripPanel
			// 
			this->TopToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->TopToolStripPanel->Name = L"TopToolStripPanel";
			this->TopToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->TopToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->TopToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// RightToolStripPanel
			// 
			this->RightToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->RightToolStripPanel->Name = L"RightToolStripPanel";
			this->RightToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->RightToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->RightToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// LeftToolStripPanel
			// 
			this->LeftToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->LeftToolStripPanel->Name = L"LeftToolStripPanel";
			this->LeftToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->LeftToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->LeftToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// ContentPanel
			// 
			this->ContentPanel->BackColor = System::Drawing::Color::LightGray;
			this->ContentPanel->Size = System::Drawing::Size(582, 552);
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMdp->Location = System::Drawing::Point(3, 25);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(117, 18);
			this->lbMdp->TabIndex = 12;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(3, 25);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(59, 18);
			this->lbEmail->TabIndex = 13;
			this->lbEmail->Text = L"E-mail";
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNom->Location = System::Drawing::Point(3, 25);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(46, 18);
			this->lbNom->TabIndex = 11;
			this->lbNom->Text = L"Nom";
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(3, 25);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(72, 18);
			this->lbPrenom->TabIndex = 14;
			this->lbPrenom->Text = L"Prénom";
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(4, 4);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(716, 40);
			this->txtEmail->TabIndex = 9;
			// 
			// txtMdp
			// 
			this->txtMdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMdp->Location = System::Drawing::Point(4, 4);
			this->txtMdp->Margin = System::Windows::Forms::Padding(4);
			this->txtMdp->Multiline = true;
			this->txtMdp->Name = L"txtMdp";
			this->txtMdp->PasswordChar = '*';
			this->txtMdp->Size = System::Drawing::Size(350, 40);
			this->txtMdp->TabIndex = 8;
			// 
			// txtPrenom
			// 
			this->txtPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrenom->Location = System::Drawing::Point(4, 5);
			this->txtPrenom->Margin = System::Windows::Forms::Padding(4);
			this->txtPrenom->Multiline = true;
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(350, 40);
			this->txtPrenom->TabIndex = 16;
			// 
			// btnContinuer
			// 
			this->btnContinuer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnContinuer->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnContinuer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btnContinuer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btnContinuer->Location = System::Drawing::Point(15, 466);
			this->btnContinuer->Margin = System::Windows::Forms::Padding(4);
			this->btnContinuer->Name = L"btnContinuer";
			this->btnContinuer->Size = System::Drawing::Size(354, 46);
			this->btnContinuer->TabIndex = 2;
			this->btnContinuer->Text = L"CONTINUER";
			this->btnContinuer->UseVisualStyleBackColor = false;
			this->btnContinuer->Click += gcnew System::EventHandler(this, &RegisterForm::btnContinuer_Click);
			// 
			// txtNom
			// 
			this->txtNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNom->Location = System::Drawing::Point(4, 5);
			this->txtNom->Margin = System::Windows::Forms::Padding(4);
			this->txtNom->Multiline = true;
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(350, 40);
			this->txtNom->TabIndex = 17;
			// 
			// lbCreerCompte
			// 
			this->lbCreerCompte->AutoSize = true;
			this->lbCreerCompte->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCreerCompte->Location = System::Drawing::Point(10, 10);
			this->lbCreerCompte->Name = L"lbCreerCompte";
			this->lbCreerCompte->Size = System::Drawing::Size(224, 28);
			this->lbCreerCompte->TabIndex = 15;
			this->lbCreerCompte->Text = L"Créer un compte";
			// 
			// lbText
			// 
			this->lbText->AutoSize = true;
			this->lbText->Location = System::Drawing::Point(14, 515);
			this->lbText->Name = L"lbText";
			this->lbText->Size = System::Drawing::Size(175, 16);
			this->lbText->TabIndex = 18;
			this->lbText->Text = L"Vous avez déjà un compte \?";
			// 
			// llbSeConnecter
			// 
			this->llbSeConnecter->AutoSize = true;
			this->llbSeConnecter->Location = System::Drawing::Point(14, 531);
			this->llbSeConnecter->Name = L"llbSeConnecter";
			this->llbSeConnecter->Size = System::Drawing::Size(103, 16);
			this->llbSeConnecter->TabIndex = 19;
			this->llbSeConnecter->TabStop = true;
			this->llbSeConnecter->Text = L"Connectez-vous";
			this->llbSeConnecter->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llbSeConnecter_LinkClicked);
			// 
			// lbConfirmMdp
			// 
			this->lbConfirmMdp->AutoSize = true;
			this->lbConfirmMdp->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbConfirmMdp->Location = System::Drawing::Point(3, 25);
			this->lbConfirmMdp->Name = L"lbConfirmMdp";
			this->lbConfirmMdp->Size = System::Drawing::Size(286, 18);
			this->lbConfirmMdp->TabIndex = 21;
			this->lbConfirmMdp->Text = L"Entrez le mot de passe à nouveau";
			// 
			// txtConfirmMdp
			// 
			this->txtConfirmMdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmMdp->Location = System::Drawing::Point(4, 4);
			this->txtConfirmMdp->Margin = System::Windows::Forms::Padding(4);
			this->txtConfirmMdp->Multiline = true;
			this->txtConfirmMdp->Name = L"txtConfirmMdp";
			this->txtConfirmMdp->PasswordChar = '*';
			this->txtConfirmMdp->Size = System::Drawing::Size(350, 40);
			this->txtConfirmMdp->TabIndex = 20;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(381, 41);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->lbNom);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->txtNom);
			this->splitContainer1->Size = System::Drawing::Size(360, 100);
			this->splitContainer1->TabIndex = 22;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(15, 41);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->lbPrenom);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->txtPrenom);
			this->splitContainer2->Size = System::Drawing::Size(360, 100);
			this->splitContainer2->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"E-mail";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Location = System::Drawing::Point(15, 253);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->lbMdp);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->txtMdp);
			this->splitContainer3->Size = System::Drawing::Size(360, 100);
			this->splitContainer3->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 325);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 25;
			this->label2->Text = L"E-mail";
			// 
			// splitContainer4
			// 
			this->splitContainer4->Location = System::Drawing::Point(381, 253);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->lbConfirmMdp);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->txtConfirmMdp);
			this->splitContainer4->Size = System::Drawing::Size(360, 100);
			this->splitContainer4->TabIndex = 28;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Location = System::Drawing::Point(15, 147);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->lbEmail);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->txtEmail);
			this->splitContainer5->Size = System::Drawing::Size(726, 100);
			this->splitContainer5->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 29;
			this->label4->Text = L"E-mail";
			// 
			// splitContainer6
			// 
			this->splitContainer6->Location = System::Drawing::Point(15, 359);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->lbDateNaissance);
			this->splitContainer6->Size = System::Drawing::Size(360, 100);
			this->splitContainer6->TabIndex = 31;
			// 
			// lbDateNaissance
			// 
			this->lbDateNaissance->AutoSize = true;
			this->lbDateNaissance->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDateNaissance->Location = System::Drawing::Point(3, 25);
			this->lbDateNaissance->Name = L"lbDateNaissance";
			this->lbDateNaissance->Size = System::Drawing::Size(157, 18);
			this->lbDateNaissance->TabIndex = 21;
			this->lbDateNaissance->Text = L"Date de naissance";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->splitContainer6);
			this->Controls->Add(this->splitContainer5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->splitContainer4);
			this->Controls->Add(this->splitContainer3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->splitContainer2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->llbSeConnecter);
			this->Controls->Add(this->lbText);
			this->Controls->Add(this->lbCreerCompte);
			this->Controls->Add(this->btnContinuer);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::MyForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: NS_Comp_Mappage::Personne^ prsn;
	public: NS_Comp_Mappage::Client^ client;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc1 = gcnew NS_Comp_Svc::ServicesClient();
	}

	public: bool switchToLogin = false;
	private: System::Void btnContinuer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ nom = txtNom->Text;
		String^ prenom = txtPrenom->Text;
		String^ email = txtEmail->Text;
		String^ mdp = txtMdp->Text;
		String^ confirm = txtConfirmMdp->Text;

		if (nom->Length == 0 || prenom->Length == 0 || email->Length == 0 || mdp->Length == 0 || confirm->Length == 0)
		{
			MessageBox::Show("Certaines informations ne sont pas remplis", "Informations incomplètes", MessageBoxButtons::OK);
			return;
		}
		if (mdp != confirm)
		{
			MessageBox::Show("Mot de passe incorrecte", "Erreur", MessageBoxButtons::OK);
			return;
		}

		this->oSvc->ajouterUnePersonne(this->txtNom->Text, this->txtPrenom->Text, this->txtEmail->Text, this->txtMdp->Text);
		this->oSvc1->ajouterUnClient(this->txtNom->Text, this->txtPrenom->Text, this->txtEmail->Text, this->txtMdp->Text);
		this->switchToLogin = true;
		this->Close();
	}

	private: System::Void llbSeConnecter_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->switchToLogin = true;
		this->Close();
	}
};
}




