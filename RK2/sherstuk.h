//---------------------------------------------------------------------------

#ifndef sherstukH
#define sherstukH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tshersteform : public TForm
{
__published:	// IDE-managed Components
	TButton *divide;
	TButton *root_but;
	TButton *degree;
	TEdit *digit1;
	TEdit *digit2;
	TLabel *result;
	void __fastcall resultClick(TObject *Sender);
	void __fastcall divideClick(TObject *Sender);
	void __fastcall root_butClick(TObject *Sender);
	void __fastcall degreeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tshersteform(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tshersteform *shersteform;
//---------------------------------------------------------------------------
#endif
