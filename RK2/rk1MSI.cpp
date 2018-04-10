//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "rk1MSI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSidorov *Sidorov;
//---------------------------------------------------------------------------
__fastcall TSidorov::TSidorov(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSidorov::Button1Click(TObject *Sender)
{
	Edit1 -> Text = random(1000);

	int Kol = Edit1 -> Text.Length();

	if ( Kol < 2 )

	 {
		Edit1 -> Font -> Color = clRed;
	}
		else
	{
		if ( Kol < 3)
		{
			Edit1 -> Font -> Color = clBlue;
		}
			else
			{
			Edit1 -> Font -> Color = clGreen;
		}
	}
}
//---------------------------------------------------------------------------
