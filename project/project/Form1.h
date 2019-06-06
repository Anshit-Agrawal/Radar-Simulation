#pragma once
#include "stdAfx.h"
#include "Radar.h"

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	
	using namespace System::Threading;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{String^msg1;
	public:
		Form1(void)
		{
			InitializeComponent();
			findPorts_1();
			findPorts_2();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::IO::Ports::SerialPort^  serialPort2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button10;

	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->serialPort2 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(382, 28);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(382, 54);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(382, 80);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(382, 105);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(382, 129);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(382, 154);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(382, 180);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(382, 206);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 20);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(502, 29);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(195, 197);
			this->textBox9->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(309, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"HEADER";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(308, 58);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"AZIMUTH";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(313, 86);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"RANGE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(314, 110);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"HEIGHT";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(314, 135);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"CODE-1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(314, 159);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"CODE-2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(314, 184);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"CODE-3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(302, 210);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"CHECKSUM";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(335, 3);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"RECEIVING END";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(552, 4);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"SENDING END";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(107, 99);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 20);
			this->comboBox1->TabIndex = 19;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"110", L"300", L"1200", L"2400", L"4800", L"9600", 
				L"19200", L"38400", L"57600", L"115200", L"230400", L"460800", L"921600"});
			this->comboBox2->Location = System::Drawing::Point(107, 125);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 20);
			this->comboBox2->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(19, 104);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"COM PORT 1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(19, 129);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"BAUDRATE 1";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(383, 258);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 19);
			this->button1->TabIndex = 23;
			this->button1->Text = L"SEND 2";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(203, 178);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 48);
			this->button2->TabIndex = 24;
			this->button2->Text = L"INIT PORT 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(203, 124);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 48);
			this->button3->TabIndex = 25;
			this->button3->Text = L"CLOSE PORT 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoEllipsis = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(60, 372);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 44);
			this->button4->TabIndex = 26;
			this->button4->Text = L"INIT PORT 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(133, 372);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 44);
			this->button5->TabIndex = 27;
			this->button5->Text = L"CLOSE PORT 2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(303, 298);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 54);
			this->button6->TabIndex = 28;
			this->button6->Text = L"READ FROM PORT";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(503, 257);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 19);
			this->button7->TabIndex = 29;
			this->button7->Text = L"RECIEVE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(107, 282);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(92, 20);
			this->comboBox3->TabIndex = 30;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"110", L"300", L"1200", L"2400", L"4800", L"9600", 
				L"19200", L"38400", L"57600", L"115200", L"230400", L"460800", L"921600"});
			this->comboBox4->Location = System::Drawing::Point(107, 309);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(92, 20);
			this->comboBox4->TabIndex = 31;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox4_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(15, 287);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"COMPORT 2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(15, 313);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 13);
			this->label14->TabIndex = 33;
			this->label14->Text = L"BAUDRATE 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(39, 3);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(146, 13);
			this->label15->TabIndex = 34;
			this->label15->Text = L"SERIAL PORT SETTINGS";
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(107, 154);
			this->progressBar1->Margin = System::Windows::Forms::Padding(2);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(75, 19);
			this->progressBar1->TabIndex = 35;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(107, 333);
			this->progressBar2->Margin = System::Windows::Forms::Padding(2);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(75, 19);
			this->progressBar2->TabIndex = 36;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(529, 310);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(143, 19);
			this->button8->TabIndex = 37;
			this->button8->Text = L"PPI DISPLAY";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(629, 258);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(68, 19);
			this->button9->TabIndex = 38;
			this->button9->Text = L"SEND 1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"One", L"Two"});
			this->comboBox5->Location = System::Drawing::Point(107, 51);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(92, 20);
			this->comboBox5->TabIndex = 39;
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"5", L"6", L"7", L"8"});
			this->comboBox6->Location = System::Drawing::Point(107, 27);
			this->comboBox6->Margin = System::Windows::Forms::Padding(2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(92, 20);
			this->comboBox6->TabIndex = 40;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"5", L"6", L"7", L"8"});
			this->comboBox7->Location = System::Drawing::Point(107, 206);
			this->comboBox7->Margin = System::Windows::Forms::Padding(2);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(92, 20);
			this->comboBox7->TabIndex = 41;
			// 
			// comboBox8
			// 
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"One", L"Two"});
			this->comboBox8->Location = System::Drawing::Point(107, 231);
			this->comboBox8->Margin = System::Windows::Forms::Padding(2);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(92, 20);
			this->comboBox8->TabIndex = 42;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(19, 31);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(80, 13);
			this->label16->TabIndex = 43;
			this->label16->Text = L"data bits 1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(20, 57);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 44;
			this->label17->Text = L"stop 1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(15, 209);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 45;
			this->label18->Text = L"data bits  2";
			this->label18->Click += gcnew System::EventHandler(this, &Form1::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(16, 235);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 13);
			this->label19->TabIndex = 46;
			this->label19->Text = L"stop 2";
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"None", L"Even", L"Odd"});
			this->comboBox9->Location = System::Drawing::Point(107, 75);
			this->comboBox9->Margin = System::Windows::Forms::Padding(2);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(92, 20);
			this->comboBox9->TabIndex = 47;
			// 
			// comboBox10
			// 
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"None", L"Even", L"Odd"});
			this->comboBox10->Location = System::Drawing::Point(107, 257);
			this->comboBox10->Margin = System::Windows::Forms::Padding(2);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(92, 20);
			this->comboBox10->TabIndex = 48;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(20, 81);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 13);
			this->label20->TabIndex = 49;
			this->label20->Text = L"parity 1";
			this->label20->Click += gcnew System::EventHandler(this, &Form1::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(16, 262);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 13);
			this->label21->TabIndex = 50;
			this->label21->Text = L"parity 2";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(538, 351);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 44);
			this->button10->TabIndex = 51;
			this->button10->Text = L"Hijack";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(914, 427);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//get port for 1
		private: void findPorts_1(void)
			 {
			// get port names
		    array<Object^>^ objectArray = SerialPort::GetPortNames();
			// add string array to combobox
			this->comboBox1->Items->AddRange( objectArray );
			 
			 }
				 //get port for 2
		 private: void findPorts_2(void)
			 {
			// get port names
		    array<Object^>^ objectArray = SerialPort::GetPortNames();
			// add string array to combobox
			this->comboBox3->Items->AddRange( objectArray );
			 
			 }
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
                     
           /*         if(this->serialPort1->IsOpen)
			 {
				
				 try
				 {  int base1=1,rem1;
				    int base2=1,rem2;
					int base3=1,rem3;
					double dec1=0;
					double dec2=0;
					double dec3=0;
					
                      String^msg1=this->serialPort1->ReadLine();
					  int len=msg1->Length;
					  for(int j=0;j<len;j=j+32)
					  {
						  String^ msg=msg1->Substring(j,32);
						  if(msg->Substring(j,4)=="FFFF"&&msg->Substring(j,4)=="ffff")
						  {

					  array<Char>^hex1=(msg->Substring(4,3))->ToCharArray();
					  array<Char>^hex2=(msg->Substring(8,3))->ToCharArray();
					  array<Char>^hex3=(msg->Substring(12,3))->ToCharArray();
					  int len1=hex1->Length;
					  for(int i=0;hex1[i]!='\0';i++)
					  {
						  if(hex1[i]>='0'&&hex1[i]<='9')
						  {
							  rem1=hex1[i]-48;

						  }
						  else if(hex1[i]>='A'&&hex1[i]<='F')
						  {
							  rem1=hex1[i]-65+10;

						  }
						  else if(hex1[i]>='a'&&hex1[i]<='f')
						  {
							  rem1=hex1[i]-87;

						  }
						  dec1=dec1+rem1*Math::Pow(16,len1);
						  len1--;
					  }
					  this->textBox2->Text=(dec1*0.088).ToString();

					   int len2=hex2->Length;
					  for(int i=0;hex2[i]!='\0';i++)
					  {
						  if(hex2[i]>='0'&&hex2[i]<='9')
						  {
							  rem2=hex2[i]-48;

						  }
						  else if(hex2[i]>='A'&&hex2[i]<='F')
						  {
							  rem2=hex2[i]-65+10;

						  }
						  else if(hex2[i]>='a'&&hex2[i]<='f')
						  {
							  rem2=hex2[i]-87;

						  }
						  dec2=dec2+rem2*Math::Pow(16,len2);
						  len2--;
					  }
                        this->textBox3->Text=(dec2*250).ToString();
					   int len3=hex3->Length;
					  for(int i=0;hex3[i]!='\0';i++)
					  {
						  if(hex3[i]>='0'&&hex3[i]<='9')
						  {
							  rem3=hex3[i]-'48';

						  }
						  else if(hex3[i]>='A'&&hex3[i]<='F')
						  {
							  rem3=hex3[i]-'65'+'10';

						  }
						  else if(hex3[i]>='a'&&hex3[i]<='f')
						  {
							  rem3=hex3[i]-'97'+'10';

						  }
						  dec3=dec3+rem3*Math::Pow(16,len3);
						  len3--;
					  }
					  this->textBox4->Text=(dec3).ToString();
					  this->textBox5->Text=msg->Substring(16,4);
						this->textBox6->Text=msg->Substring(20,4);
						this->textBox7->Text=msg->Substring(24,4);
						this->textBox8->Text=msg->Substring(28,4);
					  }
						  else
							  MessageBox::Show("improper header");
					  }

					
				 }
				 catch(TimeoutException^)
				 {
					 MessageBox::Show("timeout exception");
				 }
				 
				 
			 }
			 else
				 MessageBox::Show("port 1 not opened");*/

		 }
		 //init button 1
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				
			  if(this->comboBox1->Text==String::Empty || this->comboBox2->Text==String::Empty)
					MessageBox::Show("Please Select Port 1 Settings");
				else {
					try{
					   // make sure port isn't open	
					if(!this->serialPort1->IsOpen){
						this->serialPort1->PortName=this->comboBox1->Text;
					 //this->textBox1->Text=this->comboBox1->Text;
						this->serialPort1->BaudRate=Int32::Parse(this->comboBox2->Text);
						//this->serialPort1->DataBits=Int32::Parse(this->comboBox6->Text);

						this->serialPort1->StopBits=(StopBits)Enum::Parse((StopBits::typeid),this->comboBox5->Text);
						this->serialPort1->Parity=(Parity)Enum::Parse((StopBits::typeid),this->comboBox9->Text);
					 this->textBox1->Text=this->comboBox2->Text;
						
					 //open serial port 
						this->serialPort1->Open();
						this->progressBar1->Value=100;
					}
					else
						MessageBox::Show("Port`1 isn't openned");
					}
					catch(UnauthorizedAccessException^){
						MessageBox::Show("UnauthorizedAccess");
					}
				 }
		 }
		 //init port 2
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			  if(this->comboBox3->Text==String::Empty || this->comboBox4->Text==String::Empty)
					MessageBox::Show("Please Select Port 2 Settings");
				else {
					try{
					   // make sure port isn't open	
					if(!this->serialPort2->IsOpen){
						this->serialPort2->PortName=this->comboBox3->Text;
					 //this->textBox1->Text=this->comboBox3->Text;
						this->serialPort2->BaudRate=Int32::Parse(this->comboBox4->Text);
						this->serialPort2->DataBits=Int32::Parse(this->comboBox7->Text);
						
						this->serialPort2->StopBits=(StopBits)Enum::Parse((StopBits::typeid),this->comboBox8->Text);
						this->serialPort2->Parity=(Parity)Enum::Parse((Parity::typeid),this->comboBox10->Text);
					 //this->textBox1->Text=this->comboBox4->Text;
						
					 //open serial port 2
						this->serialPort2->Open();
						this->progressBar2->Value=100;
					}
					else
						MessageBox::Show("Port`2 isn't openned");
					}
					catch(UnauthorizedAccessException^){
						MessageBox::Show("UnauthorizedAccess");
					}
				 }

		 }
		 //close port 1
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 	//close serialPort
				 this->serialPort1->Close();
				 // update progress bar
				 this->progressBar1->Value=0;
				 
				
		 }
		 //close port 2
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //close serialPort
				 this->serialPort2->Close();
			  	 // update progress bar
				 this->progressBar2->Value=0;
		 }
		 //send2  button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			  // add sender name
				 String^ name = this->serialPort2->PortName;
				 // grab text and store in send buffer
				 String^ message = "header:"+this->textBox1->Text+ "azimuth:"+this->textBox2->Text+ "range:"+this->textBox3->Text+ "height:"+this->textBox4->Text+ "code1:"+this->textBox5->Text+ "code2:"+this->textBox6->Text+ "code3:"+this->textBox7->Text+ "checksum:"+this->textBox8->Text;
				 // write to serial
				 if(this->serialPort2->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->serialPort2->WriteLine(message);
				 else
				       MessageBox::Show("Port Not Opened");

		 }
		 //receive button
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->serialPort2->IsOpen)
			 {
				 this->textBox9->Text=String::Empty;
				 try
				 {
					 this->textBox9->Text=this->serialPort2->ReadLine();
				 }
				 catch(TimeoutException^)
				 {
					 this->textBox9->Text="timeout exception";
				 }
				 
				 
			 }
			 else
				 this->textBox9->Text="port 2 not opened";

		 }
		 //read from port 1
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			/* if(this->serialPort1->IsOpen)
			 {
				
				 try
				 {  int base1=1,rem1;
				    int base2=1,rem2;
					int base3=1,rem3;
					double dec1=0;
					double dec2=0;
					double dec3=0;
					
                      String^msg1=this->serialPort1->ReadLine();
					  int len=msg1->Length;
					  for(int j=0;j<len;j=j+32)
					  {
						  String^ msg=msg1->Substring(j,32);
						  if(msg->Substring(j,4)=="FFFF"&&msg->Substring(j,4)=="ffff")
						  {

					  array<Char>^hex1=(msg->Substring(4,3))->ToCharArray();
					  array<Char>^hex2=(msg->Substring(8,3))->ToCharArray();
					  array<Char>^hex3=(msg->Substring(12,3))->ToCharArray();
					  int len1=hex1->Length;
					  for(int i=0;hex1[i]!='\0';i++)
					  {
						  if(hex1[i]>='0'&&hex1[i]<='9')
						  {
							  rem1=hex1[i]-48;

						  }
						  else if(hex1[i]>='A'&&hex1[i]<='F')
						  {
							  rem1=hex1[i]-65+10;

						  }
						  else if(hex1[i]>='a'&&hex1[i]<='f')
						  {
							  rem1=hex1[i]-87;

						  }
						  dec1=dec1+rem1*Math::Pow(16,len1);
						  len1--;
					  }
					  this->textBox2->Text=(dec1*0.088).ToString();

					   int len2=hex2->Length;
					  for(int i=0;hex2[i]!='\0';i++)
					  {
						  if(hex2[i]>='0'&&hex2[i]<='9')
						  {
							  rem2=hex2[i]-48;

						  }
						  else if(hex2[i]>='A'&&hex2[i]<='F')
						  {
							  rem2=hex2[i]-65+10;

						  }
						  else if(hex2[i]>='a'&&hex2[i]<='f')
						  {
							  rem2=hex2[i]-87;

						  }
						  dec2=dec2+rem2*Math::Pow(16,len2);
						  len2--;
					  }
                        this->textBox3->Text=(dec2*250).ToString();
					   int len3=hex3->Length;
					  for(int i=0;hex3[i]!='\0';i++)
					  {
						  if(hex3[i]>='0'&&hex3[i]<='9')
						  {
							  rem3=hex3[i]-'48';

						  }
						  else if(hex3[i]>='A'&&hex3[i]<='F')
						  {
							  rem3=hex3[i]-'65'+'10';

						  }
						  else if(hex3[i]>='a'&&hex3[i]<='f')
						  {
							  rem3=hex3[i]-'97'+'10';

						  }
						  dec3=dec3+rem3*Math::Pow(16,len3);
						  len3--;
					  }
					  this->textBox4->Text=(dec3).ToString();
					  this->textBox5->Text=msg->Substring(16,4);
						this->textBox6->Text=msg->Substring(20,4);
						this->textBox7->Text=msg->Substring(24,4);
						this->textBox8->Text=msg->Substring(28,4);
					  }
						  else
							  MessageBox::Show("improper header");
					  }

					
				 }
				 catch(TimeoutException^)
				 {
					 MessageBox::Show("timeout exception");
				 }
				 
				 
			 }
			 else
				 MessageBox::Show("port 1 not opened");*/
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
            this->Hide();
			Radar^ r=gcnew Radar();
			r->ShowDialog();
		 }
//private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
            
	//	 }//send1 button
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // add sender name
				 String^ name = this->serialPort1->PortName;
				 // grab text and store in send buffer
				 String^ message =this->textBox9->Text;
				 // write to serial
				 if(this->serialPort1->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->serialPort1->WriteLine(message);
				 else
				       MessageBox::Show("Port Not Opened");
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			 msg1=serialPort1->ReadLine();
			 this->Invoke(gcnew EventHandler(this,&Form1::ShowData));

		 }
		 private: Void ShowData(Object^  sender, EventArgs^  e)
				  {
                   // String^msg1=this->serialPort1->ReadLine();
					  int len=msg1->Length;
					  int j=0;
					  while(j<len)
					  {   	 int base1=1;
				    int base2=1;
					int base3=1;
					double dec1=0;
					double dec2=0;
					double dec3=0;
						  String^ msg=msg1->Substring(j,32);
						  if(msg->Substring(0,4)=="FFFF"||msg->Substring(0,4)=="ffff")
						  {
                     this->textBox1->Text=msg->Substring(0,4);
					 
					  array<Char>^hex1=(msg->Substring(4,3))->ToCharArray();
					  array<Char>^hex2=(msg->Substring(8,3))->ToCharArray();
					  array<Char>^hex3=(msg->Substring(12,3))->ToCharArray();
					  int len1=hex1->Length;

					//  String^ H=hex1.ToString();
					//  MessageBox::Show(H);
					  
					  for(int i=len1-1;i>=0;i--)
					  {
						  if(hex1[i]>='0'&&hex1[i]<='9')
						  {
							  dec1=(hex1[i]-48)*base1;
							  base1=base1*16;

						  }
						  else if(hex1[i]>='A'&&hex1[i]<='F')
						  {
							  dec1=(hex1[i]-55)*base1;
							  base1=base1*16;

						  }
						  else if(hex1[i]>='a'&&hex1[i]<='f')
						  {
							dec1=(hex1[i]-87)*base1;
							  base1=base1*16;

						  }
						 
					  }
					  this->textBox2->Text=(dec1*0.088).ToString();

					   int len2=hex2->Length;
					 for(int i=len2-1;i>=0;i--)
					  {
						  if(hex2[i]>='0'&&hex2[i]<='9')
						  {
							  dec2=(hex2[i]-48)*base2;
							  base2=base2*16;

						  }
						  else if(hex2[i]>='A'&&hex2[i]<='F')
						  {
							  dec2=(hex2[i]-55)*base2;
							  base2=base2*16;

						  }
						  else if(hex2[i]>='a'&&hex2[i]<='f')
						  {
							dec2=(hex2[i]-87)*base2;
							  base2=base2*16;

						  }
						 
					  }
                        this->textBox3->Text=(dec2*250).ToString();
					   int len3=hex3->Length;
					   for(int i=len3-1;i>=0;i--)
					  {
						  if(hex3[i]>='0'&&hex3[i]<='9')
						  {
							  dec3=(hex3[i]-48)*base3;
							  base3=base3*16;

						  }
						  else if(hex3[i]>='A'&&hex3[i]<='F')
						  {
							  dec3=(hex3[i]-55)*base3;
							  base3=base3*16;

						  }
						  else if(hex3[i]>='a'&&hex3[i]<='f')
						  {
							dec3=(hex3[i]-87)*base3;
							  base3=base3*16;

						  }
						 
					  }
					  this->textBox4->Text=(dec3).ToString();
					  this->textBox5->Text=msg->Substring(16,4);
						this->textBox6->Text=msg->Substring(20,4);
						this->textBox7->Text=msg->Substring(24,4);
						this->textBox8->Text=msg->Substring(28,4);
						this->textBox1->Update();
						this->textBox2->Update();
						this->textBox3->Update();
						this->textBox4->Update();
						this->textBox5->Update();
						this->textBox6->Update();
						this->textBox7->Update();
						this->textBox8->Update();
					  }
						  else
						  { this->textBox1->Text="improper header";
						  
						  	this->textBox2->Text=String::Empty;
						this->textBox3->Text=String::Empty;
						this->textBox4->Text=String::Empty;
						this->textBox5->Text=String::Empty;
						this->textBox6->Text=String::Empty;
						this->textBox7->Text=String::Empty;
						this->textBox8->Text=String::Empty;
						  this->textBox1->Update();
						  	this->textBox2->Update();
						this->textBox3->Update();
						this->textBox4->Update();
						this->textBox5->Update();
						this->textBox6->Update();
						this->textBox7->Update();
						this->textBox8->Update();
						  }//GLOW Button, put 12th bit in string =5 to see color change
						  if( msg->Substring(11,1)=="5")
							   this->button10->BackColor=Color::Red;   
						  j=j+32;
						  Thread::Sleep(500);
					  }

					/* this->textBox1->Text=msg->Substring(0,4);
					 Int64 msg1=Int64::Parse(msg->Substring(4,12));
					 Int64 msg2=Int64::Parse(msg->Substring(20,12));
					 Int64 msg3=Int64::Parse(msg->Substring(36,12));
					
					
					
					 while(msg1>0)
					 {
                        rem1=msg1%10;
						dec1=dec1+rem1*base1;
						msg1=msg1/10;
						base1=base1*2;
					 }
					 this->textBox2->Text=(dec1*0.088).ToString();
					  while(msg2>0)
					 {
                        rem2=msg2%10;
						dec2=dec2+rem2*base2;
						msg2=msg2/10;
						base2=base2*2;
					 }
					   this->textBox3->Text=(dec2*250).ToString();
					    while(msg3>0)
					 {
                        rem3=msg3%10;
						dec3=dec3+rem3*base3;
						msg3=msg3/10;
						base3=base3*2;
					 }
						this->textBox4->Text=(dec3*).ToString();
						this->textBox5->Text=msg->Substring(49,16);
						this->textBox6->Text=msg->Substring(62,16);
						this->textBox7->Text=msg->Substring(75,16);
						this->textBox8->Text=msg->Substring(88,16);*/
				
				/* if(msg->Length==32)
	             
				

				
				{
					this->textBox1->Text=msg->Substring(0,4);

				 this->textBox2->Text=msg->Substring(4,4);

				 this->textBox3->Text=msg->Substring(8,4);

				 this->textBox4->Text=msg->Substring(12,4);

				 this->textBox5->Text=msg->Substring(16,4);

				 this->textBox6->Text=msg->Substring(20,4);

				 this->textBox7->Text=msg->Substring(24,4);

				 this->textBox8->Text=msg->Substring(28,4);}
				 else if(msg->Length==128)
				 {
				 this->textBox1->Text=msg->Substring(0,16);

				 this->textBox2->Text=msg->Substring(16,16);

				 this->textBox3->Text=msg->Substring(32,16);

				 this->textBox4->Text=msg->Substring(48,16);

				 this->textBox5->Text=msg->Substring(64,16);

				 this->textBox6->Text=msg->Substring(80,16);

				 this->textBox7->Text=msg->Substring(96,16);

				 this->textBox8->Text=msg->Substring(112,16);

				 }
				 else
					 MessageBox::Show("improper input");
					 */
				  }

private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

