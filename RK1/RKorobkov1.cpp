//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RKorobkov1.h"
#include "math.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKorobkov *Korobkov;
//---------------------------------------------------------------------------
__fastcall TKorobkov::TKorobkov(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TKorobkov::Button1Click(TObject *Sender)
{
  int BOG = RandomRange(0,1000);
  Edit1-> Text = BOG;
  if (BOG<10) {
			Edit1 -> Font -> Color = clRed;
  } else {
	if (9<BOG&&BOG<100) {
	Edit1 -> Font -> Color = clBlue;
	} else {
		Edit1 -> Font -> Color = clGreen;
	}
	}

  }
//---------------------------------------------------------------------------


