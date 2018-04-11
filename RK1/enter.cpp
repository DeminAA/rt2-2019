//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "enter.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBorodin *Borodin;
//---------------------------------------------------------------------------
__fastcall TBorodin::TBorodin(TComponent* Owner)
	: TForm(Owner)
{

}

//---------------------------------------------------------------------------

void __fastcall TBorodin::Button1Click(TObject *Sender)
{
	 if (login->Text == "login" && pass->Text == "pass") {
	correct->Caption = "correct login and password";
	}
	else {
		correct->Caption = "incorrect login and password";
	}
}
//---------------------------------------------------------------------------

