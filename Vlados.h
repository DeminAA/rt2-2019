//---------------------------------------------------------------------------

#ifndef VladosH
#define VladosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TVRT : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *tablo;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TVRT(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVRT *VRT;
extern char *G_09_Vladooos="kryak";
//---------------------------------------------------------------------------
#endif
