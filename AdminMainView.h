#pragma once
#include "AdminAddUserView.h"
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


	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  message;





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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->message = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(125, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Screen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(200, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Forgot Password List:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(185, 60);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(149, 108);
			this->listBox1->TabIndex = 3;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(60, 173);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add User";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AdminMainView::addButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(200, 173);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(109, 23);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove Username";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &AdminMainView::removeButton_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Username:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(11, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 34);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Reenter Password:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(295, 4);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 13);
			this->linkLabel1->TabIndex = 18;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"logout";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminMainView::linkLabel1_LinkClicked);
			// 
			// message
			// 
			this->message->AutoSize = true;
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->message->ForeColor = System::Drawing::Color::Red;
			this->message->Location = System::Drawing::Point(21, 152);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(149, 13);
			this->message->TabIndex = 19;
			this->message->Text = L"Passwords do not match.";
			this->message->Visible = false;
			// 
			// AdminMainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 220);
			this->Controls->Add(this->message);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
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
			 if (textBox2->Text==textBox3->Text) //Checks to see if both password fields match
			 {
				//If username already exists in password
					//this->message->Text=L"Username already exists";
					//this->message->Visible=true;
				//else
				//{
					AdminAddUserView ^ adminScreen = gcnew AdminAddUserView(s, textBox1->Text, textBox2->Text);
					this->message->Visible = false;
				//}
			 }
			 else	//Password fields do not match
			 {
				this->message->Text = L"Passwords do not match.";
				this->message->Visible = true;
			 }

		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			//Calls logout function
		 }
private: System::Void removeButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex!=-1)
				 listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		 }

};
}
