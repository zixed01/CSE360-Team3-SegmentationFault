#pragma once
#include "SessionData.h"
#include "AdminEditUserView.h"

namespace PulseTesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminViewUsersView
	/// </summary>
	public ref class AdminViewUsersView : public System::Windows::Forms::Form
	{
	public:
		AdminViewUsersView(SessionData ^ s)
		{
			SessionData ^ session = gcnew SessionData();
			session=s;
			InitializeComponent();
			this->Show();
			InitializeDataGridView();
		}
		void InitializeDataGridView()
		{
			this->dataGridView1->Rows->Add("Meow", "Mix");
			this->dataGridView1->Rows->Add("Please", "Deliver");
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminViewUsersView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  first;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  last;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->first = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->last = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->first, 
				this->last, this->type});
			this->dataGridView1->Location = System::Drawing::Point(13, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(344, 194);
			this->dataGridView1->TabIndex = 0;
			// 
			// first
			// 
			this->first->HeaderText = L"First Name";
			this->first->Name = L"first";
			// 
			// last
			// 
			this->last->HeaderText = L"Last Name";
			this->last->Name = L"last";
			// 
			// type
			// 
			this->type->HeaderText = L"User";
			this->type->Name = L"type";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Edit User";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminViewUsersView::button1_Click);
			// 
			// AdminViewUsersView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 262);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AdminViewUsersView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminViewUsersView";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				SessionData ^ s = gcnew SessionData();
				AdminEditUserView ^ adminEditScreen = gcnew AdminEditUserView(s);
			 }
};
}
