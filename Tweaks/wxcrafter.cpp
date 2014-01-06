//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC94E6InitBitmapResources();

static bool bBitmapLoaded = false;


TweaksSettingsDlgBase::TweaksSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC94E6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_checkBoxEnableTweaks = new wxCheckBox(this, wxID_ANY, _("Enable Tweaks"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxEnableTweaks->SetValue(false);
    
    boxSizer2->Add(m_checkBoxEnableTweaks, 0, wxALL, 5);
    
    m_notebook12 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(400,-1), wxBK_DEFAULT);
    
    boxSizer2->Add(m_notebook12, 1, wxALL|wxEXPAND, 5);
    
    m_tabEditorTabsColours = new wxPanel(m_notebook12, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook12->AddPage(m_tabEditorTabsColours, _("Editor Tabs"), true);
    
    wxBoxSizer* boxSizer126 = new wxBoxSizer(wxVERTICAL);
    m_tabEditorTabsColours->SetSizer(boxSizer126);
    
    m_banner136 = new wxBannerWindow(m_tabEditorTabsColours, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), wxBORDER_THEME);
    m_banner136->SetBitmap(wxNullBitmap);
    m_banner136->SetText(_("Configure Editor Tab Colours"), _("Customize your editor tab colours globally or per project"));
    m_banner136->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK), wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    m_banner136->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
    
    boxSizer126->Add(m_banner136, 0, wxALL|wxEXPAND, 5);
    
    wxArrayString m_pgMgrTabColoursArr;
    wxUnusedVar(m_pgMgrTabColoursArr);
    wxArrayInt m_pgMgrTabColoursIntArr;
    wxUnusedVar(m_pgMgrTabColoursIntArr);
    m_pgMgrTabColours = new wxPropertyGridManager(m_tabEditorTabsColours, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED);
    
    boxSizer126->Add(m_pgMgrTabColours, 1, wxALL|wxEXPAND, 5);
    
    m_pgProp114 = m_pgMgrTabColours->Append(  new wxPropertyCategory( _("Global Tab Colours") ) );
    m_pgProp114->SetHelpString(wxT(""));
    
    m_pgPropGlobalTabBG = m_pgMgrTabColours->AppendIn( m_pgProp114,  new wxSystemColourProperty( _("File background colour")) );
    m_pgPropGlobalTabBG->SetValueToUnspecified();
    m_pgPropGlobalTabBG->SetHelpString(wxT(""));
    
    m_pgPropGlobalTabFG = m_pgMgrTabColours->AppendIn( m_pgProp114,  new wxSystemColourProperty( _("File text colour")) );
    m_pgPropGlobalTabFG->SetValueToUnspecified();
    m_pgPropGlobalTabFG->SetHelpString(wxT(""));
    
    m_pgPropProjectsColours = m_pgMgrTabColours->Append(  new wxPropertyCategory( _("Tab Colours Per Project") ) );
    m_pgPropProjectsColours->SetHelpString(wxT(""));
    
    wxBoxSizer* boxSizer122 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer126->Add(boxSizer122, 0, wxEXPAND, 5);
    
    m_button124 = new wxButton(m_tabEditorTabsColours, wxID_CLEAR, _("&Reset colours"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button124->SetToolTip(_("Reset colours"));
    
    boxSizer122->Add(m_button124, 0, wxALL|wxEXPAND, 5);
    
    m_tabProjectIcons = new wxPanel(m_notebook12, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook12->AddPage(m_tabProjectIcons, _("Images"), false);
    
    wxBoxSizer* boxSizer241 = new wxBoxSizer(wxVERTICAL);
    m_tabProjectIcons->SetSizer(boxSizer241);
    
    m_banner138 = new wxBannerWindow(m_tabProjectIcons, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), wxBORDER_THEME);
    m_banner138->SetBitmap(wxNullBitmap);
    m_banner138->SetText(_("Configure Project Images"), _("Set a different image for a every project in the workspace"));
    m_banner138->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK), wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    m_banner138->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
    
    boxSizer241->Add(m_banner138, 0, wxALL|wxEXPAND, 5);
    
    wxArrayString m_pgMgrArr;
    wxUnusedVar(m_pgMgrArr);
    wxArrayInt m_pgMgrIntArr;
    wxUnusedVar(m_pgMgrIntArr);
    m_pgMgr = new wxPropertyGridManager(m_tabProjectIcons, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED);
    
    boxSizer241->Add(m_pgMgr, 1, wxALL|wxEXPAND, 5);
    
    m_pgPropProjects = m_pgMgr->Append(  new wxPropertyCategory( _("Projects") ) );
    m_pgPropProjects->SetHelpString(wxT(""));
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer2->Add(boxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button8 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer4->Add(m_button8, 0, wxALL|wxALIGN_RIGHT, 5);
    
    m_button88 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button88->SetDefault();
    m_button88->SetFocus();
    
    boxSizer4->Add(m_button88, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_checkBoxEnableTweaks->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(TweaksSettingsDlgBase::OnEnableTweaks), NULL, this);
    m_checkBoxEnableTweaks->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TweaksSettingsDlgBase::OnEnableTweaksCheckboxUI), NULL, this);
    m_notebook12->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TweaksSettingsDlgBase::OnEnableTweaksUI), NULL, this);
    m_pgMgrTabColours->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TweaksSettingsDlgBase::OnColourChanged), NULL, this);
    m_button124->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TweaksSettingsDlgBase::OnResetColours), NULL, this);
    m_pgMgr->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TweaksSettingsDlgBase::OnImageSelected), NULL, this);
    
}

TweaksSettingsDlgBase::~TweaksSettingsDlgBase()
{
    m_checkBoxEnableTweaks->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(TweaksSettingsDlgBase::OnEnableTweaks), NULL, this);
    m_checkBoxEnableTweaks->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TweaksSettingsDlgBase::OnEnableTweaksCheckboxUI), NULL, this);
    m_notebook12->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TweaksSettingsDlgBase::OnEnableTweaksUI), NULL, this);
    m_pgMgrTabColours->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TweaksSettingsDlgBase::OnColourChanged), NULL, this);
    m_button124->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TweaksSettingsDlgBase::OnResetColours), NULL, this);
    m_pgMgr->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TweaksSettingsDlgBase::OnImageSelected), NULL, this);
    
}
