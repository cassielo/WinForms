#pragma once
#include <stdlib.h>

struct BSTreeNode
{
	struct BSTreeNode *leftchild;
	int data;
	struct BSTreeNode *rightchild;
};
struct QNode
{
	struct BSTreeNode *treenode;
	struct QNode *next;
};
struct BSTreeNode *root;
int pre;
struct QNode *front, *rear;

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
			pre = 0;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button8;



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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::SkyBlue;
			this->splitContainer1->Panel1->Controls->Add(this->groupBox4);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox3);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox1);
			this->splitContainer1->Size = System::Drawing::Size(962, 644);
			this->splitContainer1->SplitterDistance = 270;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(17, 486);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(236, 149);
			this->groupBox4->TabIndex = 29;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Tree Traversal";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(10, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 37);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Inorder";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(121, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 37);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Postorder";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(115, 96);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 37);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Levelorder";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(10, 96);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 37);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Preorder";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(17, 136);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(236, 168);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Random";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(115, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 32);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"1000";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(6, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 37);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Insert n random numbers";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 24);
			this->label1->TabIndex = 17;
			this->label1->Text = L"n :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"range :";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(115, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 32);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"10";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(17, 310);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(236, 170);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Delete";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(10, 121);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(215, 37);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Delete all";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(108, 33);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 32);
			this->textBox4->TabIndex = 21;
			this->textBox4->Text = L"10";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 24);
			this->label3->TabIndex = 20;
			this->label3->Text = L"target :";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(10, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(215, 37);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Delete from BST";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(17, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 127);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Insert";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 24);
			this->label4->TabIndex = 27;
			this->label4->Text = L"element :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(115, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"10";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(10, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert into BST";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(688, 644);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 644);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"Binary Search Tree by Cassie";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		struct BSTreeNode *NewBTreeNode(int element)
		{
			struct BSTreeNode *p;
			p = (struct BSTreeNode *)malloc(sizeof(struct BSTreeNode));
			p->data = element;
			p->leftchild = NULL;
			p->rightchild = NULL;
			return p;
		}
		struct BSTreeNode *InsertBST(struct BSTreeNode *node, int element)
		{
			if (node == NULL) return NewBTreeNode(element);
			if (element < node->data)
				node->leftchild = InsertBST(node->leftchild, element);
			else
				node->rightchild = InsertBST(node->rightchild, element);
			return node;
		}
		void inorder(struct BSTreeNode *node)
		{
			if (node != NULL)
			{
				inorder(node->leftchild);
				String ^list = "";
				list = node->data + "_";
				richTextBox1->AppendText(list);
				inorder(node->rightchild);
			}
			pre = 1;
		}
		void postorder(struct BSTreeNode *node)
		{
			if (node != NULL)
			{
				postorder(node->leftchild);
				postorder(node->rightchild);
				String ^list = "";
				list = node->data + "_";
				richTextBox1->AppendText(list);
			}
			pre = 2;
		}
		void preorder(struct BSTreeNode *node)
		{
			if (node != NULL)
			{
				String ^list = "";
				list = node->data + "_";
				richTextBox1->AppendText(list);
				preorder(node->leftchild);
				preorder(node->rightchild);
			}
			pre = 3;
		}
		void AddQueue(struct BSTreeNode *Tnode)
		{
			struct QNode *node;
			node = (struct QNode*)malloc(sizeof(struct QNode));
			node->treenode = Tnode;
			node->next = NULL;
			if (front == NULL) front = node;
			else rear->next = node;
			rear = node;
		}
		struct BSTreeNode *DeleteQueue()
		{
			struct BSTreeNode *Tnode;
			struct QNode *old_front;
			if (rear == NULL)
				richTextBox1->AppendText("Queue is empty.\n");
			else
			{
				Tnode = front->treenode;
				old_front = front;
				front = front->next;
				free(old_front);
				return Tnode;
			}
		}
		void LevelOrder(struct BSTreeNode *node)
		{
			AddQueue(node);
			while (front != NULL)
			{
				node = DeleteQueue();
				String ^list = "";
				list = node->data + "_";
				richTextBox1->AppendText(list);
				if (node->leftchild != NULL)
					AddQueue(node->leftchild);
				if (node->rightchild != NULL)
					AddQueue(node->rightchild);
			}
			pre = 4;
		}
		struct BSTreeNode *InorderSucc(struct BSTreeNode *node)
		{
			struct BSTreeNode *p;
			for (p = node; p->leftchild != NULL; p = p->leftchild);
			return p;
		}
		struct BSTreeNode *DeleteBST(struct BSTreeNode *node, int target)
		{
			struct BSTreeNode *temp;
			if (node == NULL) return node;
			if (target < node->data)
				node->leftchild = DeleteBST(node->leftchild, target);
			else if (target > node->data)
				node->rightchild = DeleteBST(node->rightchild, target);
			else //找到目標
			{
				if (node->leftchild == NULL || node->rightchild == NULL)
				{
					temp = (node->leftchild) ? node->leftchild : node->rightchild;
					if (temp == NULL) //左右皆空
					{
						temp = node;
						node = NULL;
					}
					else
						*node = *temp;
					free(temp);
				}
				else
				{
					temp = InorderSucc(node->rightchild);
					node->data = temp->data;
					node->rightchild = DeleteBST(node->rightchild, temp->data);
				}
			}
			return node;
		}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
			 // 只能輸入數字，不能輸入其他字母或符號。
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int element = int::Parse(textBox1->Text);
				 root = InsertBST(root, element);
				 if (pre == 1 || pre == 0)
				 {
					 richTextBox1->AppendText("Inorder : ");
					 inorder(root);
				 }
				 else if (pre == 2)
				 {
					 richTextBox1->AppendText("Postorder : ");
					 postorder(root);
				 }
				 else if (pre ==3)
				 {
					 richTextBox1->AppendText("Preorder : ");
					 preorder(root);
				 }
				 else
				 {
					 richTextBox1->AppendText("Levelorder : ");
					 LevelOrder(root);
				 }
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n = int::Parse(textBox2->Text);
				 int range = int::Parse(textBox3->Text);
				 int *data = new int[n];
				 String ^line = "";
				 for (int i = 0; i < n; i++)
				 {
					 data[i] = rand() % range + 1;
					 line += data[i] + "-";
					 root = InsertBST(root, data[i]);
				 }
				 richTextBox1->AppendText(n + " random numbers : " + line + "\n");
				 richTextBox1->AppendText("Insert result : ");
				 if (pre == 1 || pre == 0) inorder(root);
				 else if (pre == 2) postorder(root);
				 else if (pre == 3) preorder(root);
				 else LevelOrder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 int target = int::Parse(textBox4->Text);
				 root = DeleteBST(root, target);
				 richTextBox1->AppendText("Delete result : ");
				 if (pre == 1 || pre == 0) inorder(root);
				 else if (pre == 2) postorder(root);
				 else if (pre == 3) preorder(root);
				 else LevelOrder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->AppendText("Postorder : ");
				 postorder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->AppendText("Preorder : ");
				 preorder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->AppendText("Inorder : ");
				 inorder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->AppendText("Levelorder : ");
				 LevelOrder(root);
				 richTextBox1->AppendText("\n");
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 root = NULL;
				 richTextBox1->AppendText("The BST has been deleted.\n");
	}
};
}
