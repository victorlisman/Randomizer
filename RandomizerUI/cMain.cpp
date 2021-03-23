#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)


wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Randomizer", wxPoint(30, 30), wxSize(600, 300), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX)
{
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(565, 70));

	opButton = new wxButton(this, 1, "Randomize", wxPoint(10, 100), wxSize(132, 60));
	clButton = new wxButton(this, 1, "Clear", wxPoint(400, 100), wxSize(132, 60));
}

cMain::~cMain()
{}