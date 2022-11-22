//#pragma once



namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для PaintForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void);


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ панельЭлементовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxToolbar;

	private: System::Windows::Forms::Button^ buttonActiveCircle;
	private: System::Windows::Forms::Button^ buttonActiveRhombus;

	private: System::Windows::Forms::Button^ buttonClearCanvas;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsRhombus;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRhombus1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateProject;
	private: System::Windows::Forms::Button^ buttonCreateNewProject;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightForm;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWigtnForm;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ ButtonActivateRectangle;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsRectangle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthRectangle;
	private: System::Windows::Forms::Button^ buttonActiveTriangle;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ListBox^ listBoxFigures;
	private: System::Windows::Forms::Button^ buttonColorChange;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsEllipse;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownEllipse2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownEllipse1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ buttonActiveEllipse;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::GroupBox^ groupBox2Triangle;

	private: System::Windows::Forms::Button^ buttonTwoObject;
private: System::Windows::Forms::Button^ buttonRaz;
	private: System::Windows::Forms::Button^ button1Pers;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightRectangle;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::ListBox^ listBox2Figures;
private: System::Windows::Forms::Button^ buttonAddFigure;
private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::Button^ buttonApplySize;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->панельЭлементовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxToolbar = (gcnew System::Windows::Forms::GroupBox());
			this->button1Pers = (gcnew System::Windows::Forms::Button());
			this->buttonRaz = (gcnew System::Windows::Forms::Button());
			this->buttonTwoObject = (gcnew System::Windows::Forms::Button());
			this->buttonActiveEllipse = (gcnew System::Windows::Forms::Button());
			this->buttonColorChange = (gcnew System::Windows::Forms::Button());
			this->buttonActiveTriangle = (gcnew System::Windows::Forms::Button());
			this->ButtonActivateRectangle = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonActiveCircle = (gcnew System::Windows::Forms::Button());
			this->buttonActiveRhombus = (gcnew System::Windows::Forms::Button());
			this->buttonApplySize = (gcnew System::Windows::Forms::Button());
			this->buttonClearCanvas = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddFigure = (gcnew System::Windows::Forms::Button());
			this->listBoxFigures = (gcnew System::Windows::Forms::ListBox());
			this->groupBoxSettingsRhombus = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownRhombus1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCreateProject = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreateNewProject = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWigtnForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBoxSettingsRectangle = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownHeightRectangle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthRectangle = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBoxSettingsEllipse = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownEllipse2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownEllipse1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2Triangle = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2Figures = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBoxSettingsRhombus->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRhombus1))->BeginInit();
			this->groupBoxSettingsCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
			this->groupBoxCreateProject->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWigtnForm))->BeginInit();
			this->groupBoxSettingsRectangle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightRectangle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthRectangle))->BeginInit();
			this->groupBoxSettingsEllipse->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipse2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipse1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox2Triangle->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1914, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьКакToolStripMenuItem,
					this->панельЭлементовToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как ";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// панельЭлементовToolStripMenuItem
			// 
			this->панельЭлементовToolStripMenuItem->Name = L"панельЭлементовToolStripMenuItem";
			this->панельЭлементовToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->панельЭлементовToolStripMenuItem->Text = L"Панель элементов";
			this->панельЭлементовToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::панельЭлементовToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::выходToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 28);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1914, 1005);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseMove);
			// 
			// groupBoxToolbar
			// 
			this->groupBoxToolbar->Controls->Add(this->button1Pers);
			this->groupBoxToolbar->Controls->Add(this->buttonRaz);
			this->groupBoxToolbar->Controls->Add(this->buttonTwoObject);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveEllipse);
			this->groupBoxToolbar->Controls->Add(this->buttonColorChange);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveTriangle);
			this->groupBoxToolbar->Controls->Add(this->ButtonActivateRectangle);
			this->groupBoxToolbar->Controls->Add(this->numericUpDownSize);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveCircle);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveRhombus);
			this->groupBoxToolbar->Controls->Add(this->buttonApplySize);
			this->groupBoxToolbar->Controls->Add(this->buttonClearCanvas);
			this->groupBoxToolbar->Controls->Add(this->label2);
			this->groupBoxToolbar->Controls->Add(this->label1);
			this->groupBoxToolbar->Location = System::Drawing::Point(0, 28);
			this->groupBoxToolbar->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxToolbar->Name = L"groupBoxToolbar";
			this->groupBoxToolbar->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxToolbar->Size = System::Drawing::Size(661, 138);
			this->groupBoxToolbar->TabIndex = 2;
			this->groupBoxToolbar->TabStop = false;
			this->groupBoxToolbar->Visible = false;
			// 
			// button1Pers
			// 
			this->button1Pers->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1Pers->Location = System::Drawing::Point(362, 11);
			this->button1Pers->Name = L"button1Pers";
			this->button1Pers->Size = System::Drawing::Size(151, 31);
			this->button1Pers->TabIndex = 16;
			this->button1Pers->Text = L"Пересечение";
			this->button1Pers->UseVisualStyleBackColor = true;
			this->button1Pers->Click += gcnew System::EventHandler(this, &PaintForm::button1Pers_Click);
			// 
			// buttonRaz
			// 
			this->buttonRaz->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->buttonRaz->Location = System::Drawing::Point(362, 105);
			this->buttonRaz->Name = L"buttonRaz";
			this->buttonRaz->Size = System::Drawing::Size(151, 31);
			this->buttonRaz->TabIndex = 15;
			this->buttonRaz->Text = L"Разность ";
			this->buttonRaz->UseVisualStyleBackColor = true;
			this->buttonRaz->Click += gcnew System::EventHandler(this, &PaintForm::buttonRaz_Click_1);
			// 
			// buttonTwoObject
			// 
			this->buttonTwoObject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->buttonTwoObject->Location = System::Drawing::Point(510, 107);
			this->buttonTwoObject->Name = L"buttonTwoObject";
			this->buttonTwoObject->Size = System::Drawing::Size(161, 31);
			this->buttonTwoObject->TabIndex = 14;
			this->buttonTwoObject->Text = L"Обьединить";
			this->buttonTwoObject->UseVisualStyleBackColor = true;
			this->buttonTwoObject->Click += gcnew System::EventHandler(this, &PaintForm::buttonTwoObject_Click);
			// 
			// buttonActiveEllipse
			// 
			this->buttonActiveEllipse->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveEllipse->Location = System::Drawing::Point(510, 8);
			this->buttonActiveEllipse->Margin = System::Windows::Forms::Padding(4);
			this->buttonActiveEllipse->Name = L"buttonActiveEllipse";
			this->buttonActiveEllipse->Size = System::Drawing::Size(148, 34);
			this->buttonActiveEllipse->TabIndex = 13;
			this->buttonActiveEllipse->Text = L"Эллипс";
			this->buttonActiveEllipse->UseVisualStyleBackColor = true;
			this->buttonActiveEllipse->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveEllipse_Click);
			// 
			// buttonColorChange
			// 
			this->buttonColorChange->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->buttonColorChange->Location = System::Drawing::Point(-3, 103);
			this->buttonColorChange->Name = L"buttonColorChange";
			this->buttonColorChange->Size = System::Drawing::Size(297, 35);
			this->buttonColorChange->TabIndex = 12;
			this->buttonColorChange->Text = L"Изменить цвет фигуры";
			this->buttonColorChange->UseVisualStyleBackColor = true;
			this->buttonColorChange->Click += gcnew System::EventHandler(this, &PaintForm::buttonColorChange_Click);
			// 
			// buttonActiveTriangle
			// 
			this->buttonActiveTriangle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->buttonActiveTriangle->Location = System::Drawing::Point(510, 71);
			this->buttonActiveTriangle->Name = L"buttonActiveTriangle";
			this->buttonActiveTriangle->Size = System::Drawing::Size(153, 37);
			this->buttonActiveTriangle->TabIndex = 11;
			this->buttonActiveTriangle->Text = L"Треугольник";
			this->buttonActiveTriangle->UseVisualStyleBackColor = true;
			this->buttonActiveTriangle->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveTriangle_Click);
			// 
			// ButtonActivateRectangle
			// 
			this->ButtonActivateRectangle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->ButtonActivateRectangle->Location = System::Drawing::Point(362, 40);
			this->ButtonActivateRectangle->Name = L"ButtonActivateRectangle";
			this->ButtonActivateRectangle->Size = System::Drawing::Size(151, 34);
			this->ButtonActivateRectangle->TabIndex = 10;
			this->ButtonActivateRectangle->Text = L"Прямоугольник";
			this->ButtonActivateRectangle->UseVisualStyleBackColor = true;
			this->ButtonActivateRectangle->Click += gcnew System::EventHandler(this, &PaintForm::ButtonActivateRectangle_Click);
			// 
			// numericUpDownSize
			// 
			this->numericUpDownSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownSize->Location = System::Drawing::Point(180, 73);
			this->numericUpDownSize->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSize->Name = L"numericUpDownSize";
			this->numericUpDownSize->Size = System::Drawing::Size(110, 30);
			this->numericUpDownSize->TabIndex = 9;
			this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// buttonActiveCircle
			// 
			this->buttonActiveCircle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveCircle->Location = System::Drawing::Point(362, 72);
			this->buttonActiveCircle->Margin = System::Windows::Forms::Padding(4);
			this->buttonActiveCircle->Name = L"buttonActiveCircle";
			this->buttonActiveCircle->Size = System::Drawing::Size(151, 36);
			this->buttonActiveCircle->TabIndex = 7;
			this->buttonActiveCircle->Text = L"Окружность";
			this->buttonActiveCircle->UseVisualStyleBackColor = true;
			this->buttonActiveCircle->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveCircle_Click);
			// 
			// buttonActiveRhombus
			// 
			this->buttonActiveRhombus->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveRhombus->Location = System::Drawing::Point(510, 40);
			this->buttonActiveRhombus->Margin = System::Windows::Forms::Padding(4);
			this->buttonActiveRhombus->Name = L"buttonActiveRhombus";
			this->buttonActiveRhombus->Size = System::Drawing::Size(153, 34);
			this->buttonActiveRhombus->TabIndex = 6;
			this->buttonActiveRhombus->Text = L"Ромб";
			this->buttonActiveRhombus->UseVisualStyleBackColor = true;
			this->buttonActiveRhombus->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveRhombus_Click);
			// 
			// buttonApplySize
			// 
			this->buttonApplySize->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplySize->Location = System::Drawing::Point(-3, 71);
			this->buttonApplySize->Margin = System::Windows::Forms::Padding(4);
			this->buttonApplySize->Name = L"buttonApplySize";
			this->buttonApplySize->Size = System::Drawing::Size(188, 36);
			this->buttonApplySize->TabIndex = 4;
			this->buttonApplySize->Text = L"Применить размер";
			this->buttonApplySize->UseVisualStyleBackColor = true;
			this->buttonApplySize->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplySize_Click);
			// 
			// buttonClearCanvas
			// 
			this->buttonClearCanvas->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonClearCanvas->Location = System::Drawing::Point(0, 40);
			this->buttonClearCanvas->Margin = System::Windows::Forms::Padding(4);
			this->buttonClearCanvas->Name = L"buttonClearCanvas";
			this->buttonClearCanvas->Size = System::Drawing::Size(290, 36);
			this->buttonClearCanvas->TabIndex = 3;
			this->buttonClearCanvas->Text = L"Очистить холст";
			this->buttonClearCanvas->UseVisualStyleBackColor = true;
			this->buttonClearCanvas->Click += gcnew System::EventHandler(this, &PaintForm::buttonClearCanvas_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(248, 3);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фигуры:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 3);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Параметры кисти";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonAddFigure);
			this->groupBox1->Controls->Add(this->listBoxFigures);
			this->groupBox1->Location = System::Drawing::Point(710, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(371, 139);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фигуры";
			this->groupBox1->Visible = false;
			// 
			// buttonAddFigure
			// 
			this->buttonAddFigure->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->buttonAddFigure->Location = System::Drawing::Point(-1, 103);
			this->buttonAddFigure->Name = L"buttonAddFigure";
			this->buttonAddFigure->Size = System::Drawing::Size(372, 35);
			this->buttonAddFigure->TabIndex = 17;
			this->buttonAddFigure->Text = L"Добавить Фигуру Для Действия";
			this->buttonAddFigure->UseVisualStyleBackColor = true;
			this->buttonAddFigure->Click += gcnew System::EventHandler(this, &PaintForm::buttonAddFigure_Click);
			// 
			// listBoxFigures
			// 
			this->listBoxFigures->DisplayMember = L"figureName";
			this->listBoxFigures->FormattingEnabled = true;
			this->listBoxFigures->ItemHeight = 16;
			this->listBoxFigures->Location = System::Drawing::Point(-1, 22);
			this->listBoxFigures->Name = L"listBoxFigures";
			this->listBoxFigures->Size = System::Drawing::Size(372, 84);
			this->listBoxFigures->TabIndex = 0;
			this->listBoxFigures->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::listBoxFigures_MouseClick);
			// 
			// groupBoxSettingsRhombus
			// 
			this->groupBoxSettingsRhombus->Controls->Add(this->numericUpDownRhombus1);
			this->groupBoxSettingsRhombus->Controls->Add(this->label3);
			this->groupBoxSettingsRhombus->Location = System::Drawing::Point(1494, 28);
			this->groupBoxSettingsRhombus->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsRhombus->Name = L"groupBoxSettingsRhombus";
			this->groupBoxSettingsRhombus->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsRhombus->Size = System::Drawing::Size(267, 90);
			this->groupBoxSettingsRhombus->TabIndex = 3;
			this->groupBoxSettingsRhombus->TabStop = false;
			this->groupBoxSettingsRhombus->Text = L"Настройка Ромба";
			this->groupBoxSettingsRhombus->Visible = false;
			// 
			// numericUpDownRhombus1
			// 
			this->numericUpDownRhombus1->Location = System::Drawing::Point(0, 60);
			this->numericUpDownRhombus1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownRhombus1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownRhombus1->Name = L"numericUpDownRhombus1";
			this->numericUpDownRhombus1->Size = System::Drawing::Size(273, 22);
			this->numericUpDownRhombus1->TabIndex = 2;
			this->numericUpDownRhombus1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 26);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Длинна диагонали";
			// 
			// groupBoxSettingsCircle
			// 
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->label6);
			this->groupBoxSettingsCircle->Location = System::Drawing::Point(859, 228);
			this->groupBoxSettingsCircle->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsCircle->Name = L"groupBoxSettingsCircle";
			this->groupBoxSettingsCircle->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsCircle->Size = System::Drawing::Size(243, 87);
			this->groupBoxSettingsCircle->TabIndex = 5;
			this->groupBoxSettingsCircle->TabStop = false;
			this->groupBoxSettingsCircle->Text = L"Настройка окружности";
			this->groupBoxSettingsCircle->Visible = false;
			// 
			// numericUpDownWidthCircle
			// 
			this->numericUpDownWidthCircle->Location = System::Drawing::Point(8, 54);
			this->numericUpDownWidthCircle->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
			this->numericUpDownWidthCircle->Size = System::Drawing::Size(99, 22);
			this->numericUpDownWidthCircle->TabIndex = 2;
			this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(4, 26);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 24);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Диаметр";
			// 
			// groupBoxCreateProject
			// 
			this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownHeightForm);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownWigtnForm);
			this->groupBoxCreateProject->Controls->Add(this->label9);
			this->groupBoxCreateProject->Controls->Add(this->label10);
			this->groupBoxCreateProject->Location = System::Drawing::Point(357, 212);
			this->groupBoxCreateProject->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
			this->groupBoxCreateProject->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxCreateProject->Size = System::Drawing::Size(449, 82);
			this->groupBoxCreateProject->TabIndex = 5;
			this->groupBoxCreateProject->TabStop = false;
			this->groupBoxCreateProject->Text = L"Создать проект";
			// 
			// buttonCreateNewProject
			// 
			this->buttonCreateNewProject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonCreateNewProject->Location = System::Drawing::Point(8, 33);
			this->buttonCreateNewProject->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreateNewProject->Name = L"buttonCreateNewProject";
			this->buttonCreateNewProject->Size = System::Drawing::Size(168, 43);
			this->buttonCreateNewProject->TabIndex = 4;
			this->buttonCreateNewProject->Text = L"Создать";
			this->buttonCreateNewProject->UseVisualStyleBackColor = true;
			this->buttonCreateNewProject->Click += gcnew System::EventHandler(this, &PaintForm::buttonCreateNewProject_Click);
			// 
			// numericUpDownHeightForm
			// 
			this->numericUpDownHeightForm->Location = System::Drawing::Point(333, 34);
			this->numericUpDownHeightForm->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownHeightForm->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1080, 0, 0, 0 });
			this->numericUpDownHeightForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightForm->Name = L"numericUpDownHeightForm";
			this->numericUpDownHeightForm->Size = System::Drawing::Size(99, 22);
			this->numericUpDownHeightForm->TabIndex = 3;
			this->numericUpDownHeightForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1080, 0, 0, 0 });
			// 
			// numericUpDownWigtnForm
			// 
			this->numericUpDownWigtnForm->Location = System::Drawing::Point(205, 36);
			this->numericUpDownWigtnForm->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownWigtnForm->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1920, 0, 0, 0 });
			this->numericUpDownWigtnForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWigtnForm->Name = L"numericUpDownWigtnForm";
			this->numericUpDownWigtnForm->Size = System::Drawing::Size(99, 22);
			this->numericUpDownWigtnForm->TabIndex = 2;
			this->numericUpDownWigtnForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1920, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(329, 10);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 24);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Высота";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(205, 10);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 24);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Ширина";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBoxSettingsRectangle
			// 
			this->groupBoxSettingsRectangle->Controls->Add(this->label8);
			this->groupBoxSettingsRectangle->Controls->Add(this->label7);
			this->groupBoxSettingsRectangle->Controls->Add(this->numericUpDownHeightRectangle);
			this->groupBoxSettingsRectangle->Controls->Add(this->numericUpDownWidthRectangle);
			this->groupBoxSettingsRectangle->Location = System::Drawing::Point(30, 354);
			this->groupBoxSettingsRectangle->Name = L"groupBoxSettingsRectangle";
			this->groupBoxSettingsRectangle->Size = System::Drawing::Size(253, 77);
			this->groupBoxSettingsRectangle->TabIndex = 6;
			this->groupBoxSettingsRectangle->TabStop = false;
			this->groupBoxSettingsRectangle->Text = L"Настройки прямоугольника";
			this->groupBoxSettingsRectangle->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(142, 18);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Высота";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(7, 18);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 24);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Ширина";
			// 
			// numericUpDownHeightRectangle
			// 
			this->numericUpDownHeightRectangle->Location = System::Drawing::Point(127, 49);
			this->numericUpDownHeightRectangle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightRectangle->Name = L"numericUpDownHeightRectangle";
			this->numericUpDownHeightRectangle->Size = System::Drawing::Size(120, 22);
			this->numericUpDownHeightRectangle->TabIndex = 1;
			this->numericUpDownHeightRectangle->Tag = L"";
			this->numericUpDownHeightRectangle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// numericUpDownWidthRectangle
			// 
			this->numericUpDownWidthRectangle->Location = System::Drawing::Point(6, 49);
			this->numericUpDownWidthRectangle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthRectangle->Name = L"numericUpDownWidthRectangle";
			this->numericUpDownWidthRectangle->Size = System::Drawing::Size(120, 22);
			this->numericUpDownWidthRectangle->TabIndex = 0;
			this->numericUpDownWidthRectangle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// groupBoxSettingsEllipse
			// 
			this->groupBoxSettingsEllipse->Controls->Add(this->numericUpDownEllipse2);
			this->groupBoxSettingsEllipse->Controls->Add(this->numericUpDownEllipse1);
			this->groupBoxSettingsEllipse->Controls->Add(this->label4);
			this->groupBoxSettingsEllipse->Controls->Add(this->label12);
			this->groupBoxSettingsEllipse->Location = System::Drawing::Point(566, 466);
			this->groupBoxSettingsEllipse->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsEllipse->Name = L"groupBoxSettingsEllipse";
			this->groupBoxSettingsEllipse->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSettingsEllipse->Size = System::Drawing::Size(243, 87);
			this->groupBoxSettingsEllipse->TabIndex = 8;
			this->groupBoxSettingsEllipse->TabStop = false;
			this->groupBoxSettingsEllipse->Text = L"Настройка Эллипса";
			this->groupBoxSettingsEllipse->Visible = false;
			// 
			// numericUpDownEllipse2
			// 
			this->numericUpDownEllipse2->Location = System::Drawing::Point(136, 53);
			this->numericUpDownEllipse2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownEllipse2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEllipse2->Name = L"numericUpDownEllipse2";
			this->numericUpDownEllipse2->Size = System::Drawing::Size(99, 22);
			this->numericUpDownEllipse2->TabIndex = 3;
			this->numericUpDownEllipse2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// numericUpDownEllipse1
			// 
			this->numericUpDownEllipse1->Location = System::Drawing::Point(12, 53);
			this->numericUpDownEllipse1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownEllipse1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEllipse1->Name = L"numericUpDownEllipse1";
			this->numericUpDownEllipse1->Size = System::Drawing::Size(99, 22);
			this->numericUpDownEllipse1->TabIndex = 2;
			this->numericUpDownEllipse1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(132, 28);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Высота";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(8, 28);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 24);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ширина";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(8, 26);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 24);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Длинна стороны";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(8, 54);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(99, 22);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// groupBox2Triangle
			// 
			this->groupBox2Triangle->Controls->Add(this->numericUpDown2);
			this->groupBox2Triangle->Controls->Add(this->label5);
			this->groupBox2Triangle->Location = System::Drawing::Point(107, 494);
			this->groupBox2Triangle->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2Triangle->Name = L"groupBox2Triangle";
			this->groupBox2Triangle->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2Triangle->Size = System::Drawing::Size(267, 90);
			this->groupBox2Triangle->TabIndex = 10;
			this->groupBox2Triangle->TabStop = false;
			this->groupBox2Triangle->Text = L"Настройка треугольника";
			this->groupBox2Triangle->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->listBox2Figures);
			this->groupBox2->Location = System::Drawing::Point(1089, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(400, 139);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Фигуры";
			this->groupBox2->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(-1, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(401, 36);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Отменить Выбор фигуры для действия";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaintForm::button1_Click);
			// 
			// listBox2Figures
			// 
			this->listBox2Figures->DisplayMember = L"figureName";
			this->listBox2Figures->FormattingEnabled = true;
			this->listBox2Figures->ItemHeight = 16;
			this->listBox2Figures->Location = System::Drawing::Point(-1, 22);
			this->listBox2Figures->Name = L"listBox2Figures";
			this->listBox2Figures->Size = System::Drawing::Size(399, 84);
			this->listBox2Figures->TabIndex = 0;
			this->listBox2Figures->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::listBox2Figures_MouseClick);
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1914, 1033);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox2Triangle);
			this->Controls->Add(this->groupBoxSettingsRhombus);
			this->Controls->Add(this->groupBoxSettingsEllipse);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxSettingsRectangle);
			this->Controls->Add(this->groupBoxCreateProject);
			this->Controls->Add(this->groupBoxSettingsCircle);
			this->Controls->Add(this->groupBoxToolbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PaintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Load += gcnew System::EventHandler(this, &PaintForm::PaintForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PaintForm::PaintForm_KeyDown);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxToolbar->ResumeLayout(false);
			this->groupBoxToolbar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBoxSettingsRhombus->ResumeLayout(false);
			this->groupBoxSettingsRhombus->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRhombus1))->EndInit();
			this->groupBoxSettingsCircle->ResumeLayout(false);
			this->groupBoxSettingsCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
			this->groupBoxCreateProject->ResumeLayout(false);
			this->groupBoxCreateProject->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWigtnForm))->EndInit();
			this->groupBoxSettingsRectangle->ResumeLayout(false);
			this->groupBoxSettingsRectangle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightRectangle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthRectangle))->EndInit();
			this->groupBoxSettingsEllipse->ResumeLayout(false);
			this->groupBoxSettingsEllipse->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipse2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipse1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox2Triangle->ResumeLayout(false);
			this->groupBox2Triangle->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		Graphics^ canvas;//полотно
		//List <Point>^ points;//точки по котрым рисуем линию//перо
		Pen^ pen;
	
		Color color;
		float size;
		String^ filename;
		int statePen = 0;
		Brush^ myBrush;
	

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void PaintForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void панельЭлементовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveRhombus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonActivateRectangle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveTriangle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PaintForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
    private:  void RedrawShapes();
	private: System::Void buttonColorChange_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveEllipse_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonTwoObject_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBoxFigures_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void button1Pers_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRaz_Click_1(System::Object^ sender, System::EventArgs^ e);
    private: System::Void buttonAddFigure_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox2Figures_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);



};
}
