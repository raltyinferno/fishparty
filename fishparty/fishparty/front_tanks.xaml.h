//
// front_tanks.xaml.h
// Declaration of the front_tanks class
//

#pragma once

#include "front_tanks.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class front_tanks sealed
	{
	public:
		front_tanks();
	private:
		Hometimer new_timer;

		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_Flyout(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
	};
}
