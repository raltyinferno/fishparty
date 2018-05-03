//
// App.xaml.h
// Declaration of the App class.
//

#pragma once

#include "App.g.h"
#include "MainPage.xaml.h"
#include "view_manager.h"


namespace fishparty
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	ref class App sealed
	{
	protected:
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;
		
		//bool get_view_status(int page_index);
		//void set_view_status(int page_index, int view_status);
	internal:
		App();

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		void OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e);
		view_manager page_view;
		
	};
}
