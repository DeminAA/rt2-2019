//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Shanin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShaninForm *ShaninForm;
//---------------------------------------------------------------------------
__fastcall TShaninForm::TShaninForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShaninForm::FormKeyUp(TObject *Sender, WORD &Key, TShiftState Shift)

{
		 Button1->Caption = Key;
		 switch (Key) {
		 case 87:
			if(Button1->Top>0) Button1->Top--;
			break;
		 case 83:
			if(Button1->Top<ShaninForm->Height) Button1->Top++;
			break;
		 case 65:
			if(Button1->Left>0) Button1->Left--;
			break;
		 case 68:
			if(Button1->Left<ShaninForm->Width) Button1->Left++;
			break;
         default:
			 ;
		 }
}
//---------------------------------------------------------------------------
