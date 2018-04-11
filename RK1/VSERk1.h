//---------------------------------------------------------------------------

#ifndef VSERk1H
#define VSERk1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TTESTForm : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBox1;
	TButton *Button1;
	TEdit *Edit1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTESTForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTESTForm *TESTForm;
//---------------------------------------------------------------------------
#endif
