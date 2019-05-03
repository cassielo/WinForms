#pragma once
#define MaxStack 1000000
#include <stdlib.h>
#include <stdio.h>
int **maze, **mazeX;
int m, p, pos, top;
struct offset
{
	int x, y;
};
enum direction { E, S, W, N };    // 4 directions are considered
struct position
{
	int x, y;
	direction dir;
};
position stack[MaxStack];

namespace id0413408 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
	protected:
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;





	private: System::Windows::Forms::TabPage^  tabPage2;











	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::CheckBox^  checkBox2;

































	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->groupBox3);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(880, 645);
			this->splitContainer1->SplitterDistance = 261;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 500);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(231, 121);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Color Clear";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(67, 81);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(106, 26);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Refresh";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(46, 30);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 45);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Clear Color";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 45);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Genetare Manually";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 375);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(236, 119);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Auto";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(46, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Find a Tour";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(67, 79);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 26);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Refresh";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 45);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Generate Maze";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 273);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(236, 45);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Save Maze";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 142);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Size";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Please enter odd numbers";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Width:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Height:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(108, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 29);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(108, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(114, 29);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(615, 645);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(607, 610);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Mouse in maze";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(601, 604);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(607, 610);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Details";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->richTextBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->richTextBox2);
			this->splitContainer2->Size = System::Drawing::Size(601, 604);
			this->splitContainer2->SplitterDistance = 204;
			this->splitContainer2->TabIndex = 1;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(204, 604);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(393, 604);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(607, 610);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Generate Maze Manually";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox3->EnableAutoDragDrop = true;
			this->richTextBox3->Enabled = false;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->richTextBox3->Location = System::Drawing::Point(3, 3);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(601, 604);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 645);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"Mouse in Maze by Cassie ";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^ S;
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 { // 順利開啟檔案才繼續往下做

					 richTextBox1->Clear();
					 richTextBox2->Clear();
					 richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
					 S = richTextBox1->Lines[0];
					 //richTextBox1->AppendText("\n" + S);
					 pos = S->IndexOf(" ");
					 //richTextBox1->AppendText("\npos = " + pos);
					 m = int::Parse(S->Substring(0, pos));
					 p = int::Parse(S->Substring(pos + 1, S->Length - pos - 1));
					 //richTextBox1->AppendText("\nm = " + m + " p = " + p + "\n");

					 maze = new int*[m];
					 for (int i = 0; i < m; i++)
						 maze[i] = new int[p];
					 for (int i = 1; i <= m; i++)
					 {
						 S = richTextBox1->Lines[i];
						 for (int j = 0; j < p; j++)
							 maze[i - 1][j] = int::Parse(S->Substring(2 * j, 1));
					 }

					 dataGridView1->RowCount = m;
					 dataGridView1->ColumnCount = p;
					 for (int i = 0; i < m; i++)
					 {
						 for (int j = 0; j < p; j++)
						 {
							 //dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j];
							 if (maze[i][j] == 2)
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::RoyalBlue;
							 else if (maze[i][j] == 1)
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::DodgerBlue;
							 else
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightCyan;
						 }

					 }
				 }
	}
			 void push(position step)
			 {
				 if (top == m*p) richTextBox1->AppendText("Stack is full");
				 else stack[++top] = step;
			 }
			 position pop()
			 {
				 if (top == -1) richTextBox1->AppendText("Stack is empty");
				 else return stack[top--];
			 }

			 void MouseInMaze(int **maze, int Height, int Width)
			 {
				 int i, j, u, v;
				 bool found = false;
				 offset move[4];      // offsets of all 4 directions are prepared
				 String ^ str;
				 move[E].x = 0; move[E].y = 1;
				 move[S].x = 1; move[S].y = 0;
				 move[W].x = 0; move[W].y = -1;
				 move[N].x = -1; move[N].y = 0;
				 position step;
				 //maze[1][0] = 3;
				 //dataGridView1->Rows[1]->Cells[0]->Value = "3";
				 step.x = 1;
				 step.y = 1;
				 step.dir = E;     // define the first step
				 maze[1][1] = 3;
				 // dataGridView1->Rows[1]->Cells[1]->Value = "3";
				 dataGridView1->Rows[1]->Cells[0]->Style->BackColor = Color::Khaki;
				 if (checkBox1->Checked == true) dataGridView1->Refresh();
				 dataGridView1->Rows[1]->Cells[1]->Style->BackColor = Color::Khaki;
				 if (checkBox1->Checked == true) dataGridView1->Refresh();
				 push(step);
				 while (top != -1 && !found)     // keep moving till stack empty OR found
				 {
					 step = pop();
					 i = step.x;
					 j = step.y;
					 step.dir = step.dir;

					 while (step.dir <= N && !found)
					 {
						 u = i + move[step.dir].x;
						 v = j + move[step.dir].y;
						 if (u == Height - 2 && v == Width - 1)    // whether the EXIT is found
						 {
							 // dataGridView1->Rows[u]->Cells[v]->Value = "3";
							 found = true;
							 step.x = i;
							 step.y = j;
							 push(step);
							 dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::Khaki;
							 if (checkBox1->Checked == true) dataGridView1->Refresh();
							 while (top != -1)        // all positions in stack constitute the tour from entrance to exit
							 {
								 position s = pop();
								 int dir = s.dir;
								 if (s.x == Height - 2 && s.y == Height - 2)
									 dir = 1;
								 if (s.x != 0 && s.y != 0)
									 str = "=>(" + s.x + "," + s.y + "," + dir + ")\n" + str;
								 if (s.x != 0 && s.y != 0)
								 {
									 maze[s.x][s.y] = 4;
									 // dataGridView1->Rows[s.x]->Cells[s.y]->Value = "4";
								 }
								 maze[1][0] = 4;
								 //dataGridView1->Rows[1]->Cells[0]->Value = "4";
								 //dataGridView1->Rows[1]->Cells[1]->Value = "4";
								 maze[u][v] = 4;
								 //dataGridView1->Rows[u]->Cells[v]->Value = "4";
							 }
							 richTextBox2->AppendText("1:East 2:South 3:West 4:North\n");
							 richTextBox2->AppendText("Step:\n(1,0,1)\n");
							 richTextBox2->AppendText(str);
							 richTextBox2->AppendText("=>(" + (Height - 2) + "," + (Width - 1) + ")\n");
							 // return maze;
						 }
						 if (maze[u][v] == 0)       // a feasible step has been found
						 {
							 maze[u][v] = 3;// mark this position
							 // dataGridView1->Rows[u]->Cells[v]->Value = "3";

							 dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::Khaki; //Gray;
							 if (checkBox1->Checked == true) dataGridView1->Refresh();
							 step.x = i;
							 step.y = j;
							 step.dir = direction(step.dir + 1);
							 push(step);                // push previous position/next direction into stack
							 i = u; j = v; step.dir = E;// move to the feasible position
						 }
						 else
							 step.dir = direction(step.dir + 1);
					 }
					 if (!found)
						 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightGoldenrodYellow;
					 // no more feasible step for this position
					 if (checkBox1->Checked == true) dataGridView1->Refresh();
				 }
				 // return maze
				 richTextBox1->AppendText("\nAnswer : \n");
				 for (int i = 0; i < m; i++)
				 {
					 String ^ s = "";
					 for (int j = 0; j < p; j++)
					 {
						 s += maze[i][j];
						 s += " ";
					 }
					 richTextBox1->AppendText(s + "\n");
				 }
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (richTextBox1->Modified == false)
					 MessageBox::Show("請產生一個迷宮!");
				 else
					 MouseInMaze(maze, m, p);
	}


			 int ** generatemaze(int ** maze, int x, int y)
			 {
				 int direction;
				 maze[x][y] = 0;
				 // 標示此格已設定
				 // Form1->Memo2->Lines->Add("(x,y,dir)="+IntToStr(x)+","+IntToStr(y)+","+IntToStr(direction));
				 while (maze[x][y + 2] == 1 || maze[x + 2][y] == 1 || maze[x][y - 2] == 1 || maze[x - 2][y] == 1) // 如果不是外牆
				 {
					 direction = rand() % 4 + 1;  // 決定下一個位置
					 if (direction == 1 && maze[x][y + 2] == 1) // 向右走
					 {
						 maze[x][y + 1] = 0; // 拆掉右牆
						 // Form1->Memo2->Lines->Add("(x,y,dir)="+IntToStr(x)+","+IntToStr(y+1)+","+IntToStr(direction));
						 maze = generatemaze(maze, x, y + 2);
					 }
					 else if (direction == 2 && maze[x - 2][y] == 1) // 向上走
					 {
						 maze[x - 1][y] = 0; // 拆掉上牆
						 maze = generatemaze(maze, x - 2, y);
					 }
					 else if (direction == 3 && maze[x][y - 2] == 1) // 向左走
					 {
						 maze[x][y - 1] = 0; // 拆掉右牆
						 maze = generatemaze(maze, x, y - 2);
					 }
					 else if (direction == 4 && maze[x + 2][y] == 1) // 向下走
					 {
						 maze[x + 1][y] = 0; // 拆掉上牆
						 maze = generatemaze(maze, x + 2, y);
					 }
				 }
				 return maze;
			 }


	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {

				 if (textBox1->Modified == false || textBox2->Modified == false)
					 MessageBox::Show("請輸入邊長!");
				 else
				 {
					 richTextBox1->Clear();
					 richTextBox2->Clear();
					 if (maze)    // delete the previous maze
					 {
						 for (int i = 0; i < m; i++)
							 delete[] maze[i];
						 delete[] maze;
					 }
					 int i, j;
					 String ^str;
					 m = int::Parse(textBox1->Text);
					 p = int::Parse(textBox2->Text);
					 int Start_i = 1, Start_j = 1, End_i = m - 1, End_j = p - 1;

					 if (m % 2 == 1 && p % 2 == 1)
					 {
						 mazeX = new int *[m + 2];       // mazeX 專為產生迷宮而生，大小為 (m+2)*(p+2)； 外層乃刻意保留的擋板
						 for (i = 0; i <= m + 1; i++)
							 mazeX[i] = new int[p + 2];
						 for (i = 0; i <= m + 1; i++)
						 {
							 for (int j = 0; j <= p + 1; j++)
							 {
								 if ((i == 0) || (j == 0) || (i == m + 1) || (j == p + 1))
									 mazeX[i][j] = 4;  // 設定外層刻意保留的擋板
								 else
									 mazeX[i][j] = 1;  // 初始迷宮 (m*p) 內部
							 }
						 }
						 mazeX = generatemaze(mazeX, End_i, End_j);// 產生迷宮 出口[m-1,p-1]、入口:[2???/./../..,2]
						 for (i = 1; i <= m; i++)
						 {
							 for (j = 1; j <= p; j++)
							 {
								 if ((i == 1) || (j == 1) || (i == m) || (j == p))
									 mazeX[i][j] = 2; // 設定外牆；之前保留的擋板稍後拆掉
							 }
						 }
						 mazeX[Start_i + 1][Start_j] = 0; // 拆掉入口 mazeX[2,2] 的左牆 即 [2,1] (=[Start_i+1, Start_j])
						 mazeX[End_i][End_j + 1] = 0;     // 拆掉出口 mazeX[m-1, p-1] 右牆 即 [m-1,p](=[End_i, End_j+1])
						 maze = new int *[m];
						 for (i = 0; i < m; i++)
							 maze[i] = new int[p];
						 for (i = 0; i < m; i++)
						 for (j = 0; j < p; j++)
							 maze[i][j] = mazeX[i + 1][j + 1]; // 調整入口成為 maze[1,1]、出口 maze[m-2, p-2]
						 richTextBox1->AppendText(m + " " + p + "\n");
						 for (int i = 0; i < m; i++)
						 {
							 str = "";
							 for (int j = 0; j < p; j++)
							 {
								 str += maze[i][j];
								 str += " ";
							 }
							 richTextBox1->AppendText(str + "\n");
						 }
						 dataGridView1->RowCount = m;
						 dataGridView1->ColumnCount = p;
						 for (int i = 0; i < m; i++)
						 {
							 for (int j = 0; j < p; j++)
							 {
								 //dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j];
								 if (maze[i][j] == 2)
									 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::RoyalBlue;
								 else if (maze[i][j] == 1)
									 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::DodgerBlue;
								 else
									 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightCyan;
							 }

						 }// ... 可將 maze 顯示於 dataGridView 或 richTextBox/listBox 中
						 for (i = 0; i <= m + 1; i++)
							 delete[] mazeX[i];
						 delete[] mazeX;
					 }
					 else if (m % 2 == 0 || p % 2 == 0)
						 MessageBox::Show("請輸入奇數邊長!");
				 }

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^b;
				 b += "D:\\" + m + " " + p + "maze.txt";
				 char *str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(b);

				 FILE *fp = fopen(str2, "w"); // 寫檔, 注意第二參數為 "w" (write)
				 if (fp)
				 {
					 fprintf(fp, "%d %d", m, p);
					 putc('\n', fp);
					 fclose(fp);      // 寫完檔後務必關檔
				 }
				 fp = fopen(str2, "a");  // 自檔尾寫入, 注意第二參數為 "a" (append)
				 if (fp)
				 {
					 for (int i = 0; i < m; i++)
					 {
						 for (int j = 0; j < p; j++)
						 {
							 fprintf(fp, "%d ", maze[i][j]);
						 }
						 putc('\n', fp);
					 }
					 fclose(fp);      // 寫完檔後務必關檔  
				 }
				 MessageBox::Show("Successfully saved\n" + b);


	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ S;
				 String ^str;
				 richTextBox1->Clear();
				 richTextBox2->Clear();
				 if (richTextBox3->Modified == false)
				 {
					 this->richTextBox3->Enabled = true;
					 tabControl1->SelectedTab = tabPage3;
					 MessageBox::Show("請在第一行輸入邊長 例如 : \n3 3\n2 2 2\n0 0 0\n2 2 2\n輸入完再按一次Generate Manually");
				 }
				 else
				 {
					 S = richTextBox3->Lines[0];
					 pos = S->IndexOf(" ");
					 m = int::Parse(S->Substring(0, pos));
					 p = int::Parse(S->Substring(pos + 1, S->Length - pos - 1));
					 maze = new int*[m];
					 for (int i = 0; i < m; i++)
						 maze[i] = new int[p];
					 for (int i = 1; i <= m; i++)
					 {
						 S = richTextBox3->Lines[i];
						 for (int j = 0; j < p; j++)
							 maze[i - 1][j] = int::Parse(S->Substring(2 * j, 1));
					 }
					 dataGridView1->RowCount = m;
					 dataGridView1->ColumnCount = p;
					 for (int i = 0; i < m; i++)
					 {
						 for (int j = 0; j < p; j++)
						 {
							 if (maze[i][j] == 2)
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::RoyalBlue;
							 else if (maze[i][j] == 1)
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::DodgerBlue;
							 else
								 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightCyan;
						 }

					 }
					 richTextBox1->AppendText(m + " " + p + "\n");
					 for (int i = 0; i < m; i++)
					 {
						 str = "";
						 for (int j = 0; j < p; j++)
						 {
							 str += maze[i][j];
							 str += " ";
						 }
						 richTextBox1->AppendText(str + "\n");
					 }
					 tabControl1->SelectedTab = tabPage1;
				 }


	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 int x, y;
				 for (int i = 0; i < m; i++)
				 {
					 for (int j = 0; j < p; j++)
					 {
						 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::AliceBlue;
						 if (checkBox2->Checked) dataGridView1->Refresh();
					 }
				 }



	}

	};
}



