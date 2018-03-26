//
// guided_tour_nav.xaml.h
// Declaration of the guided_tour_nav class
//

#pragma once

#include "guided_tour_nav.g.h"
#include "directory.h"

namespace fishparty
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class guided_tour_nav sealed
	{
	public:
		guided_tour_nav();

	private:
		void home_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void water_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void eggs_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void five_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
	void nav_to_page(Windows::UI::Xaml::Interop::TypeName sourcePageType);
}
