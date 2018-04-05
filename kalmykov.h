//---------------------------------------------------------------------------

#ifndef kalmykovH
#define kalmykovH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class Tkalmykov1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *But;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ButClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tkalmykov1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tkalmykov1 *kalmykov1;
extern char *G_06_Kalmykov="mishutka";
//---------------------------------------------------------------------------
#endif
