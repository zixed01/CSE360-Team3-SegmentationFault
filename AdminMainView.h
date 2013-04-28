#pragma once
#include "AdminEditUserView.h"
#include "AdminViewUsersView.h"
#include "SessionData.h"

namespace PulseTesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMainView
	/// </summary>
	public ref class AdminMainView : public System::Windows::Forms::Form
	{
	public:
		AdminMainView(SessionData ^ s)
		{
			SessionData ^ session = gcnew SessionData();
			session=s;
			InitializeComponent();
			this->Show();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMainView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Button^  removeButton;








	private: System::Windows::Forms::LinkLabel^  linkLabel1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Screen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Forgot Password List:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(121, 46);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(109, 108);
			this->listBox1->TabIndex = 3;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(20, 109);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add User";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AdminMainView::addButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(121, 159);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(109, 23);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove Username";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &AdminMainView::removeButton_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(212, 3);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 13);
			this->linkLabel1->TabIndex = 18;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"logout";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMainView::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"View Users";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMainView::button1_Click);
			// 
			// AdminMainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(250, 194);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminMainView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminMainView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 SessionData ^ s = gcnew SessionData();
				//If username already exists in password
					//this->message->Text=L"Username already exists";
					//this->message->Visible=true;
				//else
				//{
					AdminEditUserView ^ adminAddScreen = gcnew AdminEditUserView(s);
				//}

		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			//Calls logout function
		 }
private: System::Void removeButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex!=-1)
				 listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			SessionData ^ s = gcnew SessionData();
			AdminViewUsersView ^ adminViewScreen = gcnew AdminViewUsersView(s);

		 }
};
}
