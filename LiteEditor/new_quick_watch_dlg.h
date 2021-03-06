//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : new_quick_watch_dlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __new_quick_watch_dlg__
#define __new_quick_watch_dlg__


#include <wx/persist/window.h>

class wxPopupWindow;

class CLPersistentDebuggerTip : public wxPersistentWindow<wxPopupWindow>
{
public:
    CLPersistentDebuggerTip(wxPopupWindow* puw)
        : wxPersistentWindow<wxPopupWindow>(puw) {}

    virtual void Save() const;

    virtual bool Restore();

    virtual wxString GetKind() const { return "CLDebuggerTip"; }
};



/**
@file
Subclass of NewQuickWatch, which is generated by wxFormBuilder.
*/

#include "newquickwatch.h"
#include <wx/timer.h>
#include "debugger.h"
#include <map>
#include "debuggerobserver.h"
#include "newquickwatch.h"

class wxTimer;

/** Implementing NewQuickWatch */
class DisplayVariableDlg : public clDebuggerTipWindowBase
{
public:
    IDebugger*                       m_debugger;
    std::map<wxString, wxTreeItemId> m_gdbId2Item;
    std::map<wxString, wxTreeItemId> m_gdbId2ItemLeaf;
    wxString                         m_mainVariableObject;
    wxString                         m_variableName;
    wxString                         m_expression;
    wxTimer*                         m_timer2;
    wxTimer*                         m_mousePosTimer;
    wxString                         m_fullpath;
    wxTreeItemId                     m_hoveredItem;
    wxString                         m_itemOldValue;
    bool                             m_keepCurrentPosition;
    bool                             m_dragging;
    bool                             m_editDlgIsUp;
    
protected:
    virtual void OnEnterBmp(wxMouseEvent& event);
    virtual void OnLeaveBmp(wxMouseEvent& event);
    virtual void OnStatuMotion(wxMouseEvent& event);
    virtual void OnStatusLeftUp(wxMouseEvent& event);
    virtual void OnTipLeftDown(wxMouseEvent& event);
    bool     IsFakeItem(const wxTreeItemId &item);
    wxString DoGetItemPath(const wxTreeItemId &item);
    void     DoAdjustPosition();
    void     DoEditItem(const wxTreeItemId &item);
    void     DoUpdateSize(bool performClean);
    
protected:
    // Handlers for NewQuickWatch events.
    void OnExpandItem  ( wxTreeEvent& event );
    void OnItemExpanded( wxTreeEvent& event );
    void OnBtnCancel(wxCommandEvent &e);
    void OnCloseEvent(wxCloseEvent &e);
    void DoAddChildren(wxTreeItemId &item, const VariableObjChildren &children);
    void OnKeyDown(wxKeyEvent &event);
    void DoCleanUp();
    void OnLeftDown(wxMouseEvent &e);
    void OnTimer2(wxTimerEvent &e);
    void OnCheckMousePosTimer(wxTimerEvent &e);
    void OnItemMenu(wxTreeEvent& event);
    void OnMenuSelection(wxCommandEvent &e);
    void OnMouseMove( wxMouseEvent& event );
    void OnCaptureLost(wxMouseCaptureLostEvent &e);
public:
    /** Constructor */
    DisplayVariableDlg( wxWindow* parent);
    virtual ~DisplayVariableDlg();

    void AddItems   ( const wxString &varname, const VariableObjChildren &children);
    void UpdateValue( const wxString &varname, const wxString &value);
    void BuildTree  (const VariableObjChildren &children, IDebugger *debugger);
    void HideDialog ();
    void ShowDialog (bool center);
    void OnCreateVariableObjError(const DebuggerEventData &event);

};

#endif // __new_quick_watch_dlg__
