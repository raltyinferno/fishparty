//
// water_treatment.xaml.h
// Declaration of the water_treatment class
//

#pragma once

#include "water_treatment.g.h"
#include "directory.h"
#include <string>
using std::string;

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class water_treatment sealed
	{
	public:
		water_treatment();
	private:
		Hometimer timeout;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void iron_display_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void open_content(Platform::String ^ content);
		void heat_display_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		bool content_open = false;
	};
}
