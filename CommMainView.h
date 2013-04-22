#pragma once
#include "stdafx.h"
#include "CommAddView.h"

namespace PulseTesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CommMainView
	/// </summary>
	public ref class CommMainView : public System::Windows::Forms::Form
	{
	public:
		CommMainView(void)
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
		~CommMainView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  textbox;
	protected: 
	private: System::Windows::Forms::Button^  add_btn;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;


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
			this->textbox = (gcnew System::Windows::Forms::RichTextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textbox
			// 
			this->textbox->Location = System::Drawing::Point(36, 57);
			this->textbox->Name = L"textbox";
			this->textbox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->textbox->Size = System::Drawing::Size(200, 156);
			this->textbox->TabIndex = 0;
			this->textbox->Text = L"Comments:";
			this->textbox->ReadOnly = true;
			this->textbox->BackColor = System::Drawing::Color::White;
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(97, 219);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(81, 23);
			this->add_btn->TabIndex = 1;
			this->add_btn->Text = L"Add Comment";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &CommMainView::add_btn_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(36, 31);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 3;
			// 
			// CommentMainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->textbox);
			this->Name = L"CommentMainView";
			this->Text = L"Pulse";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			 	//Pops up a new window to add screen 
				CommAddView ^ addScreen = gcnew CommAddView;
				addScreen->Show();
				//CommMainView::Hide();

			 }
	};
}
