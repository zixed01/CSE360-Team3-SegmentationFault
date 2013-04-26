#pragma once
//#include "stdafx.h"

#include <string>
#include <iostream>


namespace PulseTesting {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForgotPWView
	/// </summary>

	/*void MarshalString ( String ^ s, string& os ) {
		using namespace Runtime::InteropServices;
		const char* chars = 
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}*/

	public ref class LoginForgotPWView : public System::Windows::Forms::Form
	{
	public:
		LoginForgotPWView(void)
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
		~LoginForgotPWView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  username_tb;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  login_btn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			this->username_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// username_tb
			// 
			this->username_tb->Location = System::Drawing::Point(128, 72);
			this->username_tb->Name = L"username_tb";
			this->username_tb->Size = System::Drawing::Size(100, 20);
			this->username_tb->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Username:";
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(93, 103);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(99, 23);
			this->login_btn->TabIndex = 16;
			this->login_btn->Text = L"Submit";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &LoginForgotPWView::login_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Forgot Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 33);
			this->label3->MaximumSize = System::Drawing::Size(275, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 26);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Enter your username and a system administrator will contact you with instructions" 
				L" on resetting your password.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// LoginForgotPWView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 137);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->username_tb);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForgotPWView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pulse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			String ^ username_sys="";
			string username="";

			username_sys=username_tb->Text;

			//MarshalString (username_sys, username);

			cout<<"Username:\t"<<username<<endl;
		 }
};
}
