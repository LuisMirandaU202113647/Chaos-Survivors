#pragma once
#include "Juego.hpp"

namespace TFCHAOSSURVIVORS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			figuraa = gcnew Bitmap("Pista.png");
			figurab = gcnew Bitmap("Hombre.png");
			figura_winnera = gcnew Bitmap("Winner.png");
			figura_winnerb = gcnew Bitmap("Losser.png");
			figura_enfermo = gcnew Bitmap("Infectado.png");
			figura_Enfermero = gcnew Bitmap("Enfermero.png");
			figura_Virus = gcnew Bitmap("Virus.png");
			figura_HombreP = gcnew Bitmap("HombreProtestante.png");
			figura_Mujer = gcnew Bitmap("Mujer.png");
			figura_BolaNieve = gcnew Bitmap("BolaNieve.png");
			figura_fondo1 = gcnew Bitmap("FondoIntroduccion.png");
			figura_fondo2 = gcnew Bitmap("Fondo2.png");
			figura_MujerP = gcnew Bitmap("MujerProtestante.png");
			figura = gcnew Bitmap("Doctor.png");
			Cjuego = new CJuego(figura, figuraa, figurab, figura_Enfermero, figura_Virus, figura_winnera, figura_winnerb, 15, 4, figura_BolaNieve, 3, 100);
			EEEnfermos = Cjuego->Nenfermos;

			HHabitantes->Text = NumH.ToString();
			EEnfermero->Text = Cjuego->NEnfermero.ToString();
			EEnfermos->Text = Cjuego->Nenfermos.ToString();
			VVirus->Text = Cjuego->NVirus.ToString();
			RRecuperatos->Text = Cjuego->Nrecuperados.ToString();
			PPUNTOS->Text = this->PPPuntos.ToString();
			centinela = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


	protected:
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	private:
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button7;



	private: System::Windows::Forms::Label^ HHtext;
	private: System::Windows::Forms::Label^ HHabitantes;
	private: System::Windows::Forms::Label^ EEnfermero;
	private: System::Windows::Forms::Label^ ENtext;
	private: System::Windows::Forms::Label^ VVirus;
	private: System::Windows::Forms::Label^ VVtext;
	private: System::Windows::Forms::Label^ EEnfermos;
	private: System::Windows::Forms::Label^ EEtext;
	private: System::Windows::Forms::Label^ RRecuperatos;
	private: System::Windows::Forms::Label^ RRtext;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Label^ label3;
	private:
	public: System::Windows::Forms::Button^ button9;
	public: System::Windows::Forms::Button^ button11;
	public: System::Windows::Forms::Button^ button12;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Button^ button13;
	public: System::Windows::Forms::Button^ button14;
	public: System::Windows::Forms::Button^ button15;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button17;

	private:



	private: System::Windows::Forms::Label^ PPUNTOS;


	private:

	private:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->HHtext = (gcnew System::Windows::Forms::Label());
			this->HHabitantes = (gcnew System::Windows::Forms::Label());
			this->EEnfermero = (gcnew System::Windows::Forms::Label());
			this->ENtext = (gcnew System::Windows::Forms::Label());
			this->VVirus = (gcnew System::Windows::Forms::Label());
			this->VVtext = (gcnew System::Windows::Forms::Label());
			this->EEnfermos = (gcnew System::Windows::Forms::Label());
			this->EEtext = (gcnew System::Windows::Forms::Label());
			this->RRecuperatos = (gcnew System::Windows::Forms::Label());
			this->RRtext = (gcnew System::Windows::Forms::Label());
			this->PPUNTOS = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1085, 700);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"iniciar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::OldLace;
			this->button2->Location = System::Drawing::Point(797, 647);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::OldLace;
			this->button3->Location = System::Drawing::Point(868, 646);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::OldLace;
			this->button4->Location = System::Drawing::Point(960, 645);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 53);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(551, 662);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Número de Habitantes";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(581, 705);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 23);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Número de Aliados";
			this->label2->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::OldLace;
			this->button5->Location = System::Drawing::Point(960, 697);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 53);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::OldLace;
			this->button6->Location = System::Drawing::Point(868, 697);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 53);
			this->button6->TabIndex = 6;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::OldLace;
			this->button7->Location = System::Drawing::Point(799, 697);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 53);
			this->button7->TabIndex = 5;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// HHtext
			// 
			this->HHtext->AutoSize = true;
			this->HHtext->BackColor = System::Drawing::Color::White;
			this->HHtext->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HHtext->ForeColor = System::Drawing::Color::Black;
			this->HHtext->Location = System::Drawing::Point(1148, 145);
			this->HHtext->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HHtext->Name = L"HHtext";
			this->HHtext->Size = System::Drawing::Size(131, 23);
			this->HHtext->TabIndex = 10;
			this->HHtext->Text = L"Habitantes:";
			this->HHtext->Visible = false;
			// 
			// HHabitantes
			// 
			this->HHabitantes->AutoSize = true;
			this->HHabitantes->BackColor = System::Drawing::Color::White;
			this->HHabitantes->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HHabitantes->ForeColor = System::Drawing::Color::Black;
			this->HHabitantes->Location = System::Drawing::Point(1148, 171);
			this->HHabitantes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HHabitantes->Name = L"HHabitantes";
			this->HHabitantes->Size = System::Drawing::Size(131, 23);
			this->HHabitantes->TabIndex = 11;
			this->HHabitantes->Text = L"Habitantes:";
			this->HHabitantes->Visible = false;
			// 
			// EEnfermero
			// 
			this->EEnfermero->AutoSize = true;
			this->EEnfermero->BackColor = System::Drawing::Color::White;
			this->EEnfermero->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EEnfermero->ForeColor = System::Drawing::Color::Black;
			this->EEnfermero->Location = System::Drawing::Point(1148, 235);
			this->EEnfermero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EEnfermero->Name = L"EEnfermero";
			this->EEnfermero->Size = System::Drawing::Size(131, 23);
			this->EEnfermero->TabIndex = 13;
			this->EEnfermero->Text = L"Habitantes:";
			this->EEnfermero->Visible = false;
			// 
			// ENtext
			// 
			this->ENtext->AutoSize = true;
			this->ENtext->BackColor = System::Drawing::Color::White;
			this->ENtext->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ENtext->ForeColor = System::Drawing::Color::Black;
			this->ENtext->Location = System::Drawing::Point(1148, 209);
			this->ENtext->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ENtext->Name = L"ENtext";
			this->ENtext->Size = System::Drawing::Size(124, 23);
			this->ENtext->TabIndex = 12;
			this->ENtext->Text = L"Enfermero:";
			this->ENtext->Visible = false;
			// 
			// VVirus
			// 
			this->VVirus->AutoSize = true;
			this->VVirus->BackColor = System::Drawing::Color::White;
			this->VVirus->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VVirus->ForeColor = System::Drawing::Color::Black;
			this->VVirus->Location = System::Drawing::Point(1148, 298);
			this->VVirus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VVirus->Name = L"VVirus";
			this->VVirus->Size = System::Drawing::Size(131, 23);
			this->VVirus->TabIndex = 15;
			this->VVirus->Text = L"Habitantes:";
			this->VVirus->Visible = false;
			// 
			// VVtext
			// 
			this->VVtext->AutoSize = true;
			this->VVtext->BackColor = System::Drawing::Color::White;
			this->VVtext->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VVtext->ForeColor = System::Drawing::Color::Black;
			this->VVtext->Location = System::Drawing::Point(1148, 272);
			this->VVtext->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VVtext->Name = L"VVtext";
			this->VVtext->Size = System::Drawing::Size(69, 23);
			this->VVtext->TabIndex = 14;
			this->VVtext->Text = L"Virus:";
			this->VVtext->Visible = false;
			// 
			// EEnfermos
			// 
			this->EEnfermos->AutoSize = true;
			this->EEnfermos->BackColor = System::Drawing::Color::White;
			this->EEnfermos->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EEnfermos->ForeColor = System::Drawing::Color::Black;
			this->EEnfermos->Location = System::Drawing::Point(1148, 363);
			this->EEnfermos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EEnfermos->Name = L"EEnfermos";
			this->EEnfermos->Size = System::Drawing::Size(131, 23);
			this->EEnfermos->TabIndex = 17;
			this->EEnfermos->Text = L"Habitantes:";
			this->EEnfermos->Visible = false;
			// 
			// EEtext
			// 
			this->EEtext->AutoSize = true;
			this->EEtext->BackColor = System::Drawing::Color::White;
			this->EEtext->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EEtext->ForeColor = System::Drawing::Color::Black;
			this->EEtext->Location = System::Drawing::Point(1148, 337);
			this->EEtext->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EEtext->Name = L"EEtext";
			this->EEtext->Size = System::Drawing::Size(109, 23);
			this->EEtext->TabIndex = 16;
			this->EEtext->Text = L"Enfermos";
			this->EEtext->Visible = false;
			// 
			// RRecuperatos
			// 
			this->RRecuperatos->AutoSize = true;
			this->RRecuperatos->BackColor = System::Drawing::Color::White;
			this->RRecuperatos->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RRecuperatos->ForeColor = System::Drawing::Color::Black;
			this->RRecuperatos->Location = System::Drawing::Point(1148, 428);
			this->RRecuperatos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RRecuperatos->Name = L"RRecuperatos";
			this->RRecuperatos->Size = System::Drawing::Size(131, 23);
			this->RRecuperatos->TabIndex = 19;
			this->RRecuperatos->Text = L"Habitantes:";
			this->RRecuperatos->Visible = false;
			// 
			// RRtext
			// 
			this->RRtext->AutoSize = true;
			this->RRtext->BackColor = System::Drawing::Color::White;
			this->RRtext->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RRtext->ForeColor = System::Drawing::Color::Black;
			this->RRtext->Location = System::Drawing::Point(1148, 402);
			this->RRtext->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RRtext->Name = L"RRtext";
			this->RRtext->Size = System::Drawing::Size(146, 23);
			this->RRtext->TabIndex = 18;
			this->RRtext->Text = L"Recuperados";
			this->RRtext->Visible = false;
			// 
			// PPUNTOS
			// 
			this->PPUNTOS->AutoSize = true;
			this->PPUNTOS->BackColor = System::Drawing::Color::White;
			this->PPUNTOS->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PPUNTOS->ForeColor = System::Drawing::Color::Black;
			this->PPUNTOS->Location = System::Drawing::Point(1148, 101);
			this->PPUNTOS->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PPUNTOS->Name = L"PPUNTOS";
			this->PPUNTOS->Size = System::Drawing::Size(95, 23);
			this->PPUNTOS->TabIndex = 20;
			this->PPUNTOS->Text = L"PUNTOS";
			this->PPUNTOS->Visible = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(343, 756);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(184, 43);
			this->button8->TabIndex = 21;
			this->button8->Text = L"reiniciar";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(696, 756);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(159, 43);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Nivel 2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(67, 660);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 23);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Número de Agentes";
			this->label3->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(460, 639);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 53);
			this->button9->TabIndex = 26;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(369, 639);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 53);
			this->button11->TabIndex = 25;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(299, 640);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 53);
			this->button12->TabIndex = 24;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(192, 704);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 23);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Tiempo";
			this->label4->Visible = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(460, 690);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 53);
			this->button13->TabIndex = 31;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(368, 690);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 53);
			this->button14->TabIndex = 30;
			this->button14->Text = L"100";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Visible = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(299, 690);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 53);
			this->button15->TabIndex = 29;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lavender;
			this->label5->Location = System::Drawing::Point(63, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1135, 149);
			this->label5->TabIndex = 32;
			this->label5->Text = L"CHAOS SURVIVORS";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(903, 186);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(167, 43);
			this->button16->TabIndex = 33;
			this->button16->Text = L"Siguiente";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(1148, 60);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 23);
			this->label6->TabIndex = 34;
			this->label6->Text = L"TIEMPO";
			this->label6->Visible = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(1085, 756);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(127, 43);
			this->button17->TabIndex = 35;
			this->button17->Text = L"Finalizar";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1351, 814);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->PPUNTOS);
			this->Controls->Add(this->RRecuperatos);
			this->Controls->Add(this->RRtext);
			this->Controls->Add(this->EEnfermos);
			this->Controls->Add(this->EEtext);
			this->Controls->Add(this->VVirus);
			this->Controls->Add(this->VVtext);
			this->Controls->Add(this->EEnfermero);
			this->Controls->Add(this->ENtext);
			this->Controls->Add(this->HHabitantes);
			this->Controls->Add(this->HHtext);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Juego - Sanado Enfermos";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::FrmJuego_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::FrmJuego_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int min = 40;//rangos de puntaje
		int max = 140;
		int PPPuntos = 100;
		int EEEnfermos = 0;
		int NumH = 1;
		int NumE = 1;
		int NumV = 1;
		int tiempo = 100;
		CJuego* Cjuego;//administrar el juego
		bool iniciar = false;
		bool instruccionesya = false;
		bool ya = false;//empezar
		bool datos = false;//muestran los botones de elegir aliados, agentes, etc.
		bool terminamos = false;//saber que ya se termino

		Direccion teclaPulsada;
		Bitmap^ figura_winnera;
		Bitmap^ figura_HombreP;

		Bitmap^ figura_MujerP;
		Bitmap^ figura_Mujer;
		Bitmap^ figura_winnerb;
		Bitmap^ figura;
		Bitmap^ figuraa;
		Bitmap^ figurab;
		Bitmap^ figurac;
		Bitmap^ figurad;
		Bitmap^ figura_enfermo;
		Bitmap^ figura_BolaNieve;

		Bitmap^ figura_fondo1;

		Bitmap^ figura_fondo2;
		Bitmap^ figura_Enfermero;
		Bitmap^ figura_Virus;
		Bitmap^ figura_Fondo;
		Graphics^ g;
		BufferedGraphics^ bg;//evitar parpadeos
		int miliseguntos;//multiplica *10 el tiempo puesto por el jugador para que el tiempo pueda verse pasar más lento
		bool centinela;// va a ayudar a manejar el tiempo
		int supertiempo;//tiene el tiempo del usuario


	private: System::Void FrmJuego_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		g = this->CreateGraphics();
		BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
		bg = bfc->Allocate(g, this->ClientRectangle);
	}
	private: System::Void FrmJuego_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyCode == Keys::Up) this->teclaPulsada = Direccion::Arriba;
		if (e->KeyCode == Keys::Left) this->teclaPulsada = Direccion::Izquierda;
		if (e->KeyCode == Keys::Right) this->teclaPulsada = Direccion::Derecha;
		if (e->KeyCode == Keys::Down) this->teclaPulsada = Direccion::Abajo;
		if (e->KeyCode == Keys::R) Cjuego->solicitud();//Aparecer aliado
		if (e->KeyCode == Keys::O)//Botones de reiniciar, nivel 2 y finalizar
		{
			button8->Visible = true;
			button10->Visible = true;
			button17->Visible = true;								
		}
		if (e->KeyCode == Keys::I)//desaparecer los botones de reiniciar, nivel 2 y finalizar
		{
			button8->Visible = false;
			button10->Visible = false;
			button17->Visible = false;				
		}
		if (e->KeyCode == Keys::E) Cjuego->activar_aliado();//hacer que el aliado cumpla su funcion de curar

		if (e->KeyCode == Keys::D && Cjuego->getNivel() == 2)//asegurar que este en el nivel 2
		{
			Cjuego->disparar(teclaPulsada);//lanzar bola de fuego
		}


		Cjuego->cambiarDireccion(this->teclaPulsada);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		//empezar el juego
		if (ya)
		{
			if (this->miliseguntos >= 0)
				this->miliseguntos--;
			if (this->miliseguntos % 10 == 0 && !centinela)//para que se pueda apreciar que pasa cada segundo ejemplo:(elijo 100(que pasara a ser 1000 por el *10) con el %10 se hace que se muestre este 100, si 999 se pondra 99 y asi consecutivamente)
				tiempo--;//tiempo disminuyendo
			this->label6->Text = tiempo.ToString();//escribir el tiempo
			Cjuego->setTiempo(tiempo);// el juego lo pone como el tiempo

			if (Cjuego->getNivel() == 1)// Nivel 1
			{
				if (iniciar)// se cargan todas los sprites y demás cosas que requiera el nivel 1, dado todo por el constructor y actualizandose las estadisticas al lado de la pantalla
				{
					int ancho = g->VisibleClipBounds.Width;
					int alto = g->VisibleClipBounds.Height;
					bg->Graphics->DrawImage(figura_fondo2, 0, 0, ancho, alto);
					//bg->Graphics->Clear(Color::White);//limpiar
					Cjuego->mover(this->teclaPulsada);

					Cjuego->dibujar(bg, figura, figuraa, figurab, figura_enfermo, figura_Enfermero, figura_Virus, figura_winnera, figura_winnerb, figura_Mujer, figura_HombreP, figura_MujerP, figura_BolaNieve);
					this->HHabitantes->Text = Cjuego->Nhabitantes.ToString();
					this->EEnfermos->Text = Cjuego->NEnfermero.ToString();
					//EEEnfermos = 0;
					this->EEnfermos->Text = Cjuego->getEnfermos().ToString();
					this->VVirus->Text = Cjuego->NVirus.ToString();
					this->RRecuperatos->Text = Cjuego->getRecuperados().ToString();
					this->PPUNTOS->Text = (-5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() - 2 * Cjuego->getProtestados()).ToString();
					this->label6->Text = this->tiempo.ToString();
					//si gano o perdio
					if ((-5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() >= 100) || (-5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() < 0) || (Cjuego->getMuertes() >= NumV))//
					{
						//centinela detiene el tiempo y los botones de abajo aparecen 
						button8->Visible = true;
						button10->Visible = true;
						button17->Visible = true;
						centinela = true;	
						if (Cjuego->getEscritura1() == true) {
							Cjuego->lecturaEscrituraDeArchivosNivel1();
						}
					}
					bg->Render(g);//renderizar las imagenes hacia el canvas

				}
			}
			else
			{
				if (iniciar && Cjuego->getNivel() == 2)//inicia el nivel 2
				{
					int ancho = g->VisibleClipBounds.Width;
					int alto = g->VisibleClipBounds.Height;
					bg->Graphics->DrawImage(figura_fondo2, 0, 0, ancho, alto);
					//bg->Graphics->Clear(Color::White);//limpiar 
					Cjuego->mover(this->teclaPulsada);
					this->label6->Text = tiempo.ToString();
					Cjuego->dibujar(bg, figura, figuraa, figurab, figura_enfermo, figura_Enfermero, figura_Virus, figura_winnera, figura_winnerb, figura_Mujer, figura_HombreP, figura_MujerP, figura_BolaNieve);
					this->HHabitantes->Text = Cjuego->Nhabitantes.ToString();
					this->VVirus->Text = Cjuego->NVirus.ToString();
					//EEEnfermos = 0;
					this->EEnfermos->Text = Cjuego->getEnfermos().ToString();
					this->VVirus->Text = Cjuego->NVirus.ToString();
					this->RRecuperatos->Text = Cjuego->getRecuperados().ToString();
					this->PPUNTOS->Text = (50 - 5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() - 2 * Cjuego->getProtestados()).ToString();
					this->label6->Text = this->tiempo.ToString();
					//si gano o perdio
					if ((50 - 5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() - 2 * Cjuego->getProtestados() >= 100) || (50 - 5 * Cjuego->getMuertes() + 10 * Cjuego->getRecuperados() - Cjuego->getProtestados() < 0) || (Cjuego->getMuertes() >= NumV))
					{
						button8->Visible = true;
						button10->Visible = true;
						button17->Visible = true;
						centinela = true;			
						if ( Cjuego->getEscritura2() == true) {
							Cjuego->lecturaEscrituraDeArchivosNivel2();
						}
					}
					bg->Render(g);//renderizar las imagenes hacia el canvas

				}
			}
		}
		if (instruccionesya)//Se pone las instrucciones
		{
			int ancho = g->VisibleClipBounds.Width;
			int alto = g->VisibleClipBounds.Height;
			bg->Graphics->DrawImage(figura_fondo1, 0, 0, ancho, alto);
			bg->Render(g);//renderizar las imagenes hacia el canvas
		}
		if (datos)//se pone el fondo de los datos
		{
			int ancho = g->VisibleClipBounds.Width;
			int alto = g->VisibleClipBounds.Height;
			bg->Graphics->DrawImage(figura_fondo2, 0, 0, ancho, alto);
			bg->Render(g);//renderizar las imagenes hacia el canvas
		}
		if (terminamos)//Se pone los creditos
		{
			if (Cjuego->getNivel() ==2&&Cjuego->getEscritura2()==true) {//comprueba si ya se escribió en el archivo
				Cjuego->lecturaEscrituraDeArchivosNivel2();
			}
			int ancho = g->VisibleClipBounds.Width;
			int alto = g->VisibleClipBounds.Height;
			bg->Graphics->DrawImage(figura, 0, 0, ancho, alto);
			bg->Render(g);//renderizar las imagenes hacia el canvas
		}
	}
	private: System::Void FrmJuego_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//iniciar el juego
		ya = true;
		datos = false;
		PPPuntos = 100;
		Cjuego = new CJuego(figura, figuraa, figurab, figura_Enfermero, figura_Virus, figura_winnera, figura_winnerb, NumH, NumE, figura_BolaNieve, NumV, PPPuntos);
		label5->Visible = true;
		Cjuego->setTiempo(this->tiempo);
		this->miliseguntos = this->tiempo * 10;
		this->supertiempo = this->tiempo;
		Cjuego->setNivel(1);
		button1->Visible = false;
		label6->Visible = true;//el tiempo
		iniciar = true;
		Cjuego->desaparecerAlis();// los aliados estan creados desde que inicia el juego, pero invicibles y siendo solo aparecidos por el lider
		this->PPUNTOS->Visible = true;
		this->HHabitantes->Visible = true;
		this->HHtext->Visible = true;
		this->VVirus->Visible = true;
		this->VVtext->Visible = true;
		this->VVirus->Visible = true;
		this->VVtext->Visible = true;
		this->EEnfermos->Visible = true;
		this->EEtext->Visible = true;
		this->RRecuperatos->Visible = true;
		this->RRtext->Visible = true;

		label1->Visible = false;
		label2->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		button1->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		button13->Visible = false;
		button14->Visible = false;
		button15->Visible = false;
		button11->Visible = false;
		button9->Visible = false;
		button12->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;

		delete label1;
		delete label2;
		delete button2;
		delete button3;
		delete button4;
		delete button1;
		delete label3;
		delete label4;
		delete button13;
		delete button14;
		delete button15;
		delete button11;
		delete button9;
		delete button12;
		delete button5;
		delete button6;
		delete button7;



	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		NumH++;//Cuantos habitantes se quieren
		button3->Text = NumH.ToString();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NumH >= 2)
		{
			NumH--;//Cuantos habitantes se quieren
			button3->Text = NumH.ToString();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		NumV++;//Cuantos aliados se quieren
		button6->Text = NumV.ToString();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NumV >= 2)
		{
			NumV--;//Cuantos aliados se quieren
			button6->Text = NumV.ToString();
		}
	}
		   //Boton de reiniciar
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Cjuego->reiniciar();
		tiempo = supertiempo;//al reiniciar el nivel el tiempo que se guardo en supertiempo se le devuelve a tiempo
		Cjuego->setTiempo(tiempo);
		this->miliseguntos = this->tiempo * 10;
		iniciar = true;
		//tiempo = timee;
		button8->Visible = false;
		button10->Visible = false;
		button17->Visible = false;
	}
		   //boton para iniciar el nivel 2
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		figuraa = gcnew Bitmap("Pista2.png");
		if(Cjuego->getEscritura1()==true){ //comprueba si ya se escribió en el archivo
		Cjuego->lecturaEscrituraDeArchivosNivel1();
		}
		Cjuego->reiniciar();
		tiempo = supertiempo;//al cambiar de nivel el tiempo que se guardo en supertiempo se le devuelve a tiempo
		Cjuego->setTiempo(tiempo);
		this->miliseguntos = this->tiempo * 10;
		Cjuego->setNivel(2);
		this->centinela = false;
		Cjuego->Puntos = 50;//se inicia con más puntos debido a los protestantes que aparencen que bajan 2 puntos y si se llega a 0 pierde, gana con 150
		button8->Visible = false;
		button10->Visible = false;
		button17->Visible = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		NumV++;//Cuantos agentes se quieren
		button11->Text = NumV.ToString();

	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NumV >= 2)
		{
			NumV--;//Cuantos agentes se quieren
			button11->Text = NumV.ToString();
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

		this->tiempo += 50;//Cuantos tiempo se quiere
		button14->Text = tiempo.ToString();


	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->tiempo > 100)
		{
			this->tiempo -= 10;//Cuantos tiempo se quiere
			button14->Text = tiempo.ToString();
		}
	} //boton de siguientes que aparece en el inicio
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (instruccionesya)//si ya se paso las instrucciones, aparecen los cuadros para elegir las cantidades de personajes y tiempo
		{
			datos = true;
			instruccionesya = false;
			delete label5;
			delete button16;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			button2->Visible = true;

			button3->Visible = true;
			button4->Visible = true;
			button5->Visible = true;
			button6->Visible = true;
			button7->Visible = true;
			button9->Visible = true;
			button11->Visible = true;
			button12->Visible = true;
			button13->Visible = true;
			button14->Visible = true;
			button15->Visible = true;
			button1->Visible = true;
			delete label5;
		}
		else//se pone el texto de todas las instrucciones
		{
			label5->Text = "Instrucciones:";
			instruccionesya = true;
		}


	}     //viñeta final donde se pone los creditos y los participantes(creadores del juego)
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Cjuego->getNivel()==1&&Cjuego->getEscritura1() == true) {//comprueba si ya se escribió en el archivo
			Cjuego->lecturaEscrituraDeArchivosNivel1();
		}
		else if (Cjuego->getNivel() == 2 && Cjuego->getEscritura2() == true) {
			Cjuego->lecturaEscrituraDeArchivosNivel2();
		}
		button17->Visible = false;
		figura = gcnew Bitmap("Creditos.png");
		button8->Visible = false;
		button10->Visible = false;
		terminamos = true;
		Cjuego->setNivel(3);
		ya = false;
		label6->Visible = false;//el tiempo
		this->PPUNTOS->Visible = false;
		this->HHabitantes->Visible = false;
		this->HHtext->Visible = false;
		this->VVirus->Visible = false;
		this->VVtext->Visible = false;
		this->VVirus->Visible = false;
		this->VVtext->Visible = false;
		this->EEnfermos->Visible = false;
		this->EEtext->Visible = false;
		this->RRecuperatos->Visible = false;
		this->RRtext->Visible = false;
	}
	};
}

