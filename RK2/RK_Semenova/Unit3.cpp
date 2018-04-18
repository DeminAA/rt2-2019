//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
  int i = 0;
  if(RadioGroup1 -> ItemIndex == 0){
	 i++;
  }
  if(RadioGroup2 -> ItemIndex == 2){
	 i++;
  }
  if(RadioGroup3 -> ItemIndex == 1){
	 i++;
  }
  if(RadioGroup4 -> ItemIndex == 2){
	 i++;
  }
  if(RadioGroup5 -> ItemIndex == 0){
	 i++;
  }

  Edit1->Text = i;// = Button1 -> Text;
}
//---------------------------------------------------------------------------
