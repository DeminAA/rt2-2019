//---------------------------------------------------------------------------

#ifndef SOboLEVH
#define SOboLEVH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TsobolevForma : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TsobolevForma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TsobolevForma *sobolevForma;
extern char *G_12_Sobolev="ISD";
//---------------------------------------------------------------------------
#endif
