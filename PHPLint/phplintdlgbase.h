//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: phplintdlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_PHPLINT_PHPLINTDLG_BASE_CLASSES_H
#define CODELITE_PHPLINT_PHPLINTDLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif


class PHPLintBaseDlg : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxCheckBox* m_checkBoxLintOnLoad;
    wxCheckBox* m_checkBoxLintOnSave;
    wxPanel* m_panelPhpcs;
    wxStaticText* m_staticText2;
    wxFilePickerCtrl* m_filePickerPhpcsPhar;
    wxPanel* m_panelPhpmd;
    wxStaticText* m_staticText3;
    wxFilePickerCtrl* m_filePickerPhpmdPhar;
    wxStaticText* m_staticText4;
    wxFilePickerCtrl* m_filePickerPhpmdRules;
    wxStdDialogButtonSizer* m_stdBtnSizer;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:

public:
    wxCheckBox* GetCheckBoxLintOnLoad() { return m_checkBoxLintOnLoad; }
    wxCheckBox* GetCheckBoxLintOnSave() { return m_checkBoxLintOnSave; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxFilePickerCtrl* GetFilePickerPhpcsPhar() { return m_filePickerPhpcsPhar; }
    wxPanel* GetPanelPhpcs() { return m_panelPhpcs; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxFilePickerCtrl* GetFilePickerPhpmdPhar() { return m_filePickerPhpmdPhar; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxFilePickerCtrl* GetFilePickerPhpmdRules() { return m_filePickerPhpmdRules; }
    wxPanel* GetPanelPhpmd() { return m_panelPhpmd; }
    wxNotebook* GetNotebook() { return m_notebook; }
    PHPLintBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("PHP Linter Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~PHPLintBaseDlg();
};

#endif
