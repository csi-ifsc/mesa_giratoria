#pragma once
namespace IHM_mesa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for JanelaPrincipal
	/// </summary>
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
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
		~JanelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbRPM;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  btConectar;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  rtbEstato;


	private: System::IO::Ports::SerialPort^  portaSerial;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btAtualizar;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RadioButton^  rbAntiHorario;

	private: System::Windows::Forms::RadioButton^  rbHorario;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TrackBar^  tbarRPM;
	private: System::Windows::Forms::Button^  btDesligar;

	private: System::Windows::Forms::Button^  btLigar;
	private: System::Windows::Forms::Timer^  timerLeituraSerial;




	private: System::ComponentModel::IContainer^  components;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbRPM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btConectar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rtbEstato = (gcnew System::Windows::Forms::RichTextBox());
			this->portaSerial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btAtualizar = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btDesligar = (gcnew System::Windows::Forms::Button());
			this->btLigar = (gcnew System::Windows::Forms::Button());
			this->tbarRPM = (gcnew System::Windows::Forms::TrackBar());
			this->rbAntiHorario = (gcnew System::Windows::Forms::RadioButton());
			this->rbHorario = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->timerLeituraSerial = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbarRPM))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Porta de Comunicação";
			// 
			// tbRPM
			// 
			this->tbRPM->Location = System::Drawing::Point(292, 117);
			this->tbRPM->MaxLength = 2;
			this->tbRPM->Name = L"tbRPM";
			this->tbRPM->Size = System::Drawing::Size(42, 20);
			this->tbRPM->TabIndex = 8;
			this->tbRPM->Text = L"0";
			this->tbRPM->TextChanged += gcnew System::EventHandler(this, &JanelaPrincipal::tbRPM_TextChanged);
			this->tbRPM->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &JanelaPrincipal::tbRPM_KeyPress);
			this->tbRPM->Leave += gcnew System::EventHandler(this, &JanelaPrincipal::tbRPM_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Sentido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Velocidade RPM";
			// 
			// btConectar
			// 
			this->btConectar->AccessibleDescription = L"";
			this->btConectar->AccessibleName = L"";
			this->btConectar->Location = System::Drawing::Point(198, 30);
			this->btConectar->Name = L"btConectar";
			this->btConectar->Size = System::Drawing::Size(78, 23);
			this->btConectar->TabIndex = 3;
			this->btConectar->Text = L"Conectar";
			this->toolTip1->SetToolTip(this->btConectar, L"Enviar comando para Arduino");
			this->btConectar->UseVisualStyleBackColor = true;
			this->btConectar->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btConectar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 321);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Estatos";
			// 
			// rtbEstato
			// 
			this->rtbEstato->BackColor = System::Drawing::SystemColors::Window;
			this->rtbEstato->Location = System::Drawing::Point(13, 337);
			this->rtbEstato->Name = L"rtbEstato";
			this->rtbEstato->ReadOnly = true;
			this->rtbEstato->Size = System::Drawing::Size(389, 100);
			this->rtbEstato->TabIndex = 8;
			this->rtbEstato->Text = L"Desconectado";
			// 
			// portaSerial
			// 
			this->portaSerial->ReadTimeout = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Location = System::Drawing::Point(13, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// btAtualizar
			// 
			this->btAtualizar->BackColor = System::Drawing::Color::Transparent;
			this->btAtualizar->Location = System::Drawing::Point(128, 30);
			this->btAtualizar->Name = L"btAtualizar";
			this->btAtualizar->Size = System::Drawing::Size(60, 23);
			this->btAtualizar->TabIndex = 2;
			this->btAtualizar->Text = L"Atualizar";
			this->btAtualizar->UseVisualStyleBackColor = false;
			this->btAtualizar->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btAtualizar_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(13, 70);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(389, 237);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->btDesligar);
			this->tabPage1->Controls->Add(this->btLigar);
			this->tabPage1->Controls->Add(this->tbarRPM);
			this->tabPage1->Controls->Add(this->rbAntiHorario);
			this->tabPage1->Controls->Add(this->rbHorario);
			this->tabPage1->Controls->Add(this->tbRPM);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(381, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Velocidade";
			this->tabPage1->Click += gcnew System::EventHandler(this, &JanelaPrincipal::tabPage1_Click);
			// 
			// btDesligar
			// 
			this->btDesligar->Enabled = false;
			this->btDesligar->Location = System::Drawing::Point(181, 166);
			this->btDesligar->Name = L"btDesligar";
			this->btDesligar->Size = System::Drawing::Size(75, 23);
			this->btDesligar->TabIndex = 10;
			this->btDesligar->Text = L"Desligar";
			this->btDesligar->UseVisualStyleBackColor = true;
			this->btDesligar->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btDesligar_Click);
			// 
			// btLigar
			// 
			this->btLigar->Enabled = false;
			this->btLigar->Location = System::Drawing::Point(59, 166);
			this->btLigar->Name = L"btLigar";
			this->btLigar->Size = System::Drawing::Size(75, 23);
			this->btLigar->TabIndex = 9;
			this->btLigar->Text = L"Ligar";
			this->btLigar->UseVisualStyleBackColor = true;
			this->btLigar->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btLigar_Click);
			// 
			// tbarRPM
			// 
			this->tbarRPM->Location = System::Drawing::Point(3, 115);
			this->tbarRPM->Maximum = 80;
			this->tbarRPM->Name = L"tbarRPM";
			this->tbarRPM->Size = System::Drawing::Size(280, 45);
			this->tbarRPM->TabIndex = 7;
			this->tbarRPM->TickFrequency = 5;
			this->tbarRPM->ValueChanged += gcnew System::EventHandler(this, &JanelaPrincipal::tbarRPM_ValueChanged);
			// 
			// rbAntiHorario
			// 
			this->rbAntiHorario->AutoSize = true;
			this->rbAntiHorario->Location = System::Drawing::Point(7, 50);
			this->rbAntiHorario->Name = L"rbAntiHorario";
			this->rbAntiHorario->Size = System::Drawing::Size(80, 17);
			this->rbAntiHorario->TabIndex = 6;
			this->rbAntiHorario->Text = L"Anti-Horario";
			this->rbAntiHorario->UseVisualStyleBackColor = true;
			// 
			// rbHorario
			// 
			this->rbHorario->AutoSize = true;
			this->rbHorario->Checked = true;
			this->rbHorario->Location = System::Drawing::Point(7, 33);
			this->rbHorario->Name = L"rbHorario";
			this->rbHorario->Size = System::Drawing::Size(59, 17);
			this->rbHorario->TabIndex = 5;
			this->rbHorario->TabStop = true;
			this->rbHorario->Text = L"Horario";
			this->rbHorario->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(381, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Posição";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(381, 211);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Passo";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// timerLeituraSerial
			// 
			this->timerLeituraSerial->Interval = 10;
			this->timerLeituraSerial->Tick += gcnew System::EventHandler(this, &JanelaPrincipal::timerLeituraSerial_Tick);
			// 
			// JanelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 449);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btAtualizar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->rtbEstato);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btConectar);
			this->Controls->Add(this->label1);
			this->Name = L"JanelaPrincipal";
			this->Text = L"IHM Mesa";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &JanelaPrincipal::JanelaPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &JanelaPrincipal::JanelaPrincipal_Load);
			this->Click += gcnew System::EventHandler(this, &JanelaPrincipal::JanelaPrincipal_Click);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbarRPM))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btConectar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!portaSerial->IsOpen){
			//configura e abre a porta
			portaSerial->PortName = comboBox1->Text;
			portaSerial->Open();
			portaSerial->DiscardInBuffer();

			//portaSerial->WriteLine("C");
			btConectar->Text = "Desconectar";

			btLigar->Enabled = true;
			btDesligar->Enabled = true;
			timerLeituraSerial->Enabled = true;

			rtbEstato->Text = "Desligado";
		}
		else{
			portaSerial->WriteLine("V0");
			btLigar->Text = "Ligar";
			portaSerial->Close();
			rtbEstato->Text = "Desconectado";
			btConectar->Text = "Conectar";
			btLigar->Enabled = false;
			btDesligar->Enabled = false;
			timerLeituraSerial->Enabled = false;
		}
	}

	private: System::Void JanelaPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarPortasSeriais();
	}

	private: System::Void btAtualizar_Click(System::Object^  sender, System::EventArgs^  e) {
		atualizarPortasSeriais();
	}

	void atualizarPortasSeriais(){
		comboBox1->Items->Clear();

		array<String^>^ serialPorts = nullptr;
		try
		{
			// Get a list of serial port names.
			serialPorts = SerialPort::GetPortNames();
		}
		catch (Win32Exception^ ex)
		{
			Console::WriteLine(ex->Message);
		}

		Console::WriteLine("The following serial ports were found:");

		// Display each port name to the console.
		for each(String^ port in serialPorts)
		{
			comboBox1->Items->Add(port);
		}

		if (comboBox1->Items->Count >= 1){
			comboBox1->SelectedIndex = 0;
			btConectar->Enabled = true;
			rtbEstato->Text = "Desconectado";
		}
		else {
			rtbEstato->Text = "NENHUMA PORTA ENCONTRADA\n";
			btConectar->Enabled = false;
		}
	}

	private: System::Void JanelaPrincipal_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (portaSerial->IsOpen){
			portaSerial->WriteLine("V0");
			portaSerial->Close();
		}
	}

	private: System::Void tbarRPM_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		tbRPM->Text = Convert::ToString(tbarRPM->Value);
	}

	private: System::Void tbRPM_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
			e->Handled = true;
		}
	}

	private: System::Void tbRPM_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
			tbarRPM->Value = Convert::ToInt16(tbRPM->Text);
		}catch (...){

		}
	}
	private: System::Void tbRPM_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (tbRPM->Text == ""){
			tbRPM->Text = "0";
		}
		else if (Convert::ToInt32(tbRPM->Text) >= tbarRPM->Maximum){
			tbRPM->Text = Convert::ToString(tbarRPM->Maximum);
		}
	}

	private: System::Void JanelaPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tbRPM->Text == ""){
			tbRPM->Text = "0";
		}
		else if (Convert::ToInt32(tbRPM->Text) >= tbarRPM->Maximum){
			tbRPM->Text = Convert::ToString(tbarRPM->Maximum);
		}
	}

	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tbRPM->Text == ""){
			tbRPM->Text = "0";
		}
		else if (Convert::ToInt32(tbRPM->Text) >= tbarRPM->Maximum){
			tbRPM->Text = Convert::ToString(tbarRPM->Maximum);
		}
	}

	private: System::Void btLigar_Click(System::Object^  sender, System::EventArgs^  e) {
		portaSerial->Write("V");
		btLigar->Text = "Atualizar";

		if (rbHorario->Checked){
			portaSerial->Write("+");
		}
		else{
			portaSerial->Write("-");
		}

		portaSerial->WriteLine(Convert::ToString(Convert::ToInt32(tbarRPM->Value*(32*200*1.01)/60)));
		rtbEstato->Text = Convert::ToString(tbarRPM->Value*(32 * 200) / 60);
	}

	private: System::Void timerLeituraSerial_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (portaSerial->IsOpen){
			String ^ comando;
			try{
				comando = portaSerial->ReadLine();
			}
			catch (InvalidOperationException^ ex){
				timerLeituraSerial->Enabled = false;
				MessageBox::Show(ex->Message + "\nVerifique a conexao do Arduino", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				portaSerial->Close();
				return;
			}
			catch (TimeoutException^ ex){
				return;
			}

			array<String^>^substrings = comando->Split(' ');

			try{
				rtbEstato->Text = Convert::ToString((Convert::ToInt32(comando) * 60.0) / (32.0 * 200));
			} catch (...){}
		}
	}

	private: System::Void btDesligar_Click(System::Object^  sender, System::EventArgs^  e) {
		portaSerial->WriteLine("V0");
		btLigar->Text = "Ligar";
	}
};
}
