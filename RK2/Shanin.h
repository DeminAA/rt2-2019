//---------------------------------------------------------------------------

#ifndef ShaninH
#define ShaninH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TShaninForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TShaninForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShaninForm *ShaninForm;
//---------------------------------------------------------------------------
#endif