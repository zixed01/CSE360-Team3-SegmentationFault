#pragma once
//#include "stdafx.h"

#include <string>
#include <iostream>

#include "LoginForgotPWView.h"
#include "CommMainView.h"

namespace PulseTesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	void MarshalString ( String ^ s, string& os ) {
		using namespace Runtime::InteropServices;
		const char* chars = 
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	
	public ref class LoginMainView : public System::Windows::Forms::Form
	{
	public:
		LoginMainView()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginMainView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  title_lbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  username_tb;
	private: System::Windows::Forms::TextBox^  pw_tb;
	private: System::Windows::Forms::Button^  login_btn;
	private: System::Windows::Forms::Label^  forgotPW_lbl;
	private: System::Windows::Forms::Label^  login_message;

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
			this->title_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->username_tb = (gcnew System::Windows::Forms::TextBox());
			this->pw_tb = (gcnew System::Windows::Forms::TextBox());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->forgotPW_lbl = (gcnew System::Windows::Forms::Label());
			this->login_message = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// title_lbl
			// 
			this->title_lbl->AutoSize = true;
			this->title_lbl->Font = (gcnew System::Drawing::Font(L"Cooper Black", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->title_lbl->ForeColor = System::Drawing::Color::DarkRed;
			this->title_lbl->Location = System::Drawing::Point(78, 36);
			this->title_lbl->Name = L"title_lbl";
			this->title_lbl->Size = System::Drawing::Size(129, 46);
			this->title_lbl->TabIndex = 10;
			this->title_lbl->Text = L"Pulse";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Password:";
			// 
			// username_tb
			// 
			this->username_tb->Location = System::Drawing::Point(116, 115);
			this->username_tb->Name = L"username_tb";
			this->username_tb->Size = System::Drawing::Size(100, 20);
			this->username_tb->TabIndex = 13;
			this->username_tb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginMainView::username_tb_KeyDown);
			// 
			// pw_tb
			// 
			this->pw_tb->Location = System::Drawing::Point(116, 145);
			this->pw_tb->Name = L"pw_tb";
			this->pw_tb->PasswordChar = '*';
			this->pw_tb->Size = System::Drawing::Size(100, 20);
			this->pw_tb->TabIndex = 14;
			this->pw_tb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginMainView::pw_tb_KeyDown);
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(93, 189);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(99, 23);
			this->login_btn->TabIndex = 15;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &LoginMainView::login_btn_Click);
			// 
			// forgotPW_lbl
			// 
			this->forgotPW_lbl->AutoSize = true;
			this->forgotPW_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->forgotPW_lbl->Location = System::Drawing::Point(96, 217);
			this->forgotPW_lbl->Name = L"forgotPW_lbl";
			this->forgotPW_lbl->Size = System::Drawing::Size(92, 13);
			this->forgotPW_lbl->TabIndex = 16;
			this->forgotPW_lbl->Text = L"Forgot Password\?";
			this->forgotPW_lbl->Click += gcnew System::EventHandler(this, &LoginMainView::forgotPW_lbl_Click);
			// 
			// login_message
			// 
			this->login_message->AutoSize = true;
			this->login_message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login_message->ForeColor = System::Drawing::Color::Red;
			this->login_message->Location = System::Drawing::Point(31, 92);
			this->login_message->Name = L"login_message";
			this->login_message->Size = System::Drawing::Size(219, 13);
			this->login_message->TabIndex = 17;
			this->login_message->Text = L"Incorrect username and/or password.";
			this->login_message->Visible = false;
			// 
			// LoginMainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->login_message);
			this->Controls->Add(this->forgotPW_lbl);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->pw_tb);
			this->Controls->Add(this->username_tb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->title_lbl);
			this->Name = L"LoginMainView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pulse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/////////////////////////////
//Login Functions
/////////////////////////////
	//Checks to see if login info is correct. returns true if accurate, false otherwise
	bool checkLogin(string username, string password)
	{
		if (username.compare("user")==0 && password.compare("pw")==0)
			return true;
		else
			return false;
	}
	
	void submitLogin()
	{	
			String ^ username_sys="";
			String ^ password_sys="";

			string username="";
			string password="";

			username_sys=username_tb->Text;
			password_sys=pw_tb->Text;

			MarshalString (username_sys, username);
			MarshalString (password_sys, password);


			cout<<"Username:\t"<<username<<endl;
			cout<<"Password:\t"<<password<<endl;

			if (checkLogin(username, password))			//if login is true -> send to main screen of specific user type
			{
				CommMainView ^ comScreen = gcnew CommMainView;
				comScreen->Show();
				LoginMainView::Hide();
			}
			else			//display message, "Username and/or Password is incorrect"
				this->login_message->Visible = true;
	}

/////////////////////////////
//Event Handlers
/////////////////////////////
private: System::Void login_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				submitLogin();
		 }
private: System::Void forgotPW_lbl_Click(System::Object^  sender, System::EventArgs^  e) {

				LoginForgotPWView ^ forgotPW = gcnew LoginForgotPWView;
				forgotPW->Show();
		 }
private: System::Void pw_tb_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if ( e->KeyCode == Keys::Enter)
				submitLogin();
		 }
private: System::Void username_tb_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if(e->KeyCode == Keys::Enter)
				submitLogin();
		 }
};
}

