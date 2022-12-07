#pragma once

#include"RegisterForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lbSeConnecter;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtMdp;
	private: System::Windows::Forms::Label^ lbMdp;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Label^ lbText;
	private: System::Windows::Forms::LinkLabel^ llbCreerCompte;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::CheckBox^ cbMdp;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->lbText = (gcnew System::Windows::Forms::Label());
			this->llbCreerCompte = (gcnew System::Windows::Forms::LinkLabel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->lbSeConnecter = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtMdp = (gcnew System::Windows::Forms::TextBox());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->cbMdp = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbText
			// 
			this->lbText->AutoSize = true;
			this->lbText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbText->Location = System::Drawing::Point(20, 304);
			this->lbText->Name = L"lbText";
			this->lbText->Size = System::Drawing::Size(267, 16);
			this->lbText->TabIndex = 22;
			this->lbText->Text = L"Vous ne possèdez pas encore de compte \?";
			// 
			// llbCreerCompte
			// 
			this->llbCreerCompte->AutoSize = true;
			this->llbCreerCompte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbCreerCompte->Location = System::Drawing::Point(20, 320);
			this->llbCreerCompte->Name = L"llbCreerCompte";
			this->llbCreerCompte->Size = System::Drawing::Size(123, 16);
			this->llbCreerCompte->TabIndex = 21;
			this->llbCreerCompte->TabStop = true;
			this->llbCreerCompte->Text = L"Créez votre compte";
			this->llbCreerCompte->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llbCreerCompte_LinkClicked);
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->Location = System::Drawing::Point(19, 252);
			this->btnOK->Margin = System::Windows::Forms::Padding(4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(350, 46);
			this->btnOK->TabIndex = 20;
			this->btnOK->Text = L"SE CONNECTER";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// lbSeConnecter
			// 
			this->lbSeConnecter->AutoSize = true;
			this->lbSeConnecter->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSeConnecter->Location = System::Drawing::Point(10, 10);
			this->lbSeConnecter->Name = L"lbSeConnecter";
			this->lbSeConnecter->Size = System::Drawing::Size(178, 28);
			this->lbSeConnecter->TabIndex = 15;
			this->lbSeConnecter->Text = L"Se connecter";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(4, 4);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(350, 40);
			this->txtEmail->TabIndex = 17;
			// 
			// txtMdp
			// 
			this->txtMdp->Location = System::Drawing::Point(4, 4);
			this->txtMdp->Margin = System::Windows::Forms::Padding(4);
			this->txtMdp->Multiline = true;
			this->txtMdp->Name = L"txtMdp";
			this->txtMdp->PasswordChar = '*';
			this->txtMdp->Size = System::Drawing::Size(350, 40);
			this->txtMdp->TabIndex = 16;
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMdp->Location = System::Drawing::Point(3, 22);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(117, 18);
			this->lbMdp->TabIndex = 14;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(3, 22);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(59, 18);
			this->lbEmail->TabIndex = 11;
			this->lbEmail->Text = L"E-mail";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(15, 146);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->lbMdp);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->txtMdp);
			this->splitContainer1->Size = System::Drawing::Size(361, 100);
			this->splitContainer1->TabIndex = 24;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(15, 41);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->lbEmail);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->txtEmail);
			this->splitContainer2->Size = System::Drawing::Size(361, 100);
			this->splitContainer2->TabIndex = 26;
			// 
			// cbMdp
			// 
			this->cbMdp->AutoSize = true;
			this->cbMdp->Location = System::Drawing::Point(376, 217);
			this->cbMdp->Name = L"cbMdp";
			this->cbMdp->Size = System::Drawing::Size(18, 17);
			this->cbMdp->TabIndex = 17;
			this->cbMdp->UseVisualStyleBackColor = true;
			this->cbMdp->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::cbMdp_CheckedChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->cbMdp);
			this->Controls->Add(this->splitContainer2);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->lbText);
			this->Controls->Add(this->llbCreerCompte);
			this->Controls->Add(this->lbSeConnecter);
			this->Controls->Add(this->btnOK);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: NS_Comp_Mappage::Personne^ prsn;

	public: bool switchToCatalogue = false;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////VERIFIE SI LES INFOS DANS LA BASE DE DONNEE PERSONNES/////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		String^ email = this->txtEmail->Text;
		String^ mdp = this->txtMdp->Text;

		String^ connString = "Data Source=LAPTOP-APUR1J6V\\MSSQLSERVER01;Initial Catalog=ProjetPOO;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT email_prsn,mdp_prsn FROM Personne WHERE email_prsn=@email AND mdp_prsn = @mdp;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@mdp", mdp);

		SqlDataReader^ reader = command.ExecuteReader();

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////VERIFIE SI LES IFNOS NE SONT PAS VIDES///////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		if (email == "" || mdp == "")
		{
			MessageBox::Show("Adresse mail ou mot de passe vide", "Erreur", MessageBoxButtons::OK);
			return;
		}

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (reader->Read())
		{
			this->switchToCatalogue = true;
			this->Close();
		}
		else
		{
			MessageBox::Show("Adresse mail ou mot de passe incorrect", "Erreur", MessageBoxButtons::OK);
			return;
		}
	}
	
	public: bool switchToRegister = false;
	private: System::Void llbCreerCompte_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->switchToRegister = true;
		this->Close();
	}

	private: System::Void cbMdp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (cbMdp->Checked)
		{
			txtMdp->UseSystemPasswordChar = true;
		}
		else
		{
			txtMdp->UseSystemPasswordChar = false;
		}
	}
};
}
