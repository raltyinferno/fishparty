//
// _5tanks.xaml.h
// Declaration of the _5tanks class
//

#pragma once

#include "fivetanks.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class fivetanks sealed
	{
	public:
		fivetanks();
	private:
		Hometimer new_timer;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_Flyout(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void header_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void five_tanks_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
