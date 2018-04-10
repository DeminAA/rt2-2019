//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lab4.h"
#include "lab4_2.h"
#include "Sherstuk_form.h"
#include "TupikaUnit.h"
#include "GorbunoV.h"
#include "AhmeTau.h"
#include "SOboLEV.h"
#include "Unit4.h" // ZABELOV
#include "kalmykov.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{

		StringGrid1 -> Cells[0][0] = "Number:";
		StringGrid1 -> Cells[1][0] = "Tape here";

		for (int i = 1; i <= 16; i++) {
			StringGrid1 -> Cells[0][i] = i;
		}
		//StringGrid1 -> Cells[1][0] = "1";
		StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
		//StringGrid1 -> Cells[0][3] = "3";
		StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
		StringGrid1 -> Cells[0][15] = StringGrid1 -> Cells[0][15] + " Shanin";
		StringGrid1 -> Cells[1][15] = "lol";
		StringGrid1 -> Cells[0][16] = "16 Sherstuk";
		StringGrid1 -> Cells[1][16] = G_16_Sherstuk;
		StringGrid1 -> Cells[0][17] = "17 Fomenkov";
		StringGrid1 -> Cells[1][17] = G_17_Fomenkov;


		//НИЧЕГО ВЫШЕ НЕ ТРОГАЙТЕ!!!!
		// Сначала вписываете имя своей формы сюда
		ListBox1->Items->Add("Shersteforma");      //0
		ListBox1->Items->Add("Tupikaforma");       //1
		ListBox1->Items->Add("Form3");             //2
		ListBox1->Items->Add("AhmeForma22");       //3
		ListBox1->Items->Add("sobolevForma");
		ListBox1->Items->Add("ZabelovD");
		ListBox1->Items->Add("kalmykov1");


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//Теперь вписываете запуск своей формы в свитч
	switch (ListBox1->ItemIndex) {
		case 0:
			Shersteforma->Show();
			break;
		case 1:
			Tupikaforma->Show();
			break;
		case 2:
			Form3->Show();
			break;
		case 3:
			AhmeForma228->Show();
			break;
		case 4:
			sobolevForma->Show();
			break;
		case 5:
			ZabelovD->Show();
			break;
		case 6:
			kalmykov1->Show();
			break;
		default:
			ShowMessage("Имя формы не выбрано или данной формы не существует.");
	}

}
//---------------------------------------------------------------------------
