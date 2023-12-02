#pragma once

namespace Project13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ діїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завантажитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оновитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видалитиToolStripMenuItem;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->діїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантажитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(42, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Оновити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(42, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Завантажити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(42, 234);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Видалити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 427);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Код";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Назва гри";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Жанр гри";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Рік гри";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Платформа";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Рейтинг гри";
			this->Column6->Name = L"Column6";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(661, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 359);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дія";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->діїToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(874, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// діїToolStripMenuItem
			// 
			this->діїToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->завантажитиToolStripMenuItem,
					this->оновитиToolStripMenuItem, this->додатиToolStripMenuItem, this->видалитиToolStripMenuItem
			});
			this->діїToolStripMenuItem->Name = L"діїToolStripMenuItem";
			this->діїToolStripMenuItem->Size = System::Drawing::Size(33, 20);
			this->діїToolStripMenuItem->Text = L"Дії";
			this->діїToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::діїToolStripMenuItem_Click);
			// 
			// завантажитиToolStripMenuItem
			// 
			this->завантажитиToolStripMenuItem->Name = L"завантажитиToolStripMenuItem";
			this->завантажитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->завантажитиToolStripMenuItem->Text = L"Завантажити";
			this->завантажитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::завантажитиToolStripMenuItem_Click);
			// 
			// оновитиToolStripMenuItem
			// 
			this->оновитиToolStripMenuItem->Name = L"оновитиToolStripMenuItem";
			this->оновитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->оновитиToolStripMenuItem->Text = L"Оновити";
			this->оновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оновитиToolStripMenuItem_Click);
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->додатиToolStripMenuItem->Text = L"Додати ";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::додатиToolStripMenuItem_Click);
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			this->видалитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::видалитиToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 503);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
		String^ rating = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "INSERT INTO [Game] VALUES (" + id + ",'" + name + "','" + genre + "'," + year + ",'" + platform + "'," + rating + ")";


		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		try
		{
			dbCommand->ExecuteNonQuery();
			MessageBox::Show("Дані додані", "Ок");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Помилка у виконанні: " + ex->Message, "Помилка");
		}
		finally
		{
			dbConnection->Close();
		}


	}
	private: System::Void діїToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		dbConnection->Open();
		String^ query = "SELECT * FROM [Game]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

		if (dbReader->HasRows == false) {
			MessageBox::Show("Дані відсутні", "Помилка");
		}
		else {
			while (dbReader->Read())
				dataGridView1->Rows->Add(dbReader["Код"], dbReader["Назва гри"], dbReader["Жанр гри"], dbReader["Рік гри"], dbReader["Платформа"], dbReader["Рейтинг"]);
		}
		dbReader->Close();
		dbConnection->Close();


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
		String^ rating = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "UPDATE [Game] SET Назва='" + name + "', Тип='" + genre + "', Ціна=" + year + " WHERE Код=" + id;


		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else
			MessageBox::Show("Дані змінені", "Ок");
		dbConnection->Close();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [Game] WHERE Код=" + id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else {
			MessageBox::Show("Дані видалені", "Ок");
			dataGridView1->Rows->RemoveAt(index);
		}
		dbConnection->Close();

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void завантажитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}

		   void LoadData() {
			   // Ваш код для загрузки данных из базы данных і додавання їх до dataGridView1
			   String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			   OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			   dbConnection->Open();
			   String^ query = "SELECT * FROM [Game]";
			   OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			   OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

			   // Очистіть dataGridView1 перед завантаженням нових даних
			   dataGridView1->Rows->Clear();

			   if (dbReader->HasRows == false) {
				   MessageBox::Show("Дані відсутні", "Помилка");
			   }
			   else {
				   while (dbReader->Read())
					   dataGridView1->Rows->Add(dbReader["Код"], dbReader["Назва гри"], dbReader["Жанр гри"], dbReader["Рік гри"], dbReader["Платформа"], dbReader["Рейтинг"]);
			   }
			   dbReader->Close();
			   dbConnection->Close();
		   }
	private: System::Void оновитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}
private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не всі дані є", "Зверніть увагу");
		return;
	}

	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ rating = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();

	String^ query = "INSERT INTO [Game] VALUES (" + id + ",'" + name + "','" + genre + "'," + year + ",'" + platform + "'," + rating + ")";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	try {
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("Дані додані", "Ок");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Помилка у виконанні: " + ex->Message, "Помилка");
	}
	finally {
		dbConnection->Close();
	}

	// Оновити дані після додавання нового запису
	LoadData();
}
private: System::Void видалитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Не вказаний ідентифікатор для видалення", "Зверніть увагу");
		return;
	}

	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();

	String^ query = "DELETE FROM [Game] WHERE [Код] = " + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	try {
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("Запис видалено", "Ок");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Помилка у виконанні: " + ex->Message, "Помилка");
	}
	finally {
		dbConnection->Close();
	}

	// Оновити дані після видалення запису
	LoadData();
}
};
}