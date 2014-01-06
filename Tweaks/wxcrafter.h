//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WXCRAFTER_BASE_CLASSES_H
#define WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/bannerwindow.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#include <wx/button.h>

class TweaksSettingsDlgBase : public wxDialog
{
protected:
    wxCheckBox* m_checkBoxEnableTweaks;
    wxNotebook* m_notebook12;
    wxPanel* m_tabEditorTabsColours;
    wxBannerWindow* m_banner136;
    wxPropertyGridManager* m_pgMgrTabColours;
    wxPGProperty* m_pgProp114;
    wxPGProperty* m_pgPropGlobalTabBG;
    wxPGProperty* m_pgPropGlobalTabFG;
    wxPGProperty* m_pgPropProjectsColours;
    wxButton* m_button124;
    wxPanel* m_tabProjectIcons;
    wxBannerWindow* m_banner138;
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* m_pgPropProjects;
    wxButton* m_button8;
    wxButton* m_button88;

protected:
    virtual void OnEnableTweaks(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEnableTweaksCheckboxUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnEnableTweaksUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnColourChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnResetColours(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImageSelected(wxPropertyGridEvent& event) { event.Skip(); }

public:
    TweaksSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tweaks Setting"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~TweaksSettingsDlgBase();
};

#endif
