#pragma once
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *first, *last;
struct node *top;
struct node *front, *rear;

namespace id0413408 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			first = NewNode(0);
			first->next = first;
			last = first;
			top = NewNode(0);
			top->next = top;
			front = NewNode(0);
			front->next = front;
			rear = front;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::TextBox^  textBox10;



	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl2);
			this->splitContainer1->Size = System::Drawing::Size(950, 608);
			this->splitContainer1->SplitterDistance = 242;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(950, 242);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::SkyBlue;
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(942, 205);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Singly linked list";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(602, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(318, 183);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Random";
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(10, 130);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(143, 36);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Reverse";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"n :";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(57, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 29);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"10";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(162, 130);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(143, 36);
			this->button8->TabIndex = 15;
			this->button8->Text = L"Clear list";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(151, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"range :";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(10, 80);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(296, 36);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Insert n random numbers";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(217, 28);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 29);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"1000";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(238, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(358, 183);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Searching";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->label2->Location = System::Drawing::Point(98, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"target :";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->textBox2->Location = System::Drawing::Point(167, 31);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 29);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"20";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->button3->Location = System::Drawing::Point(6, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Search target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->button6->Location = System::Drawing::Point(177, 80);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(171, 36);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Search_Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(6, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 36);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Search_Insert after";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(177, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 36);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Search_Insert before";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(11, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(221, 183);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Insert";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->label1->Location = System::Drawing::Point(17, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"elememt :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->textBox1->Location = System::Drawing::Point(109, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->button1->Location = System::Drawing::Point(26, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert first";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->button2->Location = System::Drawing::Point(26, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insert last";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::SkyBlue;
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(942, 205);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Linked stack";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->button10);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(19, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(361, 185);
			this->groupBox5->TabIndex = 20;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pop and Push";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"element :";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(10, 109);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 37);
			this->button9->TabIndex = 0;
			this->button9->Text = L"Push";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(101, 52);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(74, 32);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"10";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(181, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 24);
			this->label6->TabIndex = 3;
			this->label6->Text = L"pop result :";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(181, 109);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(165, 37);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Pop";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->button16);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(403, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(324, 185);
			this->groupBox4->TabIndex = 19;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Random";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label9->Location = System::Drawing::Point(20, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 24);
			this->label9->TabIndex = 12;
			this->label9->Text = L"n :";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->textBox7->Location = System::Drawing::Point(57, 33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(75, 32);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"10";
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(38, 128);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(248, 35);
			this->button15->TabIndex = 15;
			this->button15->Text = L"Pop all elements";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label10->Location = System::Drawing::Point(138, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 24);
			this->label10->TabIndex = 10;
			this->label10->Text = L"range :";
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button16->Location = System::Drawing::Point(38, 81);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(248, 35);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Push n random elements";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->textBox8->Location = System::Drawing::Point(211, 33);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(75, 32);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"1000";
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::SkyBlue;
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 33);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(942, 205);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Linked Queue";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Controls->Add(this->textBox6);
			this->groupBox7->Controls->Add(this->button12);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->button11);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(19, 6);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(361, 185);
			this->groupBox7->TabIndex = 21;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Add and Delete";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 24);
			this->label7->TabIndex = 5;
			this->label7->Text = L"element :";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(101, 52);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(74, 32);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"10";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(181, 109);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(165, 37);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Delete";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(181, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"delete result :";
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(10, 109);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(165, 37);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Add";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->textBox9);
			this->groupBox6->Controls->Add(this->button14);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->button17);
			this->groupBox6->Controls->Add(this->textBox10);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(403, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(324, 185);
			this->groupBox6->TabIndex = 20;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Random";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label11->Location = System::Drawing::Point(20, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 24);
			this->label11->TabIndex = 12;
			this->label11->Text = L"n :";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->textBox9->Location = System::Drawing::Point(57, 33);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(75, 32);
			this->textBox9->TabIndex = 13;
			this->textBox9->Text = L"10";
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(38, 128);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(248, 35);
			this->button14->TabIndex = 15;
			this->button14->Text = L"Delete all elements";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label12->Location = System::Drawing::Point(138, 36);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 24);
			this->label12->TabIndex = 10;
			this->label12->Text = L"range :";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button17->Location = System::Drawing::Point(38, 81);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(248, 35);
			this->button17->TabIndex = 14;
			this->button17->Text = L"Add n random elements";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->textBox10->Location = System::Drawing::Point(211, 33);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 32);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"1000";
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(950, 362);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl2_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 33);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(942, 325);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Linked list output";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 27;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(936, 319);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 33);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(942, 325);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Linked stack output ";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 27;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(936, 319);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->listBox3);
			this->tabPage6->Location = System::Drawing::Point(4, 33);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(942, 325);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Linked Queue output";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 27;
			this->listBox3->Location = System::Drawing::Point(0, 0);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(942, 325);
			this->listBox3->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 608);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"Singly Linked List by Cassie";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		struct node *NewNode(int element)
		{
			struct node *p;
			p = (struct node *)malloc(sizeof(struct node));
			p->data = element;
			p->next = NULL;
			return p;
		}
		void insertFirst(int element)
		{
			struct node *p = NewNode(element);
			p->next = first->next;
			first->next = p;
			if (last == first) last = p;
		}
		void insertLast(int element)
		{
			struct node *p = NewNode(element);
			p->next = last->next;
			last->next = p;
			last = p;
		}
		void printList(struct node *first)
		{
			struct node *p;
			String ^list = "";
			for (p = first->next; p != first; p = p->next)
				list += p->data + "==>";
			listBox1->Items->Add(list + "<");
		}
		struct node *searchTarget(int target)
		{
			struct node *p;
			for (p = first->next; (p != first && p->data != target); p = p->next);
			if (p == first) return NULL;
			return p;
		}
		struct node *searchTargetBefore(int target)
		{
			struct node *p, *q;
			for (q = first, p = first->next; (p != first && p->data != target); q = p, p = p->next);
			if (p == first) return NULL;
			return q;
		}
		void insertAfter(int element, struct node *x)
		{
			struct node *p = NewNode(element);
			p->next = x->next;
			x->next = p;
			if (x == last) last = p;
		}
		void deleteAfter(struct node *x)
		{
			struct node *p = x->next;
			x->next = p->next;
			if (p == last) last = x;
			free(p);
		}
		void clearList(struct node *first)
		{
			struct node *p;
			for (p = first->next; p != first; p = first->next)
			{
				first->next = p->next;
				free(p);
			}
			last = first;
		}
		void push(int element)
		{
			struct node *p = NewNode(element);
			p->next = top->next;
			top->next = p;
		}
		int pop()
		{
			struct node *p = top->next;
			if (p == top) return -1;
			int result = p->data;
			top->next = p->next;
			free(p);
			return result;
		}
		void printStack(struct node *first)
		{
			struct node *p;
			String ^list = "";
			for (p = first->next; p != first; p = p->next)
				list += p->data + "==>";
			listBox2->Items->Add(list + "<");
		}
		void addQ(int element)
		{
			struct node *p = NewNode(element);
			p->next = rear->next;
			rear->next = p;
			rear = p;
		}
		int deleteQ()
		{
			struct node *p = front->next;
			if (front == rear) return -1;
			front->next = p->next;
			int result = p->data;
			if (p == rear)
				rear = front;
			free(p);
			return result;
		}
		void printQueue(struct node *first)
		{
			struct node *p;
			String ^list = "";
			for (p = first->next; p != first; p = p->next)
				list += p->data + "==>";
			listBox3->Items->Add(list + "<");
		}
		void reverse()
		{
			struct node * s, *t, *r;
			s = first;
			r = first->next;
			while (r != first)
			{
				t = s;
				s = r;
				r = r->next;
				s->next = t;
			}
			last = first->next;
			first->next = s;
		}
		void clearStack(struct node *top)
		{
			struct node *p;
			for (p = top->next; p != top; p = top->next)
			{
				top->next = p->next;
				free(p);
			}
		}
		void clearQueue(struct node *front)
		{
			struct node *p;
			for (p = front->next; p != front; p = front->next)
			{
				front->next = p->next;
				free(p);
			}
			rear = front;
		}
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
			 //只能輸入數字，不能輸入其他字母或符號。

	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
			 // 只能輸入數字，不能輸入其他字母或符號。
	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 tabControl2->SelectedIndex = tabControl1->SelectedIndex;
	}
	private: System::Void tabControl2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectedIndex = tabControl2->SelectedIndex;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int element = int::Parse(textBox1->Text);
				 insertFirst(element);
				 printList(first);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 int element = int::Parse(textBox1->Text);
				 insertLast(element);
				 printList(first);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 int target = int::Parse(textBox2->Text);
				 struct node *x;
				 x = searchTarget(target);
				 if (x) listBox1->Items->Add(x->data + " has been found.");
				 else listBox1->Items->Add(target + " has not been found.");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 int target = int::Parse(textBox2->Text);
				 int element = int::Parse(textBox1->Text);
				 struct node *x;
				 x = searchTarget(target);
				 if (x) insertAfter(element, x);
				 else listBox1->Items->Add(target + " has not been found.");
				 printList(first);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 int target = int::Parse(textBox2->Text);
				 int element = int::Parse(textBox1->Text);
				 struct node *x;
				 x = searchTargetBefore(target);
				 if (x) insertAfter(element, x);
				 else listBox1->Items->Add(target + " has not been found.");
				 printList(first);
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 int target = int::Parse(textBox2->Text);
				 struct node *x;
				 x = searchTargetBefore(target);
				 if (x) deleteAfter(x);
				 else listBox1->Items->Add(target + " has not been found.");
				 printList(first);
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = int::Parse(textBox3->Text);
				 int range = int::Parse(textBox4->Text);
				 int *data = new int[n];
				 String ^line = "";
				 for (int i = 0; i < n; i++)
				 {
					 data[i] = rand() % range + 1;
					 line += data[i] + "_";
					 insertLast(data[i]);
				 }
				 listBox1->Items->Add(n + " random numbers : " + line);
				 printList(first);
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 clearList(first);
				 printList(first);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 int element = int::Parse(textBox5->Text);
				 push(element);
				 printStack(top);
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 int result = pop();
				 if (result != -1) printStack(top);
				 else listBox2->Items->Add("Stack is empty.");
				 label6->Text = "pop result = " + result;
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 int element = int::Parse(textBox6->Text);
				 addQ(element);
				 printQueue(front);
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 int result = deleteQ();
				 if (result != -1) printQueue(front);
				 else listBox3->Items->Add("Queue is empty.");
				 label8->Text = "delete result : " + result;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				 reverse();
				 printList(first);
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = int::Parse(textBox7->Text);
				 int range = int::Parse(textBox8->Text);
				 int *data = new int[n];
				 String ^line = "";
				 for (int i = 0; i < n; i++)
				 {
					 data[i] = rand() % range + 1;
					 line += data[i] + "_";
					 push(data[i]);
				 }
				 listBox2->Items->Add(n + " random element : " + line);
				 printStack(top);
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
				 clearStack(top);
				 printStack(top);
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = int::Parse(textBox9->Text);
				 int range = int::Parse(textBox10->Text);
				 int *data = new int[n];
				 String ^line = "";
				 for (int i = 0; i < n; i++)
				 {
					 data[i] = rand() % range + 1;
					 line += data[i] + "_";
					 addQ(data[i]);
				 }
				 listBox3->Items->Add(n + " random element : " + line);
				 printQueue(front);
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 clearQueue(front);
				 printQueue(front);
	}
};
}
