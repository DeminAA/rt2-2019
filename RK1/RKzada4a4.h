//---------------------------------------------------------------------------

#ifndef RKzada4a4H
#define RKzada4a4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Math.h>
//---------------------------------------------------------------------------
class TDimitrovDDTest : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TDimitrovDDTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDimitrovDDTest *DimitrovDDTest;
//---------------------------------------------------------------------------
#endif
