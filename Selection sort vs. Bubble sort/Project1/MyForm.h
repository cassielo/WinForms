#pragma once
#include <stdlib.h>
#include <time.h>
#define SWAP(x, y, t) (t = x, x = y, y = t)
int list[100000 ], X[100000], index = 0;
double Y1[100000], Y2[100000];

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;

	private:
	private: System::Windows::Forms::Label^  label2;
	protected private:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RadioButton^  radioButton1;



	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button5;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(48, 259);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(286, 59);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(263, 238);
			this->listBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(580, 59);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(263, 238);
			this->listBox2->TabIndex = 4;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 18;
			this->listBox3->Location = System::Drawing::Point(872, 59);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(263, 238);
			this->listBox3->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(130, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(130, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Range =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(71, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 31);
			this->label2->TabIndex = 9;
			this->label2->Text = L"n =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(281, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(261, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Randomly generated data:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(575, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Selection sort:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(867, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Bubble Sort:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(48, 107);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 22);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(286, 316);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Selection";
			series1->YValuesPerPoint = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Bubble";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(789, 300);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(48, 316);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 40);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Load Chart";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(48, 385);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(86, 22);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Column";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(48, 468);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(64, 22);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->Text = L"Line";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(48, 424);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(68, 22);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->Text = L"Point";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(48, 506);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(76, 22);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Spline";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(48, 566);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 40);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Re - Start";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 638);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Selection Sort vs. Bubble Sort by Cassie";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void SelectionSort(int list[], int n)
		{
			int i, j, min, temp;
			for (i = 0; i < n; i++)
			{
				min = i;
				for (j = i + 1; j < n; j++)
					if (list[j] < list[min]) min = j;
					temp = list[i];
					list[i] = list[min];
					list[min] = temp;
			}
		}
		//Selection Sort的函式
		void BubbleSort(int list[], int n)
		{
			int  i, j, temp;
			for (i = n - 1; i>0; i--)
			{
				for (j = 1; j <= i; j++)
				if (list[j - 1] > list[j])
					SWAP(list[j - 1], list[j], temp);
			}
		}
		//Bubble Sort的函式
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				int i;
				int n = int::Parse(textBox1->Text);// n為使用者希望產生的亂數個數
				int range = int::Parse(textBox2->Text); //range為使用者希望產生的亂數範圍為1~range
				index++; //同步圖表資料
				X[index] = n; //圖表的X軸內容
				srand(time(NULL)); //使每次執行產生的亂數不同
				for (i = 0; i < n; i++)
				{
					list[i] = rand() % range;
				}//產生n個範圍為1~range的亂數
				if (checkBox1->Checked) //如果Echo Print有被勾選，才在listbox1顯示亂數。
				{
					for (i = 0; i < n; i++)
						listBox1->Items->Add(list[i]);
				}
				listBox1->Items->Add(n+"random numbers are generated.");
	}
	
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 int list2[100000];
				int n = int::Parse(textBox1->Text);
				clock_t start, end; 
				double duration;
				for (int i = 0; i < n; i++) list2[i] = list[i]; //取出list中的亂數放在list2
				start = clock();
				SelectionSort(list2, n);
				end = clock();
				duration = (double)(end - start) / CLOCKS_PER_SEC; //Selectionsort的執行時間
				Y1[index] = duration; //圖表中的 SelectionSort Y軸內容
				if (checkBox1->Checked)
				{
					for (int i = 0; i < n; i++)
					{
						listBox2->Items->Add(list2[i]);
					}
				}//如果Echo Print有被勾選，才在listbox2顯示排序好的亂數。
				listBox2->Items->Add("CPU time : "+duration+"(sec.)");
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				int list2[100000];
				int n = int::Parse(textBox1->Text);
				clock_t start, end;
				double duration;
				for (int i = 0; i < n; i++) list2[i] = list[i]; //取出list中的亂數放在list2
				start = clock();
				BubbleSort(list2, n);
				end = clock();
				duration = (double)(end - start) / CLOCKS_PER_SEC;//Bubblesort的執行時間
				Y2[index] = duration;//圖表中的 BubbleSort Y軸內容
				if (checkBox1->Checked)
				{
					for (int i = 0; i < n; i++)
					{
						listBox3->Items->Add(list2[i]);
					}
				}//如果Echo Print有被勾選，才在listbox3顯示排序好的亂數。
				listBox3->Items->Add("CPU time : " + duration + "(sec.)");
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
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 chart1->Series->Clear();
				 chart1->Series->Add("Selection");
				 chart1->Series->Add("Bubble");
				 if (radioButton1->Checked)
				 {
					 chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					 chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				 }
				 if (radioButton2->Checked)
				 {
					 chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
					 chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				 }
				 if (radioButton3->Checked)
				 {
					 chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
					 chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
				 }
				 if (radioButton4->Checked)
				 {
					 chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
					 chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				 }
				 //設定圖表類型
				 for (int i = 1; i <= index; i++)
				 {
					 chart1->Series["Selection"]->Points->AddXY(X[i], Y1[i]);
					 chart1->Series["Bubble"]->Points->AddXY(X[i], Y2[i]);
				 }//畫出圖表
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				index = 0;
				chart1->Series->Clear();
				listBox1->Items->Clear();
				listBox2->Items->Clear();
				listBox3->Items->Clear();
				textBox1->Clear();
				textBox2->Clear();
	}
	//清除listboxes,textBoxes及圖表裡的資料
};
}
