//
// wintake_gas.xaml.h
// Declaration of the wintake_gas class
//

#pragma once

#include "wintake_gas.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class wintake_gas sealed
	{
	public:
		wintake_gas();
	private:
		Hometimer timeout;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void oxygen_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void nitrogen_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void heating_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void back_to_wintake_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
