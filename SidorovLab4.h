//---------------------------------------------------------------------------

#ifndef SidorovLab4H
#define SidorovLab4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSIDFORM : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSIDFORM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSIDFORM *SIDFORM;
extern char *G_11_Sidorov="Maksik";
//---------------------------------------------------------------------------
#endif
