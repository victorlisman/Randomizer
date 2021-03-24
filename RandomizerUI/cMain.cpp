#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(0, OnOpButtonPress)
	EVT_BUTTON(1, OnClButtonPress)

wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Randomizer", wxPoint(30, 30), wxSize(600, 300), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX)
{
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(565, 70));

	opButton = new wxButton(this, 0, "Randomize", wxPoint(10, 100), wxSize(132, 60));
	clButton = new wxButton(this, 1, "Clear", wxPoint(400, 100), wxSize(132, 60));
}

cMain::~cMain()
{}

void cMain::OnClButtonPress(wxCommandEvent& evt)
{
	textBox->Clear();
	evt.Skip();
}

void cMain::OnOpButtonPress(wxCommandEvent& evt)
{
	wxString sSet;
	sSet = textBox->GetLineText(0);

	for (auto i : sSet)
		if (*i == ' ')


	evt.Skip();

}