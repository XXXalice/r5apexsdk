#pragma once

/////////////////////////////////////////////////////////////////////////////
// Initialization
void InstallENHooks();
void RemoveENHooks();
void ToggleDevCommands();
void ToggleNetHooks();

/////////////////////////////////////////////////////////////////////////////
// Globals
inline bool g_bDebugLoading = false;

/////////////////////////////////////////////////////////////////////////////