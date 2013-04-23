

#pragma once

namespace funfungui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class PresListView : public System::Windows::Forms::Form
	{
	public:
		PresListView(void)
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
		~PresListView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  info;
	private: System::Windows::Forms::TabPage^  stats;
	private: System::Windows::Forms::TabPage^  prescriptions;
	private: System::Windows::Forms::TabPage^  comments;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;





	protected: 

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->info = (gcnew System::Windows::Forms::TabPage());
			this->stats = (gcnew System::Windows::Forms::TabPage());
			this->prescriptions = (gcnew System::Windows::Forms::TabPage());
			this->comments = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->prescriptions->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->info);
			this->tabControl1->Controls->Add(this->stats);
			this->tabControl1->Controls->Add(this->prescriptions);
			this->tabControl1->Controls->Add(this->comments);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 2;
			this->tabControl1->Size = System::Drawing::Size(284, 262);
			this->tabControl1->TabIndex = 0;
			// 
			// info
			// 
			this->info->Location = System::Drawing::Point(4, 22);
			this->info->Name = L"info";
			this->info->Padding = System::Windows::Forms::Padding(3);
			this->info->Size = System::Drawing::Size(276, 236);
			this->info->TabIndex = 0;
			this->info->Text = L"Info";
			this->info->UseVisualStyleBackColor = true;
			// 
			// stats
			// 
			this->stats->Location = System::Drawing::Point(4, 22);
			this->stats->Name = L"stats";
			this->stats->Padding = System::Windows::Forms::Padding(3);
			this->stats->Size = System::Drawing::Size(192, 74);
			this->stats->TabIndex = 1;
			this->stats->Text = L"Stats";
			this->stats->UseVisualStyleBackColor = true;
			// 
			// prescriptions
			// 
			this->prescriptions->Controls->Add(this->label5);
			this->prescriptions->Controls->Add(this->label4);
			this->prescriptions->Controls->Add(this->label3);
			this->prescriptions->Controls->Add(this->label2);
			this->prescriptions->Controls->Add(this->label1);
			this->prescriptions->Location = System::Drawing::Point(4, 22);
			this->prescriptions->Name = L"prescriptions";
			this->prescriptions->Size = System::Drawing::Size(276, 236);
			this->prescriptions->TabIndex = 2;
			this->prescriptions->Text = L"Prescriptions";
			this->prescriptions->UseVisualStyleBackColor = true;
			this->prescriptions->Click += gcnew System::EventHandler(this, &PresListView::prescriptions_Click);
			// 
			// comments
			// 
			this->comments->Location = System::Drawing::Point(4, 22);
			this->comments->Name = L"comments";
			this->comments->Size = System::Drawing::Size(192, 74);
			this->comments->TabIndex = 3;
			this->comments->Text = L"Comments";
			this->comments->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Prescription #1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prescription #2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prescription #3";
			this->label3->Click += gcnew System::EventHandler(this, &PresListView::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prescription #4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Prescription #5";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form2";
			this->Text = L"Pulse";
			this->tabControl1->ResumeLayout(false);
			this->prescriptions->ResumeLayout(false);
			this->prescriptions->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void prescriptions_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
