//---------------------------------------------------------------------------

#ifndef TupikaUnitH
#define TupikaUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTupikaForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *Button1;
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TTupikaForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTupikaForm *TupikaForm;
//---------------------------------------------------------------------------
#endif
