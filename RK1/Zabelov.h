//---------------------------------------------------------------------------

#ifndef ZabelovH
#define ZabelovH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TZabelovForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *ButtonLeto;
	TButton *ButtonOsen;
	TButton *ButtonZima;
	TButton *ButtonVesna;
	TLabel *Label1;
	void __fastcall ButtonLetoClick(TObject *Sender);
	void __fastcall ButtonOsenClick(TObject *Sender);
	void __fastcall ButtonZimaClick(TObject *Sender);
	void __fastcall ButtonVesnaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TZabelovForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TZabelovForm *ZabelovForm;
//---------------------------------------------------------------------------
#endif
