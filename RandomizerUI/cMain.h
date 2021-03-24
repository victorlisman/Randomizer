#pragma once

#include "wx/wx.h"
#include <vector>
#include <numeric>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

private:

	wxTextCtrl* textBox;
	wxButton* opButton;
	wxButton* clButton;



public:
	void OnOpButtonPress(wxCommandEvent& evt);
	void OnClButtonPress(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

