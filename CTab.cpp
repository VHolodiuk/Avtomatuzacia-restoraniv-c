//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CTab.h"
#include "CSozSt.h"
#include "CAvtor.h"
#include "CVuvodTabl.h"
#include "CDelTabl.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TTab *Tab;
int t;
//---------------------------------------------------------------------------
__fastcall TTab::TTab(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTab::IExitClick(TObject *Sender)
{
Tab->Close();
Avtor->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTab::IDodClick(TObject *Sender)
{
SozSt->Show();
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St1Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab1;");
t=1;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St2Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab2;");
t=2;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St3Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab3;");
t=3;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St4Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab4;");
t=4;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St5Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab5;");
t=5;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TTab::St6Click(TObject *Sender)
{
VuvodTabl->Show();
VuvodTabl->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab6;");
t=6;
VuvodTabl->Timer1->Enabled=true;
Tab->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TTab::IDelClick(TObject *Sender)
{
DelTabl->Show();
}
//---------------------------------------------------------------------------

