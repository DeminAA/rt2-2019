//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tjustform : public TForm
{
__published:	// IDE-managed Components
	TImage *Square;
	void __fastcall SquareMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);


private:	// User declarations
public:		// User declarations
	__fastcall Tjustform(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tjustform *justform;
//---------------------------------------------------------------------------
#endif
