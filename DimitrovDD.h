//---------------------------------------------------------------------------

#ifndef DimitrovDDH
#define DimitrovDDH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TDimitrovDima : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGridDimitrov;
	TButton *UpdateTable;
	void __fastcall UpdateTableClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDimitrovDima(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDimitrovDima *DimitrovDima;
extern char *G_5_Dimitrov = "DIMOOOOOOON";
//---------------------------------------------------------------------------
#endif
