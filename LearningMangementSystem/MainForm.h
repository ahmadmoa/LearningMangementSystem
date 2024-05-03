#pragma once

namespace LearningMangementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Login;
	private: System::Windows::Forms::Button^ signup;
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
			this->Login = (gcnew System::Windows::Forms::Button());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Login
			// 
			this->Login->Location = System::Drawing::Point(242, 168);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(75, 23);
			this->Login->TabIndex = 0;
			this->Login->Text = L"Login";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// signup
			// 
			this->signup->Location = System::Drawing::Point(242, 212);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(75, 23);
			this->signup->TabIndex = 1;
			this->signup->Text = L"signup";
			this->signup->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 388);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->Login);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
