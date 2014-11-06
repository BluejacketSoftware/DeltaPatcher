#ifndef __DeltaPatcherAboutDialog__
#define __DeltaPatcherAboutDialog__

/**
@file
Subclass of AboutDialog, which is generated by wxFormBuilder.
*/

#include "dpgui.h"

/** Implementing AboutDialog */
class DeltaPatcherAboutDialog : public AboutDialog
{
protected:
	// Handlers for AboutDialog events.
	void OnClickClose( wxCloseEvent& event );
	void OnClickOk( wxCommandEvent& event );
	
public:
	/** Constructor */
	DeltaPatcherAboutDialog( wxWindow* parent );
};

#endif // __DeltaPatcherAboutDialog__