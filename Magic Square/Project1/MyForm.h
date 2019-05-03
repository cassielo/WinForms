#pragma once
#define MaxSize 36
#define SWAP(x, y, t) (t = x, x = y, y = t)
int square[MaxSize][MaxSize];
namespace Project1 {

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
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;



	protected:

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->splitContainer1->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(904, 545);
			this->splitContainer1->SplitterDistance = 171;
			this->splitContainer1->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(28, 113);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(108, 22);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Print Total";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(310, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 22);
			this->label3->TabIndex = 10;
			this->label3->Text = L"For n is odd:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(314, 53);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(480, 100);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"position of 1 and moving direction";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"left-top", L"right-top" });
			this->comboBox1->SelectedItem = "left-top";
			this->comboBox1->Location = System::Drawing::Point(11, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 28);
			this->comboBox1->TabIndex = 12;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"right-top", L"right-bottom" });
			this->comboBox4->SelectedItem = "right-top";
			this->comboBox4->Location = System::Drawing::Point(365, 56);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 28);
			this->comboBox4->TabIndex = 11;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"left-top", L"left-bottom" });
			this->comboBox3->SelectedItem = "left-top";
			this->comboBox3->Location = System::Drawing::Point(247, 56);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 28);
			this->comboBox3->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"left-bottom", L"right-bottom" });
			this->comboBox2->SelectedItem = "left-bottom";
			this->comboBox2->Location = System::Drawing::Point(130, 56);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 28);
			this->comboBox2->TabIndex = 9;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Location = System::Drawing::Point(11, 28);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(57, 24);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Up";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(130, 27);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(80, 24);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->Text = L"Down";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(247, 25);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(64, 24);
			this->radioButton7->TabIndex = 4;
			this->radioButton7->Text = L"Left";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(365, 28);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(75, 24);
			this->radioButton8->TabIndex = 5;
			this->radioButton8->Text = L"Right";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"(n shouldn\'t be 2)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Magic Square";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(904, 370);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(896, 338);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"listBox";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(890, 332);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(896, 338);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"listBox + fixed spacing";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(890, 332);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 28);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(896, 338);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"richTextBox + space + fixed font";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(890, 332);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 28);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(896, 338);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"dataGridView";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(890, 332);
			this->dataGridView1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 545);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"Magic Square by Cassie 2016/10/13";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void MagicSquare(int n)
		{
			if (n % 2 != 0)
			{
				int i, j, k, l, data;
				for (i = 0; i <= n; i++)
				for (j = 0; j <= n; j++)
					square[i][j] = 0;
				if (radioButton5->Checked){
					i = 0;
					j = (n - 1) / 2;
				}
				if (radioButton6->Checked){
					i = n - 1;
					j = (n - 1) / 2;
				}
				if (radioButton7->Checked){
					i = (n - 1) / 2;
					j = 0;
				}
				if (radioButton8->Checked){
					i = (n - 1) / 2;
					j = n - 1;
				}
				square[i][j] = 1;
				data = 2;
				while (data <= n*n)
				{
					if ((this->comboBox1)->Text == "left-top"&&radioButton5->Checked)
					{
						k = (i - 1<0) ? n - 1 : i - 1;
						l = (j - 1<0) ? n - 1 : j - 1;
						if (square[k][l] > 0) i = (i + 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox1)->Text == "right-top"&&radioButton5->Checked)
					{
						k = (i - 1<0) ? n - 1 : i - 1;
						l = (j + 1>n - 1) ? 0 : j + 1;
						if (square[k][l] > 0) i = (i + 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox2)->Text == "left-bottom"&&radioButton6->Checked)
					{
						k = (i + 1>n - 1) ? 0 : i + 1;
						l = (j - 1<0) ? n - 1 : j - 1;
						if (square[k][l] > 0) i = (i + n - 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox2)->Text == "right-bottom"&&radioButton6->Checked)
					{
						k = (i + 1>n - 1) ? 0 : i + 1;
						l = (j + 1>n - 1) ? 0 : j + 1;
						if (square[k][l] > 0) i = (i + n - 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox3)->Text == "left-top"&&radioButton7->Checked)
					{
						k = (i - 1<0) ? n - 1 : i - 1;
						l = (j - 1<0) ? n - 1 : j - 1;
						if (square[k][l] > 0) j = (j + 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox3)->Text == "left-bottom"&&radioButton7->Checked)
					{
						k = (i + 1>n - 1) ? 0 : i + 1;
						l = (j - 1<0) ? n - 1 : j - 1;
						if (square[k][l] > 0) j = (j + 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox4)->Text == "right-top"&&radioButton8->Checked)
					{
						k = (i - 1<0) ? n - 1 : i - 1;
						l = (j + 1>n - 1) ? 0 : j + 1;
						if (square[k][l] > 0)  j = (j + n - 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					if ((this->comboBox4)->Text == "right-bottom"&&radioButton8->Checked)
					{
						k = (i + 1>n - 1) ? 0 : i + 1;
						l = (j + 1>n - 1) ? 0 : j + 1;
						if (square[k][l] > 0) j = (j + n - 1) % n;
						else
						{
							i = k;
							j = l;
						}
					}
					square[i][j] = data++;
				}
			}
			else if (n % 2 == 0 && n != 2)
			{
				int check[MaxSize][MaxSize];
				int data = 1, temp;
				for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					check[i][j] = 0;
				for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++){
					square[i][j] = data;
					data++;
				}
				for (int i = 0; i <= n / 2 - 1; i++)
				{
					SWAP(square[i][i], square[n - 1 - i][n - 1 - i], temp);
					SWAP(square[i][n - 1 - i], square[n - 1 - i][i], temp);
				}
				for (int i = 0; i < n; i++){
					check[i][i] = 1;
					check[i][n - 1 - i] = 1;
				}
				int count, one, one1;
				for (int i = 0; i <= n / 2 - 1; i++)
				{
					count = 0;
					while (count < n / 2 - 2)
					{
						one = 0;
						for (int j = 0; j < n; j++)
						{
							if (one == 0 && check[n - 1 - i][j] == 0 && check[i][j] == 0 && square[n - 1 - i][j] - square[i][j] == n*(n - (i * 2 + 1)))
							{
								if (n / 2 - 2 - count != 1 && check[n - 1 - i][n - 1 - j] == 0 && check[i][n - 1 - j] == 0 && square[n - 1 - i][n - 1 - j] - square[i][n - 1 - j] == n*(n - (i * 2 + 1)))
								{
									SWAP(square[n - 1 - i][n - 1 - j], square[i][n - 1 - j], temp);
									count++;
								}
								SWAP(square[n - 1 - i][j], square[i][j], temp);
								one = 1;
							}
						}
						count++;
					}
					count = 0;
					while (count < n / 2 - 2)
					{
						one1 = 0;
						for (int j = 0; j < n; j++)
						{
							if (one1 == 0 && check[j][n - 1 - i] == 0 && check[j][i] == 0 && square[j][n - 1 - i] - square[j][i] == n - (i * 2 + 1))
							{
								if (n / 2 - 2 - count != 1 && check[n - 1 - j][n - 1 - i] == 0 && check[n - 1 - j][i] == 0 && square[n - 1 - j][n - 1 - i] - square[n - 1 - j][i] == n - (i * 2 + 1))
								{
									SWAP(square[n - 1 - j][n - 1 - i], square[n - 1 - j][i], temp);
									count ++;
								}
								SWAP(square[j][n - 1 - i], square[j][i], temp);
								one1 = 1;
							}
						}
						count++;
					}
				}
			}
			int total, total2, total3 = 0;
			for (int i = 0; i < n; i++)
			{
				total = 0;
				total2 = 0;
				total3 += square[i][i];
				square[n][n] = total3;
				for (int j = 0; j < n; j++)
				{
					total += square[i][j];
					square[i][n] = total;
					total2 += square[j][i];
					square[n][i] = total2;
				}
			}
		}
		void PrintSquare(int n)
		{
			String ^ line;
			String ^ str;
			int block = Convert::ToString(n*n)->Length + 2, blank_len;
			listBox1->Items->Add(n + " x " + n + "的魔術方陣");
			listBox2->Items->Add(n + " x " + n + "的魔術方陣");
			richTextBox1->AppendText(n + " x " + n + "的魔術方陣\n");
			if (checkBox1->Checked)
			{
				for (int i = 0; i <= n; i++)
				{
					line = "";
					for (int j = 0; j <= n; j++)
					{
						line += square[i][j] + " ";
					}
					listBox1->Items->Add(line);
				}

				for (int i = 0; i <= n; i++)
				{
					line = "";
					for (int j = 0; j <= n; j++)
					{
						str = Convert::ToString(square[i][j]);
						blank_len = block - str->Length;
						for (int k = 0; k < blank_len; k++) line += " ";
						line += square[i][j];
					}
					listBox2->Items->Add(line);
					richTextBox1->AppendText(line + "\n");
				}
				dataGridView1->ColumnCount = n + 1;
				dataGridView1->RowCount = n + 1;
				dataGridView1->AutoResizeRows();
				for (int i = 0; i <= n; i++)
				{
					dataGridView1->Columns[i]->Width = 36;
					for (int j = 0; j <= n; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = square[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < n; i++)
				{
					line = "";
					for (int j = 0; j < n; j++)
					{
						line += square[i][j] + " ";
					}
					listBox1->Items->Add(line);
				}

				for (int i = 0; i < n; i++)
				{
					line = "";
					for (int j = 0; j < n; j++)
					{
						str = Convert::ToString(square[i][j]);
						blank_len = block - str->Length;
						for (int k = 0; k < blank_len; k++) line += " ";
						line += square[i][j];
					}
					listBox2->Items->Add(line);
					richTextBox1->AppendText(line + "\n");
				}
				dataGridView1->ColumnCount = n;
				dataGridView1->RowCount = n;
				dataGridView1->AutoResizeRows();
				for (int i = 0; i < n; i++)
				{
					dataGridView1->Columns[i]->Width = 36;
					for (int j = 0; j < n; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = square[i][j];
					}
				}
			}
			
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = int::Parse(textBox1->Text);
				 MagicSquare(n);
				 PrintSquare(n);
	}
};
}
