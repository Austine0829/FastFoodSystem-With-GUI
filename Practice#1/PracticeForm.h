#pragma once

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PracticeForm
	/// </summary>
	public ref class PracticeForm : public System::Windows::Forms::Form
	{
	public:
		PracticeForm(void)
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
		~PracticeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckBox^ cbFries;
	private: System::Windows::Forms::CheckBox^ cbSalad;
	private: System::Windows::Forms::CheckBox^ cbHamburger;
	private: System::Windows::Forms::CheckBox^ cbOnionRings;
	private: System::Windows::Forms::CheckBox^ cbChickenSandwich;







	private: System::Windows::Forms::CheckBox^ cbChickenSalad;
	private: System::Windows::Forms::CheckBox^ cbFishSandwich;
	private: System::Windows::Forms::CheckBox^ cbCheeseSandwich;





	private: System::Windows::Forms::CheckBox^ cbNacho;
	private: System::Windows::Forms::CheckBox^ cbNutella;















	private: System::Windows::Forms::CheckBox^ cbBrownies;

	private: System::Windows::Forms::CheckBox^ cbLecheFlan;

	private: System::Windows::Forms::CheckBox^ cbRedVelvet;
	private: System::Windows::Forms::CheckBox^ cbMousse;
	private: System::Windows::Forms::TextBox^ txtCustomerBill;







	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ cbCocaCola;
	private: System::Windows::Forms::CheckBox^ cbCoffee;
	private: System::Windows::Forms::CheckBox^ cbWater;

















	private: System::Windows::Forms::CheckBox^ cbTea;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::CheckBox^ cbChocolate;
private: System::Windows::Forms::CheckBox^ cbStrawberry;


private: System::Windows::Forms::CheckBox^ cbMango;







private: System::Windows::Forms::CheckBox^ cbVanilla;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ txtChange;
private: System::Windows::Forms::Button^ btnExit;


private: System::Windows::Forms::Button^ btnTotal;
private: System::Windows::Forms::Button^ btnReset;


	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::NumericUpDown^ nudFries;
private: System::Windows::Forms::NumericUpDown^ nudNacho;

private: System::Windows::Forms::NumericUpDown^ nudChickenSandwich;

private: System::Windows::Forms::NumericUpDown^ nudCheeseSandwich;

private: System::Windows::Forms::NumericUpDown^ nudFishSandwich;

private: System::Windows::Forms::NumericUpDown^ nudChickenSalad;

private: System::Windows::Forms::NumericUpDown^ nudOnionRings;

private: System::Windows::Forms::NumericUpDown^ nudHamburger;

private: System::Windows::Forms::NumericUpDown^ nudSalad;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::NumericUpDown^ nudMousse;

private: System::Windows::Forms::NumericUpDown^ nudRedVelvet;
private: System::Windows::Forms::NumericUpDown^ nudNutella;


private: System::Windows::Forms::NumericUpDown^ nudBrownies;

private: System::Windows::Forms::NumericUpDown^ nudLecheFlan;
private: System::Windows::Forms::NumericUpDown^ nudTea;
private: System::Windows::Forms::NumericUpDown^ nudWater;



private: System::Windows::Forms::NumericUpDown^ nudCoffee;

private: System::Windows::Forms::NumericUpDown^ nudCocaCola;
private: System::Windows::Forms::NumericUpDown^ nudChocolate;

private: System::Windows::Forms::NumericUpDown^ nudVanilla;
private: System::Windows::Forms::NumericUpDown^ nudMango;


private: System::Windows::Forms::NumericUpDown^ nudStrawberry;








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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->nudNacho = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudChickenSandwich = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudCheeseSandwich = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudFishSandwich = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudChickenSalad = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudOnionRings = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudHamburger = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudSalad = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudFries = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbNacho = (gcnew System::Windows::Forms::CheckBox());
			this->cbChickenSandwich = (gcnew System::Windows::Forms::CheckBox());
			this->cbChickenSalad = (gcnew System::Windows::Forms::CheckBox());
			this->cbFishSandwich = (gcnew System::Windows::Forms::CheckBox());
			this->cbCheeseSandwich = (gcnew System::Windows::Forms::CheckBox());
			this->cbSalad = (gcnew System::Windows::Forms::CheckBox());
			this->cbHamburger = (gcnew System::Windows::Forms::CheckBox());
			this->cbOnionRings = (gcnew System::Windows::Forms::CheckBox());
			this->cbFries = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->nudNutella = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudBrownies = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudLecheFlan = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudMousse = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRedVelvet = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbNutella = (gcnew System::Windows::Forms::CheckBox());
			this->cbBrownies = (gcnew System::Windows::Forms::CheckBox());
			this->cbLecheFlan = (gcnew System::Windows::Forms::CheckBox());
			this->cbRedVelvet = (gcnew System::Windows::Forms::CheckBox());
			this->cbMousse = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtChange = (gcnew System::Windows::Forms::TextBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->txtCustomerBill = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->nudWater = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudCoffee = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudCocaCola = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudTea = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbCocaCola = (gcnew System::Windows::Forms::CheckBox());
			this->cbCoffee = (gcnew System::Windows::Forms::CheckBox());
			this->cbWater = (gcnew System::Windows::Forms::CheckBox());
			this->cbTea = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->nudMango = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudStrawberry = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudChocolate = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudVanilla = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbChocolate = (gcnew System::Windows::Forms::CheckBox());
			this->cbStrawberry = (gcnew System::Windows::Forms::CheckBox());
			this->cbMango = (gcnew System::Windows::Forms::CheckBox());
			this->cbVanilla = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNacho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChickenSandwich))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCheeseSandwich))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFishSandwich))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChickenSalad))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudOnionRings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHamburger))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSalad))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFries))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNutella))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBrownies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudLecheFlan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMousse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRedVelvet))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudWater))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCoffee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCocaCola))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTea))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMango))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudStrawberry))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChocolate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudVanilla))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->nudNacho);
			this->groupBox1->Controls->Add(this->nudChickenSandwich);
			this->groupBox1->Controls->Add(this->nudCheeseSandwich);
			this->groupBox1->Controls->Add(this->nudFishSandwich);
			this->groupBox1->Controls->Add(this->nudChickenSalad);
			this->groupBox1->Controls->Add(this->nudOnionRings);
			this->groupBox1->Controls->Add(this->nudHamburger);
			this->groupBox1->Controls->Add(this->nudSalad);
			this->groupBox1->Controls->Add(this->nudFries);
			this->groupBox1->Controls->Add(this->cbNacho);
			this->groupBox1->Controls->Add(this->cbChickenSandwich);
			this->groupBox1->Controls->Add(this->cbChickenSalad);
			this->groupBox1->Controls->Add(this->cbFishSandwich);
			this->groupBox1->Controls->Add(this->cbCheeseSandwich);
			this->groupBox1->Controls->Add(this->cbSalad);
			this->groupBox1->Controls->Add(this->cbHamburger);
			this->groupBox1->Controls->Add(this->cbOnionRings);
			this->groupBox1->Controls->Add(this->cbFries);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 417);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Fast Food Meal";
			// 
			// nudNacho
			// 
			this->nudNacho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudNacho->Location = System::Drawing::Point(169, 380);
			this->nudNacho->Name = L"nudNacho";
			this->nudNacho->Size = System::Drawing::Size(100, 20);
			this->nudNacho->TabIndex = 26;
			// 
			// nudChickenSandwich
			// 
			this->nudChickenSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudChickenSandwich->Location = System::Drawing::Point(169, 337);
			this->nudChickenSandwich->Name = L"nudChickenSandwich";
			this->nudChickenSandwich->Size = System::Drawing::Size(100, 20);
			this->nudChickenSandwich->TabIndex = 25;
			// 
			// nudCheeseSandwich
			// 
			this->nudCheeseSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudCheeseSandwich->Location = System::Drawing::Point(169, 297);
			this->nudCheeseSandwich->Name = L"nudCheeseSandwich";
			this->nudCheeseSandwich->Size = System::Drawing::Size(100, 20);
			this->nudCheeseSandwich->TabIndex = 24;
			// 
			// nudFishSandwich
			// 
			this->nudFishSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudFishSandwich->Location = System::Drawing::Point(169, 257);
			this->nudFishSandwich->Name = L"nudFishSandwich";
			this->nudFishSandwich->Size = System::Drawing::Size(100, 20);
			this->nudFishSandwich->TabIndex = 23;
			// 
			// nudChickenSalad
			// 
			this->nudChickenSalad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudChickenSalad->Location = System::Drawing::Point(169, 217);
			this->nudChickenSalad->Name = L"nudChickenSalad";
			this->nudChickenSalad->Size = System::Drawing::Size(100, 20);
			this->nudChickenSalad->TabIndex = 22;
			// 
			// nudOnionRings
			// 
			this->nudOnionRings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudOnionRings->Location = System::Drawing::Point(169, 175);
			this->nudOnionRings->Name = L"nudOnionRings";
			this->nudOnionRings->Size = System::Drawing::Size(100, 20);
			this->nudOnionRings->TabIndex = 21;
			// 
			// nudHamburger
			// 
			this->nudHamburger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudHamburger->Location = System::Drawing::Point(169, 135);
			this->nudHamburger->Name = L"nudHamburger";
			this->nudHamburger->Size = System::Drawing::Size(100, 20);
			this->nudHamburger->TabIndex = 20;
			// 
			// nudSalad
			// 
			this->nudSalad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudSalad->Location = System::Drawing::Point(169, 94);
			this->nudSalad->Name = L"nudSalad";
			this->nudSalad->Size = System::Drawing::Size(100, 20);
			this->nudSalad->TabIndex = 19;
			// 
			// nudFries
			// 
			this->nudFries->BackColor = System::Drawing::SystemColors::Window;
			this->nudFries->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudFries->Location = System::Drawing::Point(169, 52);
			this->nudFries->Name = L"nudFries";
			this->nudFries->Size = System::Drawing::Size(100, 20);
			this->nudFries->TabIndex = 18;
			// 
			// cbNacho
			// 
			this->cbNacho->AutoSize = true;
			this->cbNacho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNacho->Location = System::Drawing::Point(14, 383);
			this->cbNacho->Name = L"cbNacho";
			this->cbNacho->Size = System::Drawing::Size(63, 17);
			this->cbNacho->TabIndex = 8;
			this->cbNacho->Text = L"Nacho";
			this->cbNacho->UseVisualStyleBackColor = true;
			// 
			// cbChickenSandwich
			// 
			this->cbChickenSandwich->AutoSize = true;
			this->cbChickenSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbChickenSandwich->Location = System::Drawing::Point(14, 340);
			this->cbChickenSandwich->Name = L"cbChickenSandwich";
			this->cbChickenSandwich->Size = System::Drawing::Size(131, 17);
			this->cbChickenSandwich->TabIndex = 7;
			this->cbChickenSandwich->Text = L"Chicken Sandwich";
			this->cbChickenSandwich->UseVisualStyleBackColor = true;
			// 
			// cbChickenSalad
			// 
			this->cbChickenSalad->AutoSize = true;
			this->cbChickenSalad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbChickenSalad->Location = System::Drawing::Point(14, 220);
			this->cbChickenSalad->Name = L"cbChickenSalad";
			this->cbChickenSalad->Size = System::Drawing::Size(108, 17);
			this->cbChickenSalad->TabIndex = 6;
			this->cbChickenSalad->Text = L"Chicken Salad";
			this->cbChickenSalad->UseVisualStyleBackColor = true;
			// 
			// cbFishSandwich
			// 
			this->cbFishSandwich->AutoSize = true;
			this->cbFishSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbFishSandwich->Location = System::Drawing::Point(14, 260);
			this->cbFishSandwich->Name = L"cbFishSandwich";
			this->cbFishSandwich->Size = System::Drawing::Size(108, 17);
			this->cbFishSandwich->TabIndex = 5;
			this->cbFishSandwich->Text = L"Fish Sandwich";
			this->cbFishSandwich->UseVisualStyleBackColor = true;
			// 
			// cbCheeseSandwich
			// 
			this->cbCheeseSandwich->AutoSize = true;
			this->cbCheeseSandwich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCheeseSandwich->Location = System::Drawing::Point(14, 300);
			this->cbCheeseSandwich->Name = L"cbCheeseSandwich";
			this->cbCheeseSandwich->Size = System::Drawing::Size(127, 17);
			this->cbCheeseSandwich->TabIndex = 4;
			this->cbCheeseSandwich->Text = L"Cheese Sandwich";
			this->cbCheeseSandwich->UseVisualStyleBackColor = true;
			// 
			// cbSalad
			// 
			this->cbSalad->AutoSize = true;
			this->cbSalad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSalad->Location = System::Drawing::Point(14, 97);
			this->cbSalad->Name = L"cbSalad";
			this->cbSalad->Size = System::Drawing::Size(58, 17);
			this->cbSalad->TabIndex = 3;
			this->cbSalad->Text = L"Salad";
			this->cbSalad->UseVisualStyleBackColor = true;
			// 
			// cbHamburger
			// 
			this->cbHamburger->AutoSize = true;
			this->cbHamburger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbHamburger->Location = System::Drawing::Point(14, 138);
			this->cbHamburger->Name = L"cbHamburger";
			this->cbHamburger->Size = System::Drawing::Size(87, 17);
			this->cbHamburger->TabIndex = 2;
			this->cbHamburger->Text = L"Hamburger";
			this->cbHamburger->UseVisualStyleBackColor = true;
			// 
			// cbOnionRings
			// 
			this->cbOnionRings->AutoSize = true;
			this->cbOnionRings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbOnionRings->Location = System::Drawing::Point(14, 178);
			this->cbOnionRings->Name = L"cbOnionRings";
			this->cbOnionRings->Size = System::Drawing::Size(95, 17);
			this->cbOnionRings->TabIndex = 1;
			this->cbOnionRings->Text = L"Onion Rings";
			this->cbOnionRings->UseVisualStyleBackColor = true;
			// 
			// cbFries
			// 
			this->cbFries->AutoSize = true;
			this->cbFries->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbFries->Location = System::Drawing::Point(14, 55);
			this->cbFries->Name = L"cbFries";
			this->cbFries->Size = System::Drawing::Size(53, 17);
			this->cbFries->TabIndex = 0;
			this->cbFries->Text = L"Fries";
			this->cbFries->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->nudNutella);
			this->groupBox2->Controls->Add(this->nudBrownies);
			this->groupBox2->Controls->Add(this->nudLecheFlan);
			this->groupBox2->Controls->Add(this->nudMousse);
			this->groupBox2->Controls->Add(this->nudRedVelvet);
			this->groupBox2->Controls->Add(this->cbNutella);
			this->groupBox2->Controls->Add(this->cbBrownies);
			this->groupBox2->Controls->Add(this->cbLecheFlan);
			this->groupBox2->Controls->Add(this->cbRedVelvet);
			this->groupBox2->Controls->Add(this->cbMousse);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(293, 69);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 215);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dessert";
			// 
			// nudNutella
			// 
			this->nudNutella->BackColor = System::Drawing::SystemColors::Window;
			this->nudNutella->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudNutella->Location = System::Drawing::Point(169, 182);
			this->nudNutella->Name = L"nudNutella";
			this->nudNutella->Size = System::Drawing::Size(100, 20);
			this->nudNutella->TabIndex = 31;
			// 
			// nudBrownies
			// 
			this->nudBrownies->BackColor = System::Drawing::SystemColors::Window;
			this->nudBrownies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudBrownies->Location = System::Drawing::Point(169, 150);
			this->nudBrownies->Name = L"nudBrownies";
			this->nudBrownies->Size = System::Drawing::Size(100, 20);
			this->nudBrownies->TabIndex = 30;
			// 
			// nudLecheFlan
			// 
			this->nudLecheFlan->BackColor = System::Drawing::SystemColors::Window;
			this->nudLecheFlan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudLecheFlan->Location = System::Drawing::Point(169, 117);
			this->nudLecheFlan->Name = L"nudLecheFlan";
			this->nudLecheFlan->Size = System::Drawing::Size(100, 20);
			this->nudLecheFlan->TabIndex = 29;
			// 
			// nudMousse
			// 
			this->nudMousse->BackColor = System::Drawing::SystemColors::Window;
			this->nudMousse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudMousse->Location = System::Drawing::Point(169, 84);
			this->nudMousse->Name = L"nudMousse";
			this->nudMousse->Size = System::Drawing::Size(100, 20);
			this->nudMousse->TabIndex = 28;
			// 
			// nudRedVelvet
			// 
			this->nudRedVelvet->BackColor = System::Drawing::SystemColors::Window;
			this->nudRedVelvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudRedVelvet->Location = System::Drawing::Point(169, 51);
			this->nudRedVelvet->Name = L"nudRedVelvet";
			this->nudRedVelvet->Size = System::Drawing::Size(100, 20);
			this->nudRedVelvet->TabIndex = 27;
			// 
			// cbNutella
			// 
			this->cbNutella->AutoSize = true;
			this->cbNutella->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNutella->Location = System::Drawing::Point(15, 185);
			this->cbNutella->Name = L"cbNutella";
			this->cbNutella->Size = System::Drawing::Size(115, 17);
			this->cbNutella->TabIndex = 22;
			this->cbNutella->Text = L"Nutella Cookies";
			this->cbNutella->UseVisualStyleBackColor = true;
			// 
			// cbBrownies
			// 
			this->cbBrownies->AutoSize = true;
			this->cbBrownies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbBrownies->Location = System::Drawing::Point(15, 153);
			this->cbBrownies->Name = L"cbBrownies";
			this->cbBrownies->Size = System::Drawing::Size(141, 17);
			this->cbBrownies->TabIndex = 21;
			this->cbBrownies->Text = L"Chocolate Brownie\'s";
			this->cbBrownies->UseVisualStyleBackColor = true;
			// 
			// cbLecheFlan
			// 
			this->cbLecheFlan->AutoSize = true;
			this->cbLecheFlan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbLecheFlan->Location = System::Drawing::Point(15, 120);
			this->cbLecheFlan->Name = L"cbLecheFlan";
			this->cbLecheFlan->Size = System::Drawing::Size(89, 17);
			this->cbLecheFlan->TabIndex = 20;
			this->cbLecheFlan->Text = L"Leche Flan";
			this->cbLecheFlan->UseVisualStyleBackColor = true;
			// 
			// cbRedVelvet
			// 
			this->cbRedVelvet->AutoSize = true;
			this->cbRedVelvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbRedVelvet->Location = System::Drawing::Point(15, 54);
			this->cbRedVelvet->Name = L"cbRedVelvet";
			this->cbRedVelvet->Size = System::Drawing::Size(122, 17);
			this->cbRedVelvet->TabIndex = 18;
			this->cbRedVelvet->Text = L"Red Velvet Cake";
			this->cbRedVelvet->UseVisualStyleBackColor = true;
			// 
			// cbMousse
			// 
			this->cbMousse->AutoSize = true;
			this->cbMousse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbMousse->Location = System::Drawing::Point(15, 87);
			this->cbMousse->Name = L"cbMousse";
			this->cbMousse->Size = System::Drawing::Size(130, 17);
			this->cbMousse->TabIndex = 19;
			this->cbMousse->Text = L"Chocolate Mousse";
			this->cbMousse->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->txtTotal);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->txtChange);
			this->groupBox4->Controls->Add(this->btnExit);
			this->groupBox4->Controls->Add(this->btnTotal);
			this->groupBox4->Controls->Add(this->btnReset);
			this->groupBox4->Controls->Add(this->txtCustomerBill);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(293, 281);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(275, 206);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Payment";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Customer Bill";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(155, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Total";
			// 
			// txtTotal
			// 
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(158, 87);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(100, 20);
			this->txtTotal->TabIndex = 24;
			this->txtTotal->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(155, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Change";
			// 
			// txtChange
			// 
			this->txtChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtChange->Location = System::Drawing::Point(158, 45);
			this->txtChange->Name = L"txtChange";
			this->txtChange->ReadOnly = true;
			this->txtChange->Size = System::Drawing::Size(100, 20);
			this->txtChange->TabIndex = 22;
			this->txtChange->Text = L"0";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(15, 167);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 23);
			this->btnExit->TabIndex = 21;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &PracticeForm::btnExit_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->Location = System::Drawing::Point(15, 97);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(100, 23);
			this->btnTotal->TabIndex = 20;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = true;
			this->btnTotal->Click += gcnew System::EventHandler(this, &PracticeForm::btnTotal_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(15, 132);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 23);
			this->btnReset->TabIndex = 19;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &PracticeForm::btnReset_Click);
			// 
			// txtCustomerBill
			// 
			this->txtCustomerBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCustomerBill->Location = System::Drawing::Point(15, 67);
			this->txtCustomerBill->Name = L"txtCustomerBill";
			this->txtCustomerBill->Size = System::Drawing::Size(100, 20);
			this->txtCustomerBill->TabIndex = 18;
			this->txtCustomerBill->Text = L"0";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Controls->Add(this->nudWater);
			this->groupBox3->Controls->Add(this->nudCoffee);
			this->groupBox3->Controls->Add(this->nudCocaCola);
			this->groupBox3->Controls->Add(this->nudTea);
			this->groupBox3->Controls->Add(this->cbCocaCola);
			this->groupBox3->Controls->Add(this->cbCoffee);
			this->groupBox3->Controls->Add(this->cbWater);
			this->groupBox3->Controls->Add(this->cbTea);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(574, 70);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(275, 205);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Drinks";
			// 
			// nudWater
			// 
			this->nudWater->BackColor = System::Drawing::SystemColors::Window;
			this->nudWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudWater->Location = System::Drawing::Point(169, 176);
			this->nudWater->Name = L"nudWater";
			this->nudWater->Size = System::Drawing::Size(100, 20);
			this->nudWater->TabIndex = 31;
			// 
			// nudCoffee
			// 
			this->nudCoffee->BackColor = System::Drawing::SystemColors::Window;
			this->nudCoffee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudCoffee->Location = System::Drawing::Point(169, 137);
			this->nudCoffee->Name = L"nudCoffee";
			this->nudCoffee->Size = System::Drawing::Size(100, 20);
			this->nudCoffee->TabIndex = 30;
			// 
			// nudCocaCola
			// 
			this->nudCocaCola->BackColor = System::Drawing::SystemColors::Window;
			this->nudCocaCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudCocaCola->Location = System::Drawing::Point(169, 96);
			this->nudCocaCola->Name = L"nudCocaCola";
			this->nudCocaCola->Size = System::Drawing::Size(100, 20);
			this->nudCocaCola->TabIndex = 29;
			// 
			// nudTea
			// 
			this->nudTea->BackColor = System::Drawing::SystemColors::Window;
			this->nudTea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudTea->Location = System::Drawing::Point(169, 54);
			this->nudTea->Name = L"nudTea";
			this->nudTea->Size = System::Drawing::Size(100, 20);
			this->nudTea->TabIndex = 28;
			// 
			// cbCocaCola
			// 
			this->cbCocaCola->AutoSize = true;
			this->cbCocaCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCocaCola->Location = System::Drawing::Point(14, 97);
			this->cbCocaCola->Name = L"cbCocaCola";
			this->cbCocaCola->Size = System::Drawing::Size(84, 17);
			this->cbCocaCola->TabIndex = 3;
			this->cbCocaCola->Text = L"Coca-Cola";
			this->cbCocaCola->UseVisualStyleBackColor = true;
			// 
			// cbCoffee
			// 
			this->cbCoffee->AutoSize = true;
			this->cbCoffee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCoffee->Location = System::Drawing::Point(14, 138);
			this->cbCoffee->Name = L"cbCoffee";
			this->cbCoffee->Size = System::Drawing::Size(63, 17);
			this->cbCoffee->TabIndex = 2;
			this->cbCoffee->Text = L"Coffee";
			this->cbCoffee->UseVisualStyleBackColor = true;
			// 
			// cbWater
			// 
			this->cbWater->AutoSize = true;
			this->cbWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbWater->Location = System::Drawing::Point(14, 178);
			this->cbWater->Name = L"cbWater";
			this->cbWater->Size = System::Drawing::Size(104, 17);
			this->cbWater->TabIndex = 1;
			this->cbWater->Text = L"Bottled Water";
			this->cbWater->UseVisualStyleBackColor = true;
			// 
			// cbTea
			// 
			this->cbTea->AutoSize = true;
			this->cbTea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTea->Location = System::Drawing::Point(14, 55);
			this->cbTea->Name = L"cbTea";
			this->cbTea->Size = System::Drawing::Size(48, 17);
			this->cbTea->TabIndex = 0;
			this->cbTea->Text = L"Tea";
			this->cbTea->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->nudMango);
			this->groupBox5->Controls->Add(this->nudStrawberry);
			this->groupBox5->Controls->Add(this->nudChocolate);
			this->groupBox5->Controls->Add(this->nudVanilla);
			this->groupBox5->Controls->Add(this->cbChocolate);
			this->groupBox5->Controls->Add(this->cbStrawberry);
			this->groupBox5->Controls->Add(this->cbMango);
			this->groupBox5->Controls->Add(this->cbVanilla);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(574, 281);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(275, 205);
			this->groupBox5->TabIndex = 19;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Shakes";
			// 
			// nudMango
			// 
			this->nudMango->BackColor = System::Drawing::SystemColors::Window;
			this->nudMango->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudMango->Location = System::Drawing::Point(169, 175);
			this->nudMango->Name = L"nudMango";
			this->nudMango->Size = System::Drawing::Size(100, 20);
			this->nudMango->TabIndex = 35;
			// 
			// nudStrawberry
			// 
			this->nudStrawberry->BackColor = System::Drawing::SystemColors::Window;
			this->nudStrawberry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudStrawberry->Location = System::Drawing::Point(169, 137);
			this->nudStrawberry->Name = L"nudStrawberry";
			this->nudStrawberry->Size = System::Drawing::Size(100, 20);
			this->nudStrawberry->TabIndex = 34;
			// 
			// nudChocolate
			// 
			this->nudChocolate->BackColor = System::Drawing::SystemColors::Window;
			this->nudChocolate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudChocolate->Location = System::Drawing::Point(169, 94);
			this->nudChocolate->Name = L"nudChocolate";
			this->nudChocolate->Size = System::Drawing::Size(100, 20);
			this->nudChocolate->TabIndex = 33;
			// 
			// nudVanilla
			// 
			this->nudVanilla->BackColor = System::Drawing::SystemColors::Window;
			this->nudVanilla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudVanilla->Location = System::Drawing::Point(169, 52);
			this->nudVanilla->Name = L"nudVanilla";
			this->nudVanilla->Size = System::Drawing::Size(100, 20);
			this->nudVanilla->TabIndex = 32;
			// 
			// cbChocolate
			// 
			this->cbChocolate->AutoSize = true;
			this->cbChocolate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbChocolate->Location = System::Drawing::Point(14, 97);
			this->cbChocolate->Name = L"cbChocolate";
			this->cbChocolate->Size = System::Drawing::Size(150, 17);
			this->cbChocolate->TabIndex = 3;
			this->cbChocolate->Text = L"Chocolate Milk Shake";
			this->cbChocolate->UseVisualStyleBackColor = true;
			// 
			// cbStrawberry
			// 
			this->cbStrawberry->AutoSize = true;
			this->cbStrawberry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStrawberry->Location = System::Drawing::Point(14, 138);
			this->cbStrawberry->Name = L"cbStrawberry";
			this->cbStrawberry->Size = System::Drawing::Size(153, 17);
			this->cbStrawberry->TabIndex = 2;
			this->cbStrawberry->Text = L"Strawberry Milk Shake";
			this->cbStrawberry->UseVisualStyleBackColor = true;
			// 
			// cbMango
			// 
			this->cbMango->AutoSize = true;
			this->cbMango->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbMango->Location = System::Drawing::Point(14, 178);
			this->cbMango->Name = L"cbMango";
			this->cbMango->Size = System::Drawing::Size(104, 17);
			this->cbMango->TabIndex = 1;
			this->cbMango->Text = L"Mango Shake";
			this->cbMango->UseVisualStyleBackColor = true;
			// 
			// cbVanilla
			// 
			this->cbVanilla->AutoSize = true;
			this->cbVanilla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbVanilla->Location = System::Drawing::Point(14, 55);
			this->cbVanilla->Name = L"cbVanilla";
			this->cbVanilla->Size = System::Drawing::Size(104, 17);
			this->cbVanilla->TabIndex = 0;
			this->cbVanilla->Text = L"Vanilla Shake";
			this->cbVanilla->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(438, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fast Food System";
			// 
			// PracticeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(861, 493);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PracticeForm";
			this->Text = L"Fast Food Basic System";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNacho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChickenSandwich))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCheeseSandwich))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFishSandwich))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChickenSalad))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudOnionRings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHamburger))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSalad))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFries))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNutella))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBrownies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudLecheFlan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMousse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRedVelvet))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudWater))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCoffee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCocaCola))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTea))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMango))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudStrawberry))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudChocolate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudVanilla))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void ClearSystem() // To Reset The CheckBoxes, TextBoxes And Numeric Up/Down
{   
	//Reset Meals CheckBoxes
	cbFries->Checked = false;
	cbSalad->Checked = false;
	cbHamburger->Checked = false;
	cbOnionRings->Checked = false;
	cbChickenSalad->Checked = false;
	cbFishSandwich->Checked = false;
	cbCheeseSandwich->Checked = false;
	cbChickenSandwich->Checked = false;
	cbNacho->Checked = false;

	//To Reset Meals Numeric Up/Down
	nudFries->Value = 0;
	nudSalad->Value = 0;
	nudHamburger->Value = 0;
	nudOnionRings->Value = 0;
	nudChickenSalad->Value = 0;
	nudFishSandwich->Value = 0;
	nudCheeseSandwich->Value = 0;
	nudChickenSandwich->Value = 0;
	nudNacho->Value = 0;

	//Reset Dessert CheckBoxes
	cbRedVelvet->Checked = false;
	cbMousse->Checked = false;
	cbLecheFlan->Checked = false;
	cbBrownies->Checked = false;
	cbNutella->Checked = false;

	//To Reset Dessert Numeric Up/Down
	nudRedVelvet->Value = 0;
	nudMousse->Value = 0;
	nudLecheFlan->Value = 0;
	nudBrownies->Value = 0;
	nudNutella->Value = 0;

	//Reset Drinks CheckBoxes
	cbTea->Checked = false;
	cbCocaCola->Checked = false;
	cbCoffee->Checked = false;
	cbWater->Checked = false;

	//Reset Drinks Numeric Up/Down
	nudTea->Value = 0;
	nudCocaCola->Value = 0;
	nudCoffee->Value = 0;
	nudWater->Value = 0;

	//Reset Shakes CheckBoxes
	cbVanilla->Checked = false;
	cbChocolate->Checked = false;
	cbStrawberry->Checked = false;
	cbMango->Checked = false;

	//Reset Shakes Numeric Up/Down
	nudVanilla->Value = 0;
	nudChocolate->Value = 0;
	nudStrawberry->Value = 0;
	nudMango->Value = 0;

	txtCustomerBill->Text = "0";
	txtChange->Text = "0";
	txtTotal->Text = "0";
}

private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	//Meals Variables
	int quantFries = Convert::ToInt16(nudFries->Value);
	int quantSalad = Convert::ToInt16(nudSalad->Value);
	int quantHamburger = Convert::ToInt16(nudHamburger->Value);
	int quantOnionRings = Convert::ToInt16(nudOnionRings->Value);
	int quantChickenSalad = Convert::ToInt16(nudChickenSalad->Value);
	int quantFishSandwich = Convert::ToInt16(nudFishSandwich->Value);
	int quantCheeseSandwich = Convert::ToInt16(nudCheeseSandwich->Value);
	int quantChickenSandwich = Convert::ToInt16(nudChickenSandwich->Value);
	int quantNacho = Convert::ToInt16(nudNacho->Value);
	array<int>^ mealPrice = {79, 159, 50, 120, 179, 79, 79, 89, 129};
	
	//Dessert Variable
	int quantRedVelvet = Convert::ToInt16(nudRedVelvet->Value);
	int quantMousse = Convert::ToInt16(nudMousse->Value);
	int quantLecheFlan = Convert::ToInt16(nudLecheFlan->Value);
	int quantBrownies = Convert::ToInt16(nudBrownies->Value);
	int quantNutella = Convert::ToInt16(nudNutella->Value);
	array<int>^ dessertPrice = {119, 110, 100, 69, 74};

	//Drinks Variables
	int quantTea = Convert::ToInt16(nudTea->Value);
	int quantCocaCola = Convert::ToInt16(nudCocaCola->Value);
	int quantCoffee = Convert::ToInt16(nudCoffee->Value);
	int quantWater = Convert::ToInt16(nudWater->Value);
	array<int>^ drinksPrice = {50, 40, 50, 20};

	//Shakes Variables
	int quantVanilla = Convert::ToInt16(nudVanilla->Value);
	int quantChocolate = Convert::ToInt16(nudChocolate->Value);
	int quantStrawberry = Convert::ToInt16(nudStrawberry->Value);
	int quantMango = Convert::ToInt16(nudMango->Value);
	array<int>^ shakesPrice = {79, 89, 89, 100};
    
	//Customer Bill Variable
	int customerBill = Convert::ToInt16(txtCustomerBill->Text);

	//Customer Total Bill And Change Variable
	double total{};
	double change{};


	//Meals if's statements
	if (cbFries->Checked) //To Check If CheckBox Is Checked
	{
		total += mealPrice[0] * quantFries; //To Add The Price Of The Product In Customer Total Bill
	}
	
	if (cbSalad->Checked) 
	{
		total += mealPrice[1] * quantSalad;
	}
	
	if (cbHamburger->Checked)
	{
		total += mealPrice[2] * quantHamburger;
	}

	if (cbOnionRings)
	{
		total += mealPrice[3] * quantOnionRings;
	}
	
	if (cbChickenSalad->Checked)
	{
		total += mealPrice[4] * quantChickenSalad;
	}

	if (cbFishSandwich)
	{
		total += mealPrice[5] * quantFishSandwich;
	}

	if (cbCheeseSandwich)
	{
		total += mealPrice[6] * quantCheeseSandwich;
	}

	if (cbChickenSandwich)
	{
		total += mealPrice[7] * quantChickenSandwich;
	}

	if (cbNacho)
	{
		total += mealPrice[8] * quantNacho;
	}


	//Desserts if's statements
	if (cbRedVelvet->Checked) //To Check If CheckBox Is Checked
	{
		total += dessertPrice[0] * quantRedVelvet; //To Add The Price Of The Product In Customer Total Bill
	}
	
	if (cbMousse->Checked)
	{
		total += dessertPrice[1] * quantMousse;
	}
	
	if (cbLecheFlan->Checked)
	{
		total += dessertPrice[2] * quantLecheFlan;
	}

	if (cbBrownies->Checked)
	{
		total += dessertPrice[3] * quantBrownies;
	}

	if (cbNutella->Checked)
	{
		total += dessertPrice[4] * quantNutella;
	}

	//Drinks if's Statements
	if (cbTea->Checked) //To Check If CheckBox Is Checked
	{
		total += drinksPrice[0] * quantTea; //To Add The Price Of The Product In Customer Total Bill
	}

	if (cbCocaCola->Checked) 
	{
		total += drinksPrice[1] * quantCocaCola; 
	}

	if (cbCoffee->Checked)
	{
		total += drinksPrice[2] * quantCoffee;
	}

	if (cbWater->Checked)
	{
		total += drinksPrice[3] * quantWater;
	}

	//Shakes if's Statements
	if (cbVanilla->Checked) //To Check If CheckBox Is Checked
	{
		total += shakesPrice[0] * quantVanilla; //To Add The Price Of The Product In Customer Total Bill
	}

	if (cbChocolate->Checked)
	{
		total += shakesPrice[1] * quantChocolate;
	}

	if (cbStrawberry->Checked)
	{
		total += shakesPrice[2] * quantStrawberry;
	}

	if (cbMango->Checked)
	{
		total += shakesPrice[3] * quantMango;
	}
     
	//To Check If Total Bill is Not Greater Than The Customer Bill
	if (total <= customerBill)
	{
		customerBill -= total; //To Minus The Total Bill Of The Customer In His/Her Money
		change += customerBill; //Adding The Change Of The Customer Before Showing It In Change TextBox
	}

	else //To Show A Warning If Customer Bill is Not Enought To Pay His/Her Order
	{
		MessageBox::Show("Bill Is Not Enought To Process The Payment\n", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	//Outs
	txtChange->Text = Convert::ToString(change);
	txtTotal->Text = Convert::ToString(total);

}



private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	//Ask Before Resetting The Whole Form
	Windows::Forms::DialogResult dialogResultReset = MessageBox::Show("Are You Sure You Want To Reset The Whole Form?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (dialogResultReset == Windows::Forms::DialogResult::Yes) //Checking If The Answer Is Yes
	{
		ClearSystem(); //Executed If The Answer Is Yes
	}
}

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	//Ask Before Exiting The Application
	Windows::Forms::DialogResult dialogResultExit = MessageBox::Show("Are You Sure You Want To Exit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (dialogResultExit == Windows::Forms::DialogResult::Yes) //Check If Answer Is Yes
	{
		Application::Exit(); //Executed If The Answer Is Yes
	}
}

};

}
