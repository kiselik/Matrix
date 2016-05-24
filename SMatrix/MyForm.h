#pragma once
#include "TMatrix5.h"
#include "TVector.h"

namespace SMatrix {
	int size;
	typedef __int32 Cur;
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(181, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(223, 55);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(181, 150);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(427, 55);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(181, 150);
			this->dataGridView3->TabIndex = 2;
			this->dataGridView3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(252, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"A+B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(343, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"A-B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(427, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"A*B";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(642, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		dataGridView1->Visible = true;
		dataGridView2->Visible = true;
		dataGridView3->Visible = true;
		dataGridView1->RowCount = size;
		dataGridView1->ColumnCount = size;
		dataGridView2->RowCount = size;
		dataGridView2->ColumnCount = size;
		dataGridView3->RowCount = size;
		dataGridView3->ColumnCount = size;
		dataGridView1->DataSource;
		for (int i = 0; i < size; i++)
		{
			dataGridView3->Rows[i]->ReadOnly = true;

			for (int j = 0; j < i; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
				dataGridView1->Rows[i]->Cells[j]->Value = 0;
				dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
				dataGridView2->Rows[i]->Cells[j]->Value = 0;
				dataGridView3->Rows[i]->Cells[j]->ReadOnly = true;
				dataGridView3->Rows[i]->Cells[j]->Value = 0;
			}
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	TMatrix5<Cur> A(size*size);
	TMatrix5<Cur> B(size*size);
	TMatrix5<Cur> C(size*size);
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			A[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			B[i][j] = System::Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
		}
	}
	C = A + B;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			dataGridView3->Rows[i]->Cells[j]->Value = C[i][j].ToString();
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	TMatrix5<Cur> A(size*size);
	TMatrix5<Cur> B(size*size);
	TMatrix5<Cur> C(size*size);
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			A[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			B[i][j] = System::Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
		}
	}
	C = A - B;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			dataGridView3->Rows[i]->Cells[j]->Value = C[i][j].ToString();
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	TMatrix5<Cur> A(size*size);
	TMatrix5<Cur> B(size*size);
	TMatrix5<Cur> C(size*size);
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			A[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			B[i][j] = System::Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
		}
	}
	C=A*B;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			dataGridView3->Rows[i]->Cells[j]->Value = C[i][j].ToString();
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	size = (Convert::ToInt32(textBox1->Text));
	dataGridView1->Visible=false;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	dataGridView3->Rows->Clear();
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	if (size == 0)
	{
		textBox1->Clear();
		dataGridView1->Visible = false;
		dataGridView2->Visible = false;
		dataGridView3->Visible = false;
	}

}
};
}
