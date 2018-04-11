//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VSERk1.h"
#include "RKzada4a4.h"
#include "kalmykov.h"
#include "Ahmetov.h"
#include "Zabelov.h"
#include "RK.h"
#include "enter.h"
#include "kalkul.h"
#include "RKorobkov1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTESTForm *TESTForm;
//---------------------------------------------------------------------------
__fastcall TTESTForm::TTESTForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TTESTForm::FormCreate(TObject *Sender)
{
	ListBox1 -> Items -> Add("Димитров");
	ListBox1 -> Items -> Add("Калмыков");
	ListBox1 -> Items -> Add("Ахметов");
	ListBox1 -> Items -> Add("Забелов");
	ListBox1 -> Items -> Add("Горбунов");
	ListBox1 -> Items -> Add("Бородин");
	ListBox1 -> Items -> Add("Латышев");
	ListBox1 -> Items -> Add("Коробков");
}
//---------------------------------------------------------------------------
void __fastcall TTESTForm::Button1Click(TObject *Sender)
{
	switch (ListBox1->ItemIndex) {
	case 0:
		DimitrovDDTest -> Show();
		break;
	case 1:
		kalmykov_form -> Show();
		break;
	case 2:
		Ahme -> Show();
		break;
	case 3:
		ZabelovForm -> Show();
		break;
	case 4:
		Gorbunov -> Show();
		break;
	case 5:
		Borodin -> Show();
		break;
	case 6:
		Latishev -> Show();
		break;
	case 7:
		Korobkov -> Show();
		break;
	default:
		ShowMessage(" :) ");
	}
}
//---------------------------------------------------------------------------
