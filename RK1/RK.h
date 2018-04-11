//---------------------------------------------------------------------------

#ifndef RKH
#define RKH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TGorbunov : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TImage *Image1;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TGorbunov(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGorbunov *Gorbunov;
//---------------------------------------------------------------------------
#endif
