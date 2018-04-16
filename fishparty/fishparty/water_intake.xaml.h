//
// water_intake.xaml.h
// Declaration of the BlankPage class
//

#pragma once

#include "water_intake.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class water_intake sealed
	{
	public:
		water_intake();
	private:
		Hometimer timeout;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void first_stage_filter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void second_stage_filter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void page_load_wintake(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void fishparty::water_intake::wintake_info_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
