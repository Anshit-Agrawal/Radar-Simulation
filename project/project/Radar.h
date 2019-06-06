#pragma once


namespace project {
/*static	int width=300,height=300,hand=150;
static		int u;
	static	int cx,cy;
	static	int x,y;
	static	int tx,ty,lim=20;
static	int q,w;*/

//either this (1)


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Radar
	/// </summary>
	public ref class Radar : public System::Windows::Forms::Form
	{	//declare everything here globally
		Bitmap^ bmp;
		Timer^ timer1;
		Timer^ timer2;
		 Pen^ p;
		 Graphics^ g;
		 //or do this (2)
	static	int width=300,height=300,hand=150;
	static		int u;
	static	int cx,cy;
	static	int x,y;
	static	int tx,ty,lim=20;
	static	int q,w;
	//till here
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


			 Random^ rnd;
	public:
		Radar(void)
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
		~Radar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(716, 390);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Radar::pictureBox1_Click);
			this->pictureBox1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Radar::pictureBox1_DragEnter);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Radar::pictureBox1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 54);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(11, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"RANGE:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(11, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"AZIMUTH:";
			// 
			// Radar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 390);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Radar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Radar";
			this->Load += gcnew System::EventHandler(this, &Radar::Radar_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Radar::Radar_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Radar::Radar_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//to create all PPI related graphics
	private: System::Void Radar_Load(System::Object^  sender, System::EventArgs^  e) {
				  bmp=gcnew Bitmap(width+1,height+1);
				rnd=gcnew Random();
				 timer1=gcnew Timer();//for motion of PPI triangle
				 this->BackColor=Color::Black;
				 cx=width/2;
				 cy=height/2;//centre coordinates of PPI
				 u=0;
				  timer2=gcnew Timer();//for random generion of point
				 
				 timer1->Interval=5;
				 timer1->Tick+=gcnew EventHandler(this,&Radar::timer1_Tick);
				 timer1->Start();
				 timer2->Interval=5000;
				 timer2->Tick+=gcnew EventHandler(this,&Radar::timer2_Tick);
				 timer2->Start();

			 }
			 //PPI rotation function
	private: Void timer1_Tick(Object^  sender,EventArgs^  e)
						  {
							  p=gcnew Pen(Color::Green,1.0F);
							  g=Graphics::FromImage(bmp);
							 int tu=(u-lim)%360;
							 //fnxn for green triangle
							  if(u>=0&&u<=180)
							  {
								  x=cx+(int)(hand*Math::Sin(Math::PI*u/180));
								  y=cy-(int)(hand*Math::Cos(Math::PI*u/180));
							  }
							  else
							  {
								   x=cx-(int)(hand* -Math::Sin(Math::PI*u/180));
								   y=cy-(int)(hand*Math::Cos(Math::PI*u/180));
							  }
							  //for making green again black of triangle
							  if(tu>=0&&tu<=180)
							  {
								  tx=cx+(int)(hand*Math::Sin(Math::PI*tu/180));
								  ty=cy-(int)(hand*Math::Cos(Math::PI*tu/180));
							  }
							  else
							  {
								    tx=cx-(int)(hand* -Math::Sin(Math::PI*tu/180));
								    ty=cy-(int)(hand*Math::Cos(Math::PI*tu/180));
							  }
							  //8 elipses
					          g->DrawEllipse(p,0,0,width,height);
							  g->DrawEllipse(p,120,120,width-240,height-240);
							  g->DrawEllipse(p,100,100,width-200,height-200);
							  g->DrawEllipse(p,80,80,width-160,height-160);
							  g->DrawEllipse(p,60,60,width-120,height-120);
							  g->DrawEllipse(p,40,40,width-80,height-80);
							  g->DrawEllipse(p,20,20,width-40,height-40);
							  //for cross
							  g->DrawLine(p, Point(cx,0), Point(cx,height));
							  g->DrawLine(p, Point(0,cy), Point(width,cy));
							//for making triangle red if point is inside
							  if(q<=42)
							{  g->DrawLine(gcnew Pen(Color::Black,1.0F), Point(cx,cy), Point(tx,ty));
							g->DrawLine(p, Point(cx,cy), Point(x,y));}
							 else
							  {
								g->DrawLine(gcnew Pen(Color::Black,1.0F), Point(cx,cy), Point(tx,ty));
							  g->DrawLine(gcnew Pen(Color::Red,1.0F), Point(cx,cy), Point(x,y));
                                
							  }
							 //voilet dot code at w,q coordinate
							  g->FillRectangle(Brushes::Violet,w,q,5,5);
							   // g->DrawImage(gcnew Bitmap("download.png"),w,q,10,10);  
								//load the picture box 
							  this->pictureBox1->Image=bmp;
							  //for destroying objects
							  delete p;//pen obj
							  delete g;//graphics obj
							  u++;
							  //to set u=0 again after one complete rotation
							  if(u==360)
							  {u=0;}
							 
							  			
						  }

			 private: Void timer2_Tick(Object^  sender,EventArgs^  e)
					  {
						  q=rnd->Next(height);
						   w=rnd->Next(width);
						   Invalidate();
						//change here to show values of azimuth and range respectively

						 //double s=Math::Sqrt((q*q+cy*cy)/(w*w+cx*cx));
						 double z=Math::Atan((150-q)/(w-150));
						 //this->textBox1->Text=z.ToString();
						 this->textBox2->Text=q.ToString();


					  }
			 
	private: System::Void Radar_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				  
			 }//old point black again
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			  g=Graphics::FromImage(bmp);
			  g->FillRectangle(Brushes::Black,w,q,5,5);

		 }
		 //for stop debugging press key down
private: System::Void Radar_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 Application::Exit();
		 }
		 //not in use BUT don't DELETE
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//	this-> bmp->RotateFlip(RotateFlipType::Rotate180FlipY);
		//	 this->pictureBox1->Image=bmp;

		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		  //not in use BUT don't DELETE
private: System::Void pictureBox1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		//	g=Graphics::FromImage(bmp);
		//	e->g->DrawLine(gcnew Pen(Color::Red,1.0F),0,0,200,200);
		 }
};
}
