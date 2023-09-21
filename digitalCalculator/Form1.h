#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		float number1 = 0;
		float number2 = 0;
		long float result;
		char operation = NULL;
	private: System::Windows::Forms::Button^ buttonC;
	public:
	private: System::Windows::Forms::Label^ label;
	public:

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonMinus;
	protected:


	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonPlus;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ buttonMultiplication;
	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ buttonPercent;
	private: System::Windows::Forms::Button^ buttonEqual;






	private: System::Windows::Forms::Label^ label1;


	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiplication = (gcnew System::Windows::Forms::Button());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::Yellow;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(50, 486);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(88, 76);
			this->buttonMinus->TabIndex = 1;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Form1::buttonMinus_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(206, 486);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(88, 76);
			this->button0->TabIndex = 2;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(340, 486);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(88, 76);
			this->buttonPlus->TabIndex = 3;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &Form1::buttonPlus_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(50, 376);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 76);
			this->button7->TabIndex = 4;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(206, 376);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 76);
			this->button8->TabIndex = 5;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(340, 376);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 76);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(50, 263);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 76);
			this->button4->TabIndex = 7;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(206, 263);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 76);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(340, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 76);
			this->button6->TabIndex = 9;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(50, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 76);
			this->button1->TabIndex = 10;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);

			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(206, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 76);
			this->button2->TabIndex = 11;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);

			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(340, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 76);
			this->button3->TabIndex = 12;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);

			// 
			// buttonMultiplication
			// 
			this->buttonMultiplication->BackColor = System::Drawing::Color::PaleGreen;
			this->buttonMultiplication->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiplication->Location = System::Drawing::Point(459, 486);
			this->buttonMultiplication->Name = L"buttonMultiplication";
			this->buttonMultiplication->Size = System::Drawing::Size(88, 76);
			this->buttonMultiplication->TabIndex = 13;
			this->buttonMultiplication->Text = L"*";
			this->buttonMultiplication->UseVisualStyleBackColor = false;
			this->buttonMultiplication->Click += gcnew System::EventHandler(this, &Form1::buttonMultiplication_Click);
			// 
			// buttonDivision
			// 
			this->buttonDivision->BackColor = System::Drawing::Color::BurlyWood;
			this->buttonDivision->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivision->Location = System::Drawing::Point(459, 376);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->Size = System::Drawing::Size(88, 76);
			this->buttonDivision->TabIndex = 14;
			this->buttonDivision->Text = L"/";
			this->buttonDivision->UseVisualStyleBackColor = false;
			this->buttonDivision->Click += gcnew System::EventHandler(this, &Form1::buttonDivision_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::IndianRed;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPercent->Location = System::Drawing::Point(459, 263);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(88, 76);
			this->buttonPercent->TabIndex = 15;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &Form1::buttonPercent_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->ForeColor = System::Drawing::Color::Black;
			this->buttonEqual->Location = System::Drawing::Point(459, 144);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(88, 76);
			this->buttonEqual->TabIndex = 16;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &Form1::buttonEqual_Click);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 45);
			this->label1->MaximumSize = System::Drawing::Size(900, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 0);
			this->label1->TabIndex = 17;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label
			// 
			this->label->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label->Cursor = System::Windows::Forms::Cursors::Default;
			this->label->Font = (gcnew System::Drawing::Font(L"Impact", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(27, 23);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(527, 77);
			this->label->TabIndex = 18;
			this->label->Text = L"0";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(50, 103);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(497, 40);
			this->buttonC->TabIndex = 19;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &Form1::buttonC_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(559, 574);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonPercent);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->buttonMultiplication);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonMinus);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(0);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(1);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(2);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(3);

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(4);

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(5);

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(8);

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddNumber(9);
	}

	private: System::Void AddNumber(int number)
	{
		if (label->Text == "0")
		{
			label->Text = number.ToString();
			if (operation == NULL)
			{
				number1 = number;
			}
			else
			{
				number2 = number;
			}
		}
		else
		{
			label->Text = label->Text + number.ToString();
			if (operation == NULL)
			{
				number1 *= 10;
				number1 += number;
			}
			else
			{
				number2 *= 10;
				number2 += number;
			}
		}
	}
	private: System::Void buttonMultiplication_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation = '*';
		label->Text = "0";
		if (result != 0)
			number1 = result;
	}
	private: System::Void buttonDivision_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation = '/';
		label->Text = "0";
		if (result != 0)
			number1 = result;
	}
	private: System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation = '%';
		label->Text = "0";
		if (result != 0)
			number1 = result;
	}
	private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation = '-';
		label->Text = "0";
		if (result != 0)
			number1 = result;
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation = '+';
		label->Text = "0";
		if (result != 0)
			number1 = result;
	}

	//Calculate button
	private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e)
	{
		switch (operation)
		{
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		case '%':
			result = number1 * 100 / number2;
			break;
		}
		label->Text = result.ToString();
	}

	//Delete Button
	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		number1 = 0;
		number2 = 0;
		result = 0;
		operation = NULL;
		label->Text = "0";
	}
};
}
