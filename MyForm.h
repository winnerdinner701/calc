#pragma once

namespace lesson1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;









	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;

	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox1->Location = System::Drawing::Point(21, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 50);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->label1->Location = System::Drawing::Point(214, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 44);
			this->label1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox2->Location = System::Drawing::Point(262, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 50);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->label2->Location = System::Drawing::Point(455, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 44);
			this->label2->TabIndex = 4;
			this->label2->Text = L"= ";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button5->Location = System::Drawing::Point(12, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 62);
			this->button5->TabIndex = 9;
			this->button5->Text = L"C";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button6->Location = System::Drawing::Point(49, 400);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 62);
			this->button6->TabIndex = 10;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button7->Location = System::Drawing::Point(12, 332);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 62);
			this->button7->TabIndex = 11;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button8->Location = System::Drawing::Point(85, 332);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 62);
			this->button8->TabIndex = 12;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button11->Location = System::Drawing::Point(85, 264);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 62);
			this->button11->TabIndex = 15;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button12->Location = System::Drawing::Point(12, 264);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 62);
			this->button12->TabIndex = 16;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button14->Location = System::Drawing::Point(85, 196);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 62);
			this->button14->TabIndex = 18;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button15->Location = System::Drawing::Point(12, 196);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 62);
			this->button15->TabIndex = 19;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button17->Location = System::Drawing::Point(122, 400);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 62);
			this->button17->TabIndex = 21;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button16->Location = System::Drawing::Point(362, 400);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 62);
			this->button16->TabIndex = 32;
			this->button16->Text = L".";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button27->Location = System::Drawing::Point(289, 400);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 62);
			this->button27->TabIndex = 22;
			this->button27->Text = L"0";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button1->Location = System::Drawing::Point(334, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 62);
			this->button1->TabIndex = 5;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button2->Location = System::Drawing::Point(188, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 62);
			this->button2->TabIndex = 6;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button3->Location = System::Drawing::Point(261, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 62);
			this->button3->TabIndex = 7;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button4->Location = System::Drawing::Point(407, 108);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 62);
			this->button4->TabIndex = 8;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button9->Location = System::Drawing::Point(158, 332);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 62);
			this->button9->TabIndex = 13;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button10->Location = System::Drawing::Point(158, 264);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 62);
			this->button10->TabIndex = 14;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button13->Location = System::Drawing::Point(158, 196);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 62);
			this->button13->TabIndex = 17;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button26->Location = System::Drawing::Point(252, 332);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(67, 62);
			this->button26->TabIndex = 23;
			this->button26->Text = L"7";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button25->Location = System::Drawing::Point(325, 332);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 62);
			this->button25->TabIndex = 24;
			this->button25->Text = L"8";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button24->Location = System::Drawing::Point(398, 332);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 62);
			this->button24->TabIndex = 25;
			this->button24->Text = L"9";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button23->Location = System::Drawing::Point(398, 264);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 62);
			this->button23->TabIndex = 26;
			this->button23->Text = L"6";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button22->Location = System::Drawing::Point(325, 264);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 62);
			this->button22->TabIndex = 27;
			this->button22->Text = L"5";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button21->Location = System::Drawing::Point(252, 264);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(67, 62);
			this->button21->TabIndex = 28;
			this->button21->Text = L"4";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button20->Location = System::Drawing::Point(398, 196);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 62);
			this->button20->TabIndex = 29;
			this->button20->Text = L"3";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button19->Location = System::Drawing::Point(325, 196);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 62);
			this->button19->TabIndex = 30;
			this->button19->Text = L"2";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button18->Location = System::Drawing::Point(252, 196);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 62);
			this->button18->TabIndex = 31;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(89, 10);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(71, 19);
			this->button28->TabIndex = 34;
			this->button28->Text = L"Notice Off";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(12, 10);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(71, 19);
			this->button29->TabIndex = 33;
			this->button29->Text = L"Notice On";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 470);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "+";
	double result = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text);
	label2->Text = "= " + System::Convert::ToString(result);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "-";
	double result = System::Convert::ToDouble(textBox1->Text) - System::Convert::ToDouble(textBox2->Text);
	label2->Text = "= " + System::Convert::ToString(result);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "x";
	double result = System::Convert::ToDouble(textBox1->Text) * System::Convert::ToDouble(textBox2->Text);
	label2->Text = "= " + System::Convert::ToString(result);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "/";
	double result = System::Convert::ToDouble(textBox1->Text) / System::Convert::ToDouble(textBox2->Text);
	label2->Text = "= " + System::Convert::ToString(result);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "1";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "2";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "3";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "4";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "5";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "9";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "0";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + ".";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "1";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "2";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "3";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "4";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "5";
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "6";
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "7";
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "8";
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "9";
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + "0";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = textBox2->Text + ".";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("You have been inactve for 100 seconds.\nAre you still there?", "Inactive", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
		Application::Exit();
	}
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = true;
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
}
};
}
