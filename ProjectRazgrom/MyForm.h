#pragma once
namespace ProjectRazgrom {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ chats;

	private: System::Windows::Forms::Button^ images;

	private: System::Windows::Forms::Button^ videos;
	private: System::Windows::Forms::Button^ text;
	private: System::Windows::Forms::Button^ lmarena;
	private: System::Windows::Forms::Button^ deepaichat;
	private: System::Windows::Forms::Button^ deepaiimages;
	private: System::Windows::Forms::Button^ deepaivideos;

	private: System::Windows::Forms::Button^ deepl;


	private: System::Windows::Forms::Button^ cleanup;
	private: System::Windows::Forms::Button^ you;
	private: System::Windows::Forms::Button^ craiyon;

	private: Microsoft::Web::WebView2::WinForms::WebView2^ browser;
	private: System::Windows::Forms::Button^ dezgo;
	private: System::Windows::Forms::Button^ perplexity;

	private: System::Windows::Forms::Button^ flow;
	private: System::Windows::Forms::Button^ kingnish;
	private: System::Windows::Forms::Button^ img3d;
	private: System::Windows::Forms::Button^ audio;
	private: System::Windows::Forms::Button^ jukebox;
	private: System::Windows::Forms::Button^ bypassgpt;
	private: System::Windows::Forms::Button^ finances;
	private: System::Windows::Forms::Button^ crypto;
	private: System::Windows::Forms::Button^ btc;
	private: System::Windows::Forms::Button^ speechgen;








	protected:
















	protected:


	protected:













	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->chats = (gcnew System::Windows::Forms::Button());
			this->images = (gcnew System::Windows::Forms::Button());
			this->videos = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::Button());
			this->lmarena = (gcnew System::Windows::Forms::Button());
			this->deepaichat = (gcnew System::Windows::Forms::Button());
			this->deepaiimages = (gcnew System::Windows::Forms::Button());
			this->deepaivideos = (gcnew System::Windows::Forms::Button());
			this->deepl = (gcnew System::Windows::Forms::Button());
			this->cleanup = (gcnew System::Windows::Forms::Button());
			this->you = (gcnew System::Windows::Forms::Button());
			this->craiyon = (gcnew System::Windows::Forms::Button());
			this->browser = (gcnew Microsoft::Web::WebView2::WinForms::WebView2());
			this->dezgo = (gcnew System::Windows::Forms::Button());
			this->perplexity = (gcnew System::Windows::Forms::Button());
			this->flow = (gcnew System::Windows::Forms::Button());
			this->kingnish = (gcnew System::Windows::Forms::Button());
			this->img3d = (gcnew System::Windows::Forms::Button());
			this->audio = (gcnew System::Windows::Forms::Button());
			this->jukebox = (gcnew System::Windows::Forms::Button());
			this->bypassgpt = (gcnew System::Windows::Forms::Button());
			this->finances = (gcnew System::Windows::Forms::Button());
			this->crypto = (gcnew System::Windows::Forms::Button());
			this->btc = (gcnew System::Windows::Forms::Button());
			this->speechgen = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->browser))->BeginInit();
			this->SuspendLayout();
			// 
			// chats
			// 
			this->chats->BackColor = System::Drawing::Color::Navy;
			this->chats->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->chats->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chats->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->chats->Location = System::Drawing::Point(-4, -1);
			this->chats->Name = L"chats";
			this->chats->Size = System::Drawing::Size(79, 94);
			this->chats->TabIndex = 4;
			this->chats->Text = L"Chat-bots";
			this->chats->UseVisualStyleBackColor = false;
			this->chats->Click += gcnew System::EventHandler(this, &MyForm::chats_Click);
			// 
			// images
			// 
			this->images->BackColor = System::Drawing::Color::Navy;
			this->images->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->images->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->images->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->images->Location = System::Drawing::Point(-4, 99);
			this->images->Name = L"images";
			this->images->Size = System::Drawing::Size(79, 94);
			this->images->TabIndex = 5;
			this->images->Text = L"Images";
			this->images->UseVisualStyleBackColor = false;
			this->images->Click += gcnew System::EventHandler(this, &MyForm::images_Click);
			// 
			// videos
			// 
			this->videos->BackColor = System::Drawing::Color::Navy;
			this->videos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->videos->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->videos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->videos->Location = System::Drawing::Point(-4, 199);
			this->videos->Name = L"videos";
			this->videos->Size = System::Drawing::Size(79, 94);
			this->videos->TabIndex = 6;
			this->videos->Text = L"Videos";
			this->videos->UseVisualStyleBackColor = false;
			this->videos->Click += gcnew System::EventHandler(this, &MyForm::videos_Click);
			// 
			// text
			// 
			this->text->BackColor = System::Drawing::Color::Navy;
			this->text->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->text->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->text->Location = System::Drawing::Point(-4, 299);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(79, 94);
			this->text->TabIndex = 7;
			this->text->Text = L"Text";
			this->text->UseVisualStyleBackColor = false;
			this->text->Click += gcnew System::EventHandler(this, &MyForm::text_Click);
			// 
			// lmarena
			// 
			this->lmarena->BackColor = System::Drawing::Color::Navy;
			this->lmarena->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lmarena->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lmarena->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lmarena->Location = System::Drawing::Point(81, 299);
			this->lmarena->Name = L"lmarena";
			this->lmarena->Size = System::Drawing::Size(79, 94);
			this->lmarena->TabIndex = 8;
			this->lmarena->Text = L"LMArena";
			this->lmarena->UseVisualStyleBackColor = false;
			this->lmarena->Visible = false;
			this->lmarena->Click += gcnew System::EventHandler(this, &MyForm::lmarena_Click);
			// 
			// deepaichat
			// 
			this->deepaichat->BackColor = System::Drawing::Color::Navy;
			this->deepaichat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deepaichat->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepaichat->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deepaichat->Location = System::Drawing::Point(81, 199);
			this->deepaichat->Name = L"deepaichat";
			this->deepaichat->Size = System::Drawing::Size(79, 94);
			this->deepaichat->TabIndex = 9;
			this->deepaichat->Text = L"DeepAI";
			this->deepaichat->UseVisualStyleBackColor = false;
			this->deepaichat->Visible = false;
			this->deepaichat->Click += gcnew System::EventHandler(this, &MyForm::deepaichat_Click);
			// 
			// deepaiimages
			// 
			this->deepaiimages->BackColor = System::Drawing::Color::Navy;
			this->deepaiimages->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deepaiimages->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepaiimages->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deepaiimages->Location = System::Drawing::Point(81, 99);
			this->deepaiimages->Name = L"deepaiimages";
			this->deepaiimages->Size = System::Drawing::Size(79, 94);
			this->deepaiimages->TabIndex = 10;
			this->deepaiimages->Text = L"DeepAI";
			this->deepaiimages->UseVisualStyleBackColor = false;
			this->deepaiimages->Visible = false;
			this->deepaiimages->Click += gcnew System::EventHandler(this, &MyForm::deepaiimages_Click);
			// 
			// deepaivideos
			// 
			this->deepaivideos->BackColor = System::Drawing::Color::Navy;
			this->deepaivideos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deepaivideos->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepaivideos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deepaivideos->Location = System::Drawing::Point(81, -1);
			this->deepaivideos->Name = L"deepaivideos";
			this->deepaivideos->Size = System::Drawing::Size(79, 94);
			this->deepaivideos->TabIndex = 11;
			this->deepaivideos->Text = L"DeepAI";
			this->deepaivideos->UseVisualStyleBackColor = false;
			this->deepaivideos->Visible = false;
			this->deepaivideos->Click += gcnew System::EventHandler(this, &MyForm::deepaivideos_Click);
			// 
			// deepl
			// 
			this->deepl->BackColor = System::Drawing::Color::Navy;
			this->deepl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deepl->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepl->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deepl->Location = System::Drawing::Point(81, -1);
			this->deepl->Name = L"deepl";
			this->deepl->Size = System::Drawing::Size(79, 94);
			this->deepl->TabIndex = 13;
			this->deepl->Text = L"DeepL";
			this->deepl->UseVisualStyleBackColor = false;
			this->deepl->Visible = false;
			this->deepl->Click += gcnew System::EventHandler(this, &MyForm::deepl_Click);
			// 
			// cleanup
			// 
			this->cleanup->BackColor = System::Drawing::Color::Navy;
			this->cleanup->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cleanup->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cleanup->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->cleanup->Location = System::Drawing::Point(81, 299);
			this->cleanup->Name = L"cleanup";
			this->cleanup->Size = System::Drawing::Size(79, 94);
			this->cleanup->TabIndex = 16;
			this->cleanup->Text = L"CleanupPic";
			this->cleanup->UseVisualStyleBackColor = false;
			this->cleanup->Visible = false;
			this->cleanup->Click += gcnew System::EventHandler(this, &MyForm::cleanup_Click);
			// 
			// you
			// 
			this->you->BackColor = System::Drawing::Color::Navy;
			this->you->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->you->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->you->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->you->Location = System::Drawing::Point(81, 99);
			this->you->Name = L"you";
			this->you->Size = System::Drawing::Size(79, 94);
			this->you->TabIndex = 17;
			this->you->Text = L"You";
			this->you->UseVisualStyleBackColor = false;
			this->you->Visible = false;
			this->you->Click += gcnew System::EventHandler(this, &MyForm::you_Click);
			// 
			// craiyon
			// 
			this->craiyon->BackColor = System::Drawing::Color::Navy;
			this->craiyon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->craiyon->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->craiyon->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->craiyon->Location = System::Drawing::Point(81, 199);
			this->craiyon->Name = L"craiyon";
			this->craiyon->Size = System::Drawing::Size(79, 94);
			this->craiyon->TabIndex = 18;
			this->craiyon->Text = L"Craiyon";
			this->craiyon->UseVisualStyleBackColor = false;
			this->craiyon->Visible = false;
			this->craiyon->Click += gcnew System::EventHandler(this, &MyForm::craiyon_Click);
			// 
			// browser
			// 
			this->browser->AllowExternalDrop = true;
			this->browser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->browser->CreationProperties = nullptr;
			this->browser->DefaultBackgroundColor = System::Drawing::Color::White;
			this->browser->Location = System::Drawing::Point(166, -1);
			this->browser->Name = L"browser";
			this->browser->Size = System::Drawing::Size(1173, 797);
			this->browser->TabIndex = 15;
			this->browser->ZoomFactor = 1;
			// 
			// dezgo
			// 
			this->dezgo->BackColor = System::Drawing::Color::Navy;
			this->dezgo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dezgo->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dezgo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->dezgo->Location = System::Drawing::Point(81, 399);
			this->dezgo->Name = L"dezgo";
			this->dezgo->Size = System::Drawing::Size(79, 94);
			this->dezgo->TabIndex = 20;
			this->dezgo->Text = L"Dezgo";
			this->dezgo->UseVisualStyleBackColor = false;
			this->dezgo->Visible = false;
			this->dezgo->Click += gcnew System::EventHandler(this, &MyForm::dezgo_Click);
			// 
			// perplexity
			// 
			this->perplexity->BackColor = System::Drawing::Color::Navy;
			this->perplexity->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->perplexity->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perplexity->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->perplexity->Location = System::Drawing::Point(81, -1);
			this->perplexity->Name = L"perplexity";
			this->perplexity->Size = System::Drawing::Size(79, 94);
			this->perplexity->TabIndex = 21;
			this->perplexity->Text = L"Perplexity";
			this->perplexity->UseVisualStyleBackColor = false;
			this->perplexity->Visible = false;
			this->perplexity->Click += gcnew System::EventHandler(this, &MyForm::perplexity_Click);
			// 
			// flow
			// 
			this->flow->BackColor = System::Drawing::Color::Navy;
			this->flow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->flow->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flow->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flow->Location = System::Drawing::Point(81, -1);
			this->flow->Name = L"flow";
			this->flow->Size = System::Drawing::Size(79, 94);
			this->flow->TabIndex = 23;
			this->flow->Text = L"FlowVoice";
			this->flow->UseVisualStyleBackColor = false;
			this->flow->Visible = false;
			this->flow->Click += gcnew System::EventHandler(this, &MyForm::flow_Click);
			// 
			// kingnish
			// 
			this->kingnish->BackColor = System::Drawing::Color::Navy;
			this->kingnish->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->kingnish->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kingnish->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->kingnish->Location = System::Drawing::Point(81, 99);
			this->kingnish->Name = L"kingnish";
			this->kingnish->Size = System::Drawing::Size(79, 94);
			this->kingnish->TabIndex = 24;
			this->kingnish->Text = L"KingNish";
			this->kingnish->UseVisualStyleBackColor = false;
			this->kingnish->Visible = false;
			this->kingnish->Click += gcnew System::EventHandler(this, &MyForm::kingnish_Click);
			// 
			// img3d
			// 
			this->img3d->BackColor = System::Drawing::Color::Navy;
			this->img3d->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->img3d->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->img3d->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->img3d->Location = System::Drawing::Point(81, -1);
			this->img3d->Name = L"img3d";
			this->img3d->Size = System::Drawing::Size(79, 94);
			this->img3d->TabIndex = 25;
			this->img3d->Text = L"ImageTo3D";
			this->img3d->UseVisualStyleBackColor = false;
			this->img3d->Visible = false;
			this->img3d->Click += gcnew System::EventHandler(this, &MyForm::img3d_Click);
			// 
			// audio
			// 
			this->audio->BackColor = System::Drawing::Color::Navy;
			this->audio->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->audio->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->audio->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->audio->Location = System::Drawing::Point(-4, 399);
			this->audio->Name = L"audio";
			this->audio->Size = System::Drawing::Size(79, 94);
			this->audio->TabIndex = 26;
			this->audio->Text = L"Audio";
			this->audio->UseVisualStyleBackColor = false;
			this->audio->Click += gcnew System::EventHandler(this, &MyForm::audio_Click);
			// 
			// jukebox
			// 
			this->jukebox->BackColor = System::Drawing::Color::Navy;
			this->jukebox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->jukebox->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jukebox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->jukebox->Location = System::Drawing::Point(81, 199);
			this->jukebox->Name = L"jukebox";
			this->jukebox->Size = System::Drawing::Size(79, 94);
			this->jukebox->TabIndex = 27;
			this->jukebox->Text = L"Jukebox";
			this->jukebox->UseVisualStyleBackColor = false;
			this->jukebox->Visible = false;
			this->jukebox->Click += gcnew System::EventHandler(this, &MyForm::jukebox_Click);
			// 
			// bypassgpt
			// 
			this->bypassgpt->BackColor = System::Drawing::Color::Navy;
			this->bypassgpt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bypassgpt->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bypassgpt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bypassgpt->Location = System::Drawing::Point(81, 99);
			this->bypassgpt->Name = L"bypassgpt";
			this->bypassgpt->Size = System::Drawing::Size(79, 94);
			this->bypassgpt->TabIndex = 28;
			this->bypassgpt->Text = L"BypassGPT";
			this->bypassgpt->UseVisualStyleBackColor = false;
			this->bypassgpt->Visible = false;
			this->bypassgpt->Click += gcnew System::EventHandler(this, &MyForm::bypassgpt_Click);
			// 
			// finances
			// 
			this->finances->BackColor = System::Drawing::Color::Navy;
			this->finances->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->finances->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finances->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->finances->Location = System::Drawing::Point(-4, 499);
			this->finances->Name = L"finances";
			this->finances->Size = System::Drawing::Size(79, 94);
			this->finances->TabIndex = 29;
			this->finances->Text = L"Finances";
			this->finances->UseVisualStyleBackColor = false;
			this->finances->Click += gcnew System::EventHandler(this, &MyForm::finances_Click);
			// 
			// crypto
			// 
			this->crypto->BackColor = System::Drawing::Color::Navy;
			this->crypto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->crypto->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crypto->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->crypto->Location = System::Drawing::Point(81, -1);
			this->crypto->Name = L"crypto";
			this->crypto->Size = System::Drawing::Size(79, 94);
			this->crypto->TabIndex = 30;
			this->crypto->Text = L"CryptoPrice";
			this->crypto->UseVisualStyleBackColor = false;
			this->crypto->Visible = false;
			this->crypto->Click += gcnew System::EventHandler(this, &MyForm::crypto_Click);
			// 
			// btc
			// 
			this->btc->BackColor = System::Drawing::Color::Navy;
			this->btc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btc->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btc->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btc->Location = System::Drawing::Point(81, 99);
			this->btc->Name = L"btc";
			this->btc->Size = System::Drawing::Size(79, 94);
			this->btc->TabIndex = 31;
			this->btc->Text = L"BTCprice";
			this->btc->UseVisualStyleBackColor = false;
			this->btc->Visible = false;
			this->btc->Click += gcnew System::EventHandler(this, &MyForm::btc_Click);
			// 
			// speechgen
			// 
			this->speechgen->BackColor = System::Drawing::Color::Navy;
			this->speechgen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->speechgen->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speechgen->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->speechgen->Location = System::Drawing::Point(81, 99);
			this->speechgen->Name = L"speechgen";
			this->speechgen->Size = System::Drawing::Size(79, 94);
			this->speechgen->TabIndex = 32;
			this->speechgen->Text = L"SpeechGen";
			this->speechgen->UseVisualStyleBackColor = false;
			this->speechgen->Visible = false;
			this->speechgen->Click += gcnew System::EventHandler(this, &MyForm::speechgen_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1337, 796);
			this->Controls->Add(this->perplexity);
			this->Controls->Add(this->browser);
			this->Controls->Add(this->deepl);
			this->Controls->Add(this->deepaivideos);
			this->Controls->Add(this->deepaiimages);
			this->Controls->Add(this->deepaichat);
			this->Controls->Add(this->lmarena);
			this->Controls->Add(this->text);
			this->Controls->Add(this->videos);
			this->Controls->Add(this->images);
			this->Controls->Add(this->chats);
			this->Controls->Add(this->cleanup);
			this->Controls->Add(this->you);
			this->Controls->Add(this->craiyon);
			this->Controls->Add(this->dezgo);
			this->Controls->Add(this->flow);
			this->Controls->Add(this->kingnish);
			this->Controls->Add(this->img3d);
			this->Controls->Add(this->jukebox);
			this->Controls->Add(this->bypassgpt);
			this->Controls->Add(this->crypto);
			this->Controls->Add(this->finances);
			this->Controls->Add(this->audio);
			this->Controls->Add(this->btc);
			this->Controls->Add(this->speechgen);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"GPTK";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->browser))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

		int count = 0;
private: System::Void chats_Click(System::Object^ sender, System::EventArgs^ e) {
	count = 1;
	if (count == 1) {
		this->chats->BackColor = Color::DimGray;
		this->images->BackColor = Color::Navy;
		this->videos->BackColor = Color::Navy;
		this->text->BackColor = Color::Navy;
		this->audio->BackColor = Color::Navy;
		this->finances->BackColor = Color::Navy;
		this->deepaichat->Visible = true;
		this->lmarena->Visible = true;
		this->deepaivideos->Visible = false;
		this->deepl->Visible = false;
		this->deepaiimages->Visible = false;
		this->cleanup->Visible = false;
		this->you->Visible = true;
		this->craiyon->Visible = false;
		this->dezgo->Visible = false;
		this->perplexity->Visible = true;
		this->kingnish->Visible = false;
		this->img3d->Visible = false;
		this->jukebox->Visible = false;
		this->bypassgpt->Visible = false;
		this->crypto->Visible = false;
		this->flow->Visible = false;
		this->btc->Visible = false;
		this->speechgen->Visible = false;

	}
}
private: System::Void images_Click(System::Object^ sender, System::EventArgs^ e) {
	count = 2;
	if (count == 2) {
		this->chats->BackColor = Color::Navy;
		this->images->BackColor = Color::DimGray;
		this->videos->BackColor = Color::Navy;
		this->text->BackColor = Color::Navy;
		this->audio->BackColor = Color::Navy;
		this->finances->BackColor = Color::Navy;
		this->deepaiimages->Visible = true;
		this->cleanup->Visible = true;
		this->deepaichat->Visible = false;
		this->lmarena->Visible = false;
		this->deepaivideos->Visible = false;
		this->deepl->Visible = false;
		this->you->Visible = false;
		this->craiyon->Visible = true;
		this->dezgo->Visible = true;
		this->perplexity->Visible = false;
		this->kingnish->Visible = false;
		this->img3d->Visible = true;
		this->jukebox->Visible = false;
		this->bypassgpt->Visible = false;
		this->crypto->Visible = false;
		this->flow->Visible = false;
		this->btc->Visible = false;
		this->speechgen->Visible = false;


	}
	}
private: System::Void videos_Click(System::Object^ sender, System::EventArgs^ e) {
	count = 3;
	if (count == 3) {
		this->chats->BackColor = Color::Navy;
		this->images->BackColor = Color::Navy;
		this->videos->BackColor = Color::DimGray;
		this->text->BackColor = Color::Navy;
		this->audio->BackColor = Color::Navy;
		this->finances->BackColor = Color::Navy;
		this->deepaivideos->Visible = true;
		this->deepaichat->Visible = false;
		this->lmarena->Visible = false;
		this->deepl->Visible = false;
		this->deepaiimages->Visible = false;
		this->cleanup->Visible = false;
		this->you->Visible = false;
		this->craiyon->Visible = false;
		this->dezgo->Visible = false;
		this->perplexity->Visible = false;
		this->kingnish->Visible = true;
		this->img3d->Visible = false;
		this->jukebox->Visible = false;
		this->bypassgpt->Visible = false;
		this->crypto->Visible = false;
		this->flow->Visible = false;
		this->btc->Visible = false;
		this->speechgen->Visible = false;

	}
}
private: System::Void text_Click(System::Object^ sender, System::EventArgs^ e) {
	count = 4;
	if (count == 4) {
		this->chats->BackColor = Color::Navy;
		this->images->BackColor = Color::Navy;
		this->videos->BackColor = Color::Navy;
		this->text->BackColor = Color::DimGray;
		this->audio->BackColor = Color::Navy;
		this->finances->BackColor = Color::Navy;
		this->deepl->Visible = true;
		this->deepaichat->Visible = false;
		this->lmarena->Visible = false;
		this->deepaivideos->Visible = false;
		this->deepaiimages->Visible = false;
		this->cleanup->Visible = false;
		this->you->Visible = false;
		this->craiyon->Visible = false;
		this->dezgo->Visible = false;
		this->perplexity->Visible = false;
		this->kingnish->Visible = false;
		this->img3d->Visible = false;
		this->jukebox->Visible = false;
		this->bypassgpt->Visible = true;
		this->crypto->Visible = false;
		this->flow->Visible = false;
		this->btc->Visible = false;
		this->speechgen->Visible = false;

	}
}

	   private: System::Void audio_Click(System::Object^ sender, System::EventArgs^ e) {
		   this->chats->BackColor = Color::Navy;
		   this->images->BackColor = Color::Navy;
		   this->videos->BackColor = Color::Navy;
		   this->text->BackColor = Color::Navy;
		   this->audio->BackColor = Color::DimGray;
		   this->finances->BackColor = Color::Navy;
		   this->deepl->Visible = false;
		   this->deepaichat->Visible = false;
		   this->lmarena->Visible = false;
		   this->deepaivideos->Visible = false;
		   this->deepaiimages->Visible = false;
		   this->cleanup->Visible = false;
		   this->you->Visible = false;
		   this->craiyon->Visible = false;
		   this->dezgo->Visible = false;
		   this->perplexity->Visible = false;
		   this->flow->Visible = true;
		   this->kingnish->Visible = false;
		   this->img3d->Visible = false;
		   this->jukebox->Visible = true;
		   this->bypassgpt->Visible = false;
		   this->crypto->Visible = false;
		   this->btc->Visible = false;
		   this->speechgen->Visible = true;

	   }
private: System::Void finances_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chats->BackColor = Color::Navy;
	this->images->BackColor = Color::Navy;
	this->videos->BackColor = Color::Navy;
	this->text->BackColor = Color::Navy;
	this->audio->BackColor = Color::Navy;
	this->finances->BackColor = Color::DimGray;
	this->deepl->Visible = false;
	this->deepaichat->Visible = false;
	this->lmarena->Visible = false;
	this->deepaivideos->Visible = false;
	this->deepaiimages->Visible = false;
	this->cleanup->Visible = false;
	this->you->Visible = false;
	this->craiyon->Visible = false;
	this->dezgo->Visible = false;
	this->perplexity->Visible = false;
	this->flow->Visible = false;
	this->kingnish->Visible = false;
	this->img3d->Visible = false;
	this->jukebox->Visible = false;
	this->bypassgpt->Visible = false;
	this->crypto->Visible = true;
	this->btc->Visible = true;
	this->speechgen->Visible = false;
}

private: System::Void deepaiimages_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::DimGray;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://deepai.org/machine-learning-model/text2img");
}
private: System::Void deepaivideos_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::DimGray;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://deepai.org/video");
}
private: System::Void deepl_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::DimGray;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://www.deepl.com/en/translator");
}
private: System::Void deepaichat_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::DimGray;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://deepai.org/chat");
}
private: System::Void lmarena_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::DimGray;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://lmarena.ai");
}
private: System::Void cleanup_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::DimGray;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://cleanup.pictures/");

}
private: System::Void you_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::DimGray;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://you.com/");

}
private: System::Void craiyon_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::DimGray;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://www.craiyon.com/");
}
private: System::Void dezgo_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::DimGray;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://dezgo.com/text2image/sdxl");
}
private: System::Void perplexity_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::DimGray;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://www.perplexity.ai");
}

private: System::Void flow_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::DimGray;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://demo.flowvoice.ai/");
}
private: System::Void kingnish_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::DimGray;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://huggingface.co/spaces/KingNish/Instant-Video");

}
private: System::Void img3d_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::DimGray;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://huggingface.co/spaces/JeffreyXiang/TRELLIS");
}

private: System::Void jukebox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::DimGray;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://huggingface.co/spaces/enzostvs/ai-jukebox");
}
private: System::Void bypassgpt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::DimGray;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://www.bypassgpt.ai/");
}

private: System::Void crypto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::DimGray;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://huggingface.co/spaces/JPBianchi/cryptocurrency_price_prediction");
}
private: System::Void btc_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::DimGray;
	this->speechgen->BackColor = Color::Navy;
	browser->Source = gcnew Uri("https://huggingface.co/spaces/huytrao123/bitcoin-strategy");

}
private: System::Void speechgen_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deepl->BackColor = Color::Navy;
	this->deepaichat->BackColor = Color::Navy;
	this->lmarena->BackColor = Color::Navy;
	this->deepaivideos->BackColor = Color::Navy;
	this->deepaiimages->BackColor = Color::Navy;
	this->cleanup->BackColor = Color::Navy;
	this->you->BackColor = Color::Navy;
	this->craiyon->BackColor = Color::Navy;
	this->dezgo->BackColor = Color::Navy;
	this->perplexity->BackColor = Color::Navy;
	this->flow->BackColor = Color::Navy;
	this->kingnish->BackColor = Color::Navy;
	this->img3d->BackColor = Color::Navy;
	this->jukebox->BackColor = Color::Navy;
	this->bypassgpt->BackColor = Color::Navy;
	this->crypto->BackColor = Color::Navy;
	this->btc->BackColor = Color::Navy;
	this->speechgen->BackColor = Color::DimGray;
	browser->Source = gcnew Uri("https://speechgen.io/");

}
};
}
