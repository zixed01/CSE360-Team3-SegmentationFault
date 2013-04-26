#include <string.h>
#include <iostream>
#include "PresListView.h"

#pragma once

namespace funfungui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	void MarshalString ( String ^ s, string& os ) 
{
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class PresEditAddView : public System::Windows::Forms::Form
	{
	public:
		PresEditAddView(void)
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
		~PresEditAddView()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  Back;
	private: System::Windows::Forms::TextBox^  prescription;

	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  dose;
	private: System::Windows::Forms::TextBox^  instructions;
	private: System::Windows::Forms::TextBox^  refills;
	private: System::Windows::Forms::TextBox^  doctor;
	private: System::Windows::Forms::TextBox^  comments;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Label^  errorDose;
	private: System::Windows::Forms::Label^  label9;














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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->prescription = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->dose = (gcnew System::Windows::Forms::TextBox());
			this->instructions = (gcnew System::Windows::Forms::TextBox());
			this->refills = (gcnew System::Windows::Forms::TextBox());
			this->doctor = (gcnew System::Windows::Forms::TextBox());
			this->comments = (gcnew System::Windows::Forms::TextBox());
			this->save = (gcnew System::Windows::Forms::Button());
			this->errorDose = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(284, 130);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Prescription#";
			this->label1->Click += gcnew System::EventHandler(this, &PresEditAddView::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &PresEditAddView::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Dose (mg)";
			this->label3->Click += gcnew System::EventHandler(this, &PresEditAddView::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Instructions";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Refills";
			this->label5->Click += gcnew System::EventHandler(this, &PresEditAddView::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Doctor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Comments";
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(197, 178);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 10;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &PresEditAddView::button1_Click);
			// 
			// prescription
			// 
			this->prescription->Location = System::Drawing::Point(87, 22);
			this->prescription->Name = L"prescription";
			this->prescription->Size = System::Drawing::Size(100, 20);
			this->prescription->TabIndex = 11;
			this->prescription->TextChanged += gcnew System::EventHandler(this, &PresEditAddView::prescription_TextChanged);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(87, 56);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 12;
			this->name->TextChanged += gcnew System::EventHandler(this, &PresEditAddView::name_TextChanged);
			// 
			// dose
			// 
			this->dose->Location = System::Drawing::Point(87, 89);
			this->dose->Name = L"dose";
			this->dose->Size = System::Drawing::Size(100, 20);
			this->dose->TabIndex = 13;
			this->dose->TextChanged += gcnew System::EventHandler(this, &PresEditAddView::dose_TextChanged);
			// 
			// instructions
			// 
			this->instructions->Location = System::Drawing::Point(87, 119);
			this->instructions->Name = L"instructions";
			this->instructions->Size = System::Drawing::Size(100, 20);
			this->instructions->TabIndex = 14;
			this->instructions->TextChanged += gcnew System::EventHandler(this, &PresEditAddView::textBox4_TextChanged);
			// 
			// refills
			// 
			this->refills->Location = System::Drawing::Point(87, 152);
			this->refills->Name = L"refills";
			this->refills->Size = System::Drawing::Size(100, 20);
			this->refills->TabIndex = 15;
			this->refills->TextChanged += gcnew System::EventHandler(this, &PresEditAddView::textBox5_TextChanged);
			// 
			// doctor
			// 
			this->doctor->Location = System::Drawing::Point(87, 185);
			this->doctor->Name = L"doctor";
			this->doctor->Size = System::Drawing::Size(100, 20);
			this->doctor->TabIndex = 16;
			// 
			// comments
			// 
			this->comments->Location = System::Drawing::Point(87, 217);
			this->comments->Name = L"comments";
			this->comments->Size = System::Drawing::Size(100, 20);
			this->comments->TabIndex = 17;
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(197, 214);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 23);
			this->save->TabIndex = 18;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &PresEditAddView::save_Click);
			// 
			// errorDose
			// 
			this->errorDose->AutoSize = true;
			this->errorDose->ForeColor = System::Drawing::Color::Red;
			this->errorDose->Location = System::Drawing::Point(194, 96);
			this->errorDose->Name = L"errorDose";
			this->errorDose->Size = System::Drawing::Size(0, 13);
			this->errorDose->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(194, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 20;
			// 
			// PresEditAddView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->errorDose);
			this->Controls->Add(this->save);
			this->Controls->Add(this->comments);
			this->Controls->Add(this->doctor);
			this->Controls->Add(this->refills);
			this->Controls->Add(this->instructions);
			this->Controls->Add(this->dose);
			this->Controls->Add(this->name);
			this->Controls->Add(this->prescription);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox3);
			this->Name = L"PresEditAddView";
			this->Text = L"Pulse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 PresListView ^ presListView = gcnew PresListView();
			 presListView->Show();
			 //form2->label1->Text = sarray[0];
			 this->Hide();
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void prescription_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //string ^ temp = prescription->Text;
			 //textBox4->Text = temp;
		 }
private: System::Void name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dose_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
			int temp = 1;
			String ^ pres1;
			String ^ pres2;
			String ^ pres3;
			String ^ pres4;
			String ^ pres5;
			String ^ pres6;
		    String ^ pres7;
			pres1 = this->prescription->Text;
			pres2 = this->name->Text;
			pres3 = this->dose->Text;
			pres4 = this->instructions->Text;
			pres5 = this->refills->Text;
			pres6 = this->doctor->Text;
			pres7 = this->comments->Text;
			string pres12 = "";  
			string pres22 = ""; 
			string pres32 = ""; 
			string pres42 = ""; 
			string pres52 = ""; 
			string pres62 = ""; 
			string pres72 = ""; 
			const char *refills;
			const char *dose;
			MarshalString(pres1, pres12);
			MarshalString(pres2, pres22);
			MarshalString(pres3, pres32);
			MarshalString(pres4, pres42);
			MarshalString(pres5, pres52);
			refills = pres52.c_str();
			dose = pres32.c_str();
			if(atoi(dose) <= 0)
			{
				this->errorDose->Text = "improper number";
			}

			if(atoi(refills) <= 0)
			{
				this->label9->Text = "improper number";
			}

			//cout << refills << endl;
			//cout<< atoi(refills) << endl;
			MarshalString(pres6, pres62);
			MarshalString(pres7, pres72);

		 }

		 //private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 //}
};
}

