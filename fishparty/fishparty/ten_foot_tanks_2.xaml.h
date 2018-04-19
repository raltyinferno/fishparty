//
// ten_foot_tanks_2.xaml.h
// Declaration of the ten_foot_tanks_2 class
//

#pragma once

#include "ten_foot_tanks_2.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class ten_foot_tanks_2 sealed
	{
	public:
		ten_foot_tanks_2();
	private:
		Hometimer new_timer;

		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void return_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
