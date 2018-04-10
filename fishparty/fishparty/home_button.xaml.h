//
// home_button.xaml.h
// Declaration of the home_button class
//

#pragma once

#include "home_button.g.h"

namespace fishparty
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class home_button sealed
	{
	public:
		home_button();
	private:
		void navigate_home(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
