#pragma once
#include<string>

namespace CalculatorCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonDigit0;
	private: System::Windows::Forms::Button^  buttonDigit8;
	private: System::Windows::Forms::Button^  buttonDigit7;
	private: System::Windows::Forms::Button^  buttonDigit6;
	private: System::Windows::Forms::Button^  buttonDigit5;
	private: System::Windows::Forms::Button^  buttonDigit4;
	private: System::Windows::Forms::Button^  buttonDigit3;
	private: System::Windows::Forms::Button^  buttonDigit1;
	private: System::Windows::Forms::Button^  buttonDigit2;
	private: System::Windows::Forms::Button^  buttonDigit9;
	private: System::Windows::Forms::Button^  buttonDot;
	private: System::Windows::Forms::Button^  buttonNegative;
	private: System::Windows::Forms::Button^  buttonMul;
	private: System::Windows::Forms::Button^  buttonSub;
	private: System::Windows::Forms::Button^  buttonSum;
	private: System::Windows::Forms::Button^  buttonResult;
	private: System::Windows::Forms::Button^  buttonDiv;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnClean;
	private: System::Windows::Forms::Button^  btnCleanEntry;
	private: System::Windows::Forms::Label^  lblShow;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Button^  btnDivX;
	private: System::Windows::Forms::Button^  btnSquaring;
	private: System::Windows::Forms::Button^  btnCube;
	private: System::Windows::Forms::Button^  btnSqrt;
	private: System::Windows::Forms::ListBox^  listBoxJournal;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  btnMemorySave;
	private: System::Windows::Forms::Button^  btnMemorySub;
	private: System::Windows::Forms::Button^  btnMemoryAdd;
	private: System::Windows::Forms::Button^  btnMemory;
	private: System::Windows::Forms::Button^  btnMemoryClear;







	private: System::Windows::Forms::ListBox^  listBoxMemory;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonDigit0 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit8 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit7 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit6 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit5 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit4 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit3 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit1 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit2 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit9 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonNegative = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnClean = (gcnew System::Windows::Forms::Button());
			this->btnCleanEntry = (gcnew System::Windows::Forms::Button());
			this->lblShow = (gcnew System::Windows::Forms::Label());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnDivX = (gcnew System::Windows::Forms::Button());
			this->btnSquaring = (gcnew System::Windows::Forms::Button());
			this->btnCube = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->listBoxJournal = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBoxMemory = (gcnew System::Windows::Forms::ListBox());
			this->btnMemorySave = (gcnew System::Windows::Forms::Button());
			this->btnMemorySub = (gcnew System::Windows::Forms::Button());
			this->btnMemoryAdd = (gcnew System::Windows::Forms::Button());
			this->btnMemory = (gcnew System::Windows::Forms::Button());
			this->btnMemoryClear = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonDigit0
			// 
			this->buttonDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit0->Location = System::Drawing::Point(112, 254);
			this->buttonDigit0->Name = L"buttonDigit0";
			this->buttonDigit0->Size = System::Drawing::Size(45, 35);
			this->buttonDigit0->TabIndex = 0;
			this->buttonDigit0->Text = L"0";
			this->buttonDigit0->UseVisualStyleBackColor = true;
			this->buttonDigit0->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit8
			// 
			this->buttonDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit8->Location = System::Drawing::Point(112, 131);
			this->buttonDigit8->Name = L"buttonDigit8";
			this->buttonDigit8->Size = System::Drawing::Size(45, 35);
			this->buttonDigit8->TabIndex = 1;
			this->buttonDigit8->Text = L"8";
			this->buttonDigit8->UseVisualStyleBackColor = true;
			this->buttonDigit8->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit7
			// 
			this->buttonDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit7->Location = System::Drawing::Point(61, 131);
			this->buttonDigit7->Name = L"buttonDigit7";
			this->buttonDigit7->Size = System::Drawing::Size(45, 35);
			this->buttonDigit7->TabIndex = 2;
			this->buttonDigit7->Text = L"7";
			this->buttonDigit7->UseVisualStyleBackColor = true;
			this->buttonDigit7->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit6
			// 
			this->buttonDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit6->Location = System::Drawing::Point(163, 172);
			this->buttonDigit6->Name = L"buttonDigit6";
			this->buttonDigit6->Size = System::Drawing::Size(45, 35);
			this->buttonDigit6->TabIndex = 3;
			this->buttonDigit6->Text = L"6";
			this->buttonDigit6->UseVisualStyleBackColor = true;
			this->buttonDigit6->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit5
			// 
			this->buttonDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit5->Location = System::Drawing::Point(112, 172);
			this->buttonDigit5->Name = L"buttonDigit5";
			this->buttonDigit5->Size = System::Drawing::Size(45, 35);
			this->buttonDigit5->TabIndex = 4;
			this->buttonDigit5->Text = L"5";
			this->buttonDigit5->UseVisualStyleBackColor = true;
			this->buttonDigit5->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit4
			// 
			this->buttonDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit4->Location = System::Drawing::Point(61, 172);
			this->buttonDigit4->Name = L"buttonDigit4";
			this->buttonDigit4->Size = System::Drawing::Size(45, 35);
			this->buttonDigit4->TabIndex = 5;
			this->buttonDigit4->Text = L"4";
			this->buttonDigit4->UseVisualStyleBackColor = true;
			this->buttonDigit4->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit3
			// 
			this->buttonDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit3->Location = System::Drawing::Point(163, 213);
			this->buttonDigit3->Name = L"buttonDigit3";
			this->buttonDigit3->Size = System::Drawing::Size(45, 35);
			this->buttonDigit3->TabIndex = 6;
			this->buttonDigit3->Text = L"3";
			this->buttonDigit3->UseVisualStyleBackColor = true;
			this->buttonDigit3->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit1
			// 
			this->buttonDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit1->Location = System::Drawing::Point(61, 213);
			this->buttonDigit1->Name = L"buttonDigit1";
			this->buttonDigit1->Size = System::Drawing::Size(45, 35);
			this->buttonDigit1->TabIndex = 7;
			this->buttonDigit1->Text = L"1";
			this->buttonDigit1->UseVisualStyleBackColor = true;
			this->buttonDigit1->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit2
			// 
			this->buttonDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit2->Location = System::Drawing::Point(112, 213);
			this->buttonDigit2->Name = L"buttonDigit2";
			this->buttonDigit2->Size = System::Drawing::Size(45, 35);
			this->buttonDigit2->TabIndex = 8;
			this->buttonDigit2->Text = L"2";
			this->buttonDigit2->UseVisualStyleBackColor = true;
			this->buttonDigit2->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit9
			// 
			this->buttonDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit9->Location = System::Drawing::Point(163, 131);
			this->buttonDigit9->Name = L"buttonDigit9";
			this->buttonDigit9->Size = System::Drawing::Size(45, 35);
			this->buttonDigit9->TabIndex = 9;
			this->buttonDigit9->Text = L"9";
			this->buttonDigit9->UseVisualStyleBackColor = true;
			this->buttonDigit9->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDot->Location = System::Drawing::Point(163, 254);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(45, 35);
			this->buttonDot->TabIndex = 10;
			this->buttonDot->Text = L",";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &Calc::buttonDot_Click);
			// 
			// buttonNegative
			// 
			this->buttonNegative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNegative->Location = System::Drawing::Point(61, 254);
			this->buttonNegative->Name = L"buttonNegative";
			this->buttonNegative->Size = System::Drawing::Size(45, 35);
			this->buttonNegative->TabIndex = 11;
			this->buttonNegative->Text = L"+/-";
			this->buttonNegative->UseVisualStyleBackColor = true;
			this->buttonNegative->Click += gcnew System::EventHandler(this, &Calc::buttonNegative_Click);
			// 
			// buttonMul
			// 
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMul->Location = System::Drawing::Point(214, 131);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Size = System::Drawing::Size(45, 35);
			this->buttonMul->TabIndex = 12;
			this->buttonMul->Text = L"*";
			this->buttonMul->UseVisualStyleBackColor = true;
			this->buttonMul->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSub->Location = System::Drawing::Point(214, 172);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(45, 35);
			this->buttonSub->TabIndex = 13;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonSum
			// 
			this->buttonSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSum->Location = System::Drawing::Point(214, 213);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(45, 35);
			this->buttonSum->TabIndex = 14;
			this->buttonSum->Text = L"+";
			this->buttonSum->UseVisualStyleBackColor = true;
			this->buttonSum->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonResult
			// 
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonResult->Location = System::Drawing::Point(214, 254);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(45, 35);
			this->buttonResult->TabIndex = 15;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = true;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Calc::buttonResult_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDiv->Location = System::Drawing::Point(214, 90);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(45, 35);
			this->buttonDiv->TabIndex = 16;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(60, 21);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(198, 22);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClean
			// 
			this->btnClean->Location = System::Drawing::Point(112, 90);
			this->btnClean->Name = L"btnClean";
			this->btnClean->Size = System::Drawing::Size(45, 35);
			this->btnClean->TabIndex = 18;
			this->btnClean->Text = L"C";
			this->btnClean->UseVisualStyleBackColor = true;
			this->btnClean->Click += gcnew System::EventHandler(this, &Calc::btnClean_Click);
			// 
			// btnCleanEntry
			// 
			this->btnCleanEntry->Location = System::Drawing::Point(61, 90);
			this->btnCleanEntry->Name = L"btnCleanEntry";
			this->btnCleanEntry->Size = System::Drawing::Size(45, 35);
			this->btnCleanEntry->TabIndex = 19;
			this->btnCleanEntry->Text = L"CE";
			this->btnCleanEntry->UseVisualStyleBackColor = true;
			this->btnCleanEntry->Click += gcnew System::EventHandler(this, &Calc::btnCleanEntry_Click);
			// 
			// lblShow
			// 
			this->lblShow->AutoSize = true;
			this->lblShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblShow->Location = System::Drawing::Point(61, 25);
			this->lblShow->Name = L"lblShow";
			this->lblShow->Size = System::Drawing::Size(20, 12);
			this->lblShow->TabIndex = 20;
			this->lblShow->Text = L"123";
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(163, 90);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(45, 35);
			this->btnBackspace->TabIndex = 21;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &Calc::btnBackspace_Click);
			// 
			// btnDivX
			// 
			this->btnDivX->Location = System::Drawing::Point(10, 254);
			this->btnDivX->Name = L"btnDivX";
			this->btnDivX->Size = System::Drawing::Size(45, 35);
			this->btnDivX->TabIndex = 22;
			this->btnDivX->Text = L"1/x";
			this->btnDivX->UseVisualStyleBackColor = true;
			this->btnDivX->Click += gcnew System::EventHandler(this, &Calc::btnDivX_Click);
			// 
			// btnSquaring
			// 
			this->btnSquaring->Location = System::Drawing::Point(10, 213);
			this->btnSquaring->Name = L"btnSquaring";
			this->btnSquaring->Size = System::Drawing::Size(45, 35);
			this->btnSquaring->TabIndex = 23;
			this->btnSquaring->Text = L"x^2";
			this->btnSquaring->UseVisualStyleBackColor = true;
			this->btnSquaring->Click += gcnew System::EventHandler(this, &Calc::btnSquaring_Click);
			// 
			// btnCube
			// 
			this->btnCube->Location = System::Drawing::Point(10, 172);
			this->btnCube->Name = L"btnCube";
			this->btnCube->Size = System::Drawing::Size(45, 35);
			this->btnCube->TabIndex = 24;
			this->btnCube->Text = L"x^3";
			this->btnCube->UseVisualStyleBackColor = true;
			this->btnCube->Click += gcnew System::EventHandler(this, &Calc::btnCube_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(10, 131);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(45, 35);
			this->btnSqrt->TabIndex = 25;
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &Calc::btnSqrt_Click);
			// 
			// listBoxJournal
			// 
			this->listBoxJournal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBoxJournal->FormattingEnabled = true;
			this->listBoxJournal->Location = System::Drawing::Point(-1, -1);
			this->listBoxJournal->Name = L"listBoxJournal";
			this->listBoxJournal->Size = System::Drawing::Size(185, 247);
			this->listBoxJournal->TabIndex = 26;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(265, 21);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(191, 268);
			this->tabControl1->TabIndex = 27;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBoxJournal);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(183, 242);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Journal";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBoxMemory);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(183, 242);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Memory";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBoxMemory
			// 
			this->listBoxMemory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBoxMemory->FormattingEnabled = true;
			this->listBoxMemory->Location = System::Drawing::Point(-1, -2);
			this->listBoxMemory->Name = L"listBoxMemory";
			this->listBoxMemory->Size = System::Drawing::Size(185, 247);
			this->listBoxMemory->TabIndex = 27;
			// 
			// btnMemorySave
			// 
			this->btnMemorySave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemorySave->Location = System::Drawing::Point(214, 49);
			this->btnMemorySave->Name = L"btnMemorySave";
			this->btnMemorySave->Size = System::Drawing::Size(45, 35);
			this->btnMemorySave->TabIndex = 28;
			this->btnMemorySave->Text = L"MS";
			this->btnMemorySave->UseVisualStyleBackColor = true;
			this->btnMemorySave->Click += gcnew System::EventHandler(this, &Calc::btnMemorySave_Click);
			// 
			// btnMemorySub
			// 
			this->btnMemorySub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemorySub->Location = System::Drawing::Point(163, 49);
			this->btnMemorySub->Name = L"btnMemorySub";
			this->btnMemorySub->Size = System::Drawing::Size(45, 35);
			this->btnMemorySub->TabIndex = 29;
			this->btnMemorySub->Text = L"M-";
			this->btnMemorySub->UseVisualStyleBackColor = true;
			this->btnMemorySub->Click += gcnew System::EventHandler(this, &Calc::btnMemorySub_Click);
			// 
			// btnMemoryAdd
			// 
			this->btnMemoryAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemoryAdd->Location = System::Drawing::Point(112, 49);
			this->btnMemoryAdd->Name = L"btnMemoryAdd";
			this->btnMemoryAdd->Size = System::Drawing::Size(45, 35);
			this->btnMemoryAdd->TabIndex = 30;
			this->btnMemoryAdd->Text = L"M+";
			this->btnMemoryAdd->UseVisualStyleBackColor = true;
			this->btnMemoryAdd->Click += gcnew System::EventHandler(this, &Calc::btnMemoryAdd_Click);
			// 
			// btnMemory
			// 
			this->btnMemory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemory->Location = System::Drawing::Point(61, 49);
			this->btnMemory->Name = L"btnMemory";
			this->btnMemory->Size = System::Drawing::Size(45, 35);
			this->btnMemory->TabIndex = 31;
			this->btnMemory->Text = L"MR";
			this->btnMemory->UseVisualStyleBackColor = true;
			this->btnMemory->Click += gcnew System::EventHandler(this, &Calc::btnMemory_Click);
			// 
			// btnMemoryClear
			// 
			this->btnMemoryClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemoryClear->Location = System::Drawing::Point(10, 90);
			this->btnMemoryClear->Name = L"btnMemoryClear";
			this->btnMemoryClear->Size = System::Drawing::Size(45, 35);
			this->btnMemoryClear->TabIndex = 32;
			this->btnMemoryClear->Text = L"MC";
			this->btnMemoryClear->UseVisualStyleBackColor = true;
			this->btnMemoryClear->Click += gcnew System::EventHandler(this, &Calc::btnMemoryClear_Click);
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 302);
			this->Controls->Add(this->btnMemoryClear);
			this->Controls->Add(this->btnMemory);
			this->Controls->Add(this->btnMemoryAdd);
			this->Controls->Add(this->btnMemorySub);
			this->Controls->Add(this->btnMemorySave);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnCube);
			this->Controls->Add(this->btnSquaring);
			this->Controls->Add(this->btnDivX);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->lblShow);
			this->Controls->Add(this->btnCleanEntry);
			this->Controls->Add(this->btnClean);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->buttonMul);
			this->Controls->Add(this->buttonNegative);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->buttonDigit9);
			this->Controls->Add(this->buttonDigit2);
			this->Controls->Add(this->buttonDigit1);
			this->Controls->Add(this->buttonDigit3);
			this->Controls->Add(this->buttonDigit4);
			this->Controls->Add(this->buttonDigit5);
			this->Controls->Add(this->buttonDigit6);
			this->Controls->Add(this->buttonDigit7);
			this->Controls->Add(this->buttonDigit8);
			this->Controls->Add(this->buttonDigit0);
			this->Name = L"Calc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Calc::Calc_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstNum;
		double secondNum;
		double result;
		double memory = 0;
		String^ arithOp;
		bool isResult = false;
		bool flag = false;

	private: System::Void Calc_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		lblShow->Text = "";
	}

	private: System::Void buttonDigit(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ numbers = safe_cast<Button^>(sender);
		if (!isResult) 
		{
			if (textBox1->Text == "0")
			{
				textBox1->Text = numbers->Text;
			}
			else
			{
				textBox1->Text += numbers->Text;
			}
		}
		else
		{
			lblShow->Text = "";
			textBox1->Text = numbers->Text;
			isResult = false;
		}
	}
	
	private: System::Void ArithmeticOp(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ op = safe_cast<Button^>(sender);
		firstNum = Double::Parse(textBox1->Text);
		lblShow->Text = textBox1->Text + op->Text;
		arithOp = op->Text;
		isResult = true;
	}

	private: System::Void buttonDot_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!textBox1->Text->Contains(","))
		{
			textBox1->Text += ",";
		}
	}

	private: System::Void buttonNegative_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!textBox1->Text->Contains("-"))
		{
			textBox1->Text = "-" + textBox1->Text;
		}
		else
		{
			textBox1->Text = textBox1 -> Text -> Remove(0,1);
		}
	}

	private: System::Void buttonResult_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if(!isResult)
			secondNum = Double::Parse(textBox1->Text);
		if (arithOp == "+")
		{
			result = firstNum + secondNum;
			textBox1->Text = System::Convert::ToString(result);
			lblShow->Text = "";
			listBoxJournal->Items->Add(firstNum + " + " + secondNum + " = " + result);
			firstNum = result;
			isResult = true;
		}
		else if(arithOp == "-")
		{
			result = firstNum - secondNum;
			textBox1->Text = System::Convert::ToString(result);
			lblShow->Text = "";
			listBoxJournal->Items->Add(firstNum + " - " + secondNum + " = " + result);
			firstNum = result;
			isResult = true;
		}
		else if (arithOp == "*")
		{
			result = firstNum * secondNum;
			textBox1->Text = System::Convert::ToString(result);
			lblShow->Text = "";
			listBoxJournal->Items->Add(firstNum + " * " + secondNum + " = " + result);
			firstNum = result;
			isResult = true;
		}
		else if(arithOp == "/")
		{
			if (textBox1->Text == "0")
			{
				MessageBox::Show("Деление на ноль!!!");
			}
			else
			{
				result = firstNum / secondNum;
				textBox1->Text = System::Convert::ToString(result);
				listBoxJournal->Items->Add(firstNum + "/" + secondNum + " = " + result);
				lblShow->Text = "";
				firstNum = result;
				isResult = true;
			}
		}
	}

	private: System::Void btnClean_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox1->Text = "0";
		firstNum = 0;
		secondNum = 0;
		arithOp = "";
		lblShow->Text = "";
		isResult = false;
	}

	private: System::Void btnCleanEntry_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox1->Text = "0";
	}

	private: System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text->Length > 1)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
		else
		{
			textBox1->Text = "0";
		}
	}

	private: System::Void btnSqrt_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (!textBox1->Text->Contains("-"))
		{
			firstNum = Double::Parse(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sqrt(firstNum));
			listBoxJournal->Items->Add("sqr" + "(" + firstNum + ")" + " = " + textBox1->Text);
			lblShow->Text = "sqrt" + "(" + firstNum + ")";
			isResult = true;
		}
		else
		{
			MessageBox::Show("Не корректные данные!!!");
		}
	}

	private: System::Void btnSquaring_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		firstNum = Double::Parse(textBox1->Text);
		textBox1->Text = System::Convert::ToString(pow(firstNum, 2));
		listBoxJournal->Items->Add("sqr" + "(" + firstNum + ")" + " = " + textBox1->Text);
		lblShow->Text = "sqr" + "(" + firstNum + ")";
		isResult = true;
	}

	private: System::Void btnCube_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		firstNum = Double::Parse(textBox1->Text);
		textBox1->Text = System::Convert::ToString(pow(firstNum, 3));
		listBoxJournal->Items->Add("cube" + "(" + firstNum + ")" + " = " + textBox1->Text);
		lblShow->Text = "cube" + "(" + firstNum + ")";
		isResult = true;
	}

	private: System::Void btnDivX_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text == "0")
		{
			MessageBox::Show("Деление на ноль!!!");
		}
		else
		{
			firstNum = Double::Parse(textBox1->Text);
			textBox1->Text = System::Convert::ToString(1 / firstNum);
			listBoxJournal->Items->Add("1/" + firstNum + " = " + textBox1->Text);
			lblShow->Text = "1/" + firstNum;
			isResult = true;
		}
	}
	private: System::Void btnMemorySave_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		memory = Double::Parse(textBox1->Text);
		listBoxMemory->Items->Add(memory);
		isResult = true;
	}
	private: System::Void btnMemoryAdd_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		memory += Double::Parse(textBox1->Text);
		listBoxMemory->Items->Add(memory);
		isResult = true;
	}
	private: System::Void btnMemory_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox1->Text = System::Convert::ToString(memory);
		isResult = true;
	}
	private: System::Void btnMemoryClear_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		memory = 0;
		listBoxMemory->Items->Clear();
	}
	private: System::Void btnMemorySub_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		memory -= Double::Parse(textBox1->Text);
		listBoxMemory->Items->Add(memory);
		isResult = true;
	}
};
}
