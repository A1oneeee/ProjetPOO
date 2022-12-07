#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AdresseForm
	/// </summary>
	public ref class AdresseForm : public System::Windows::Forms::Form
	{
	public:
		AdresseForm(void)
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
		~AdresseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbInfo;
	protected:
	private: System::Windows::Forms::Label^ lbNumeroRue;
	private: System::Windows::Forms::TextBox^ txtNumeroRue;
	private: System::Windows::Forms::TextBox^ txtNomRue;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ txtVille;
	private: System::Windows::Forms::Label^ lbNomRue;
	private: System::Windows::Forms::Label^ lbCodePostal;
	private: System::Windows::Forms::Label^ lbNomVille;
	private: System::Windows::Forms::Button^ button1;

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
			this->lbInfo = (gcnew System::Windows::Forms::Label());
			this->lbNumeroRue = (gcnew System::Windows::Forms::Label());
			this->txtNumeroRue = (gcnew System::Windows::Forms::TextBox());
			this->txtNomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txtVille = (gcnew System::Windows::Forms::TextBox());
			this->lbNomRue = (gcnew System::Windows::Forms::Label());
			this->lbCodePostal = (gcnew System::Windows::Forms::Label());
			this->lbNomVille = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbInfo
			// 
			this->lbInfo->AutoSize = true;
			this->lbInfo->Location = System::Drawing::Point(28, 13);
			this->lbInfo->Name = L"lbInfo";
			this->lbInfo->Size = System::Drawing::Size(189, 16);
			this->lbInfo->TabIndex = 0;
			this->lbInfo->Text = L"Veuillez saisir vos informations";
			// 
			// lbNumeroRue
			// 
			this->lbNumeroRue->AutoSize = true;
			this->lbNumeroRue->Location = System::Drawing::Point(108, 65);
			this->lbNumeroRue->Name = L"lbNumeroRue";
			this->lbNumeroRue->Size = System::Drawing::Size(49, 16);
			this->lbNumeroRue->TabIndex = 1;
			this->lbNumeroRue->Text = L"N° Rue";
			// 
			// txtNumeroRue
			// 
			this->txtNumeroRue->Location = System::Drawing::Point(163, 62);
			this->txtNumeroRue->Name = L"txtNumeroRue";
			this->txtNumeroRue->Size = System::Drawing::Size(100, 22);
			this->txtNumeroRue->TabIndex = 2;
			// 
			// txtNomRue
			// 
			this->txtNomRue->Location = System::Drawing::Point(163, 90);
			this->txtNomRue->Name = L"txtNomRue";
			this->txtNomRue->Size = System::Drawing::Size(100, 22);
			this->txtNomRue->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(163, 146);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 5;
			// 
			// txtVille
			// 
			this->txtVille->Location = System::Drawing::Point(163, 118);
			this->txtVille->Name = L"txtVille";
			this->txtVille->Size = System::Drawing::Size(100, 22);
			this->txtVille->TabIndex = 6;
			// 
			// lbNomRue
			// 
			this->lbNomRue->AutoSize = true;
			this->lbNomRue->Location = System::Drawing::Point(97, 93);
			this->lbNomRue->Name = L"lbNomRue";
			this->lbNomRue->Size = System::Drawing::Size(60, 16);
			this->lbNomRue->TabIndex = 8;
			this->lbNomRue->Text = L"Non Rue";
			// 
			// lbCodePostal
			// 
			this->lbCodePostal->AutoSize = true;
			this->lbCodePostal->Location = System::Drawing::Point(76, 149);
			this->lbCodePostal->Name = L"lbCodePostal";
			this->lbCodePostal->Size = System::Drawing::Size(81, 16);
			this->lbCodePostal->TabIndex = 9;
			this->lbCodePostal->Text = L"Code Postal";
			// 
			// lbNomVille
			// 
			this->lbNomVille->AutoSize = true;
			this->lbNomVille->Location = System::Drawing::Point(124, 121);
			this->lbNomVille->Name = L"lbNomVille";
			this->lbNomVille->Size = System::Drawing::Size(33, 16);
			this->lbNomVille->TabIndex = 10;
			this->lbNomVille->Text = L"Ville";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Continuer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// AdresseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 457);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbNomVille);
			this->Controls->Add(this->lbCodePostal);
			this->Controls->Add(this->lbNomRue);
			this->Controls->Add(this->txtVille);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->txtNomRue);
			this->Controls->Add(this->txtNumeroRue);
			this->Controls->Add(this->lbNumeroRue);
			this->Controls->Add(this->lbInfo);
			this->Name = L"AdresseForm";
			this->Text = L"AdresseForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
