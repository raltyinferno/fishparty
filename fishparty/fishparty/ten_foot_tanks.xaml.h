//
// ten_foot_tanks.xaml.h
// Declaration of the ten_foot_tanks class
//

#pragma once

#include "ten_foot_tanks.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class ten_foot_tanks sealed
	{
	public:
		ten_foot_tanks();
	private:
		Hometimer new_timer;

		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void overhead_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void side_drain_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void gas_column_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
