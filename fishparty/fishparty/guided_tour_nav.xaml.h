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
		void gas_cond_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void eggs_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void eggs2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void five_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void air_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void delivery_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void siz_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_filts_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void effluent_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_tanks_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void walkthrough_start_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_filts_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_tower_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void water_intake_walktrhough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void egg_intake_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void incubation_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void effluent_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void stocking_bay_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ten_ft_walkthrough_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void oxy_gen_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
	void nav_to_page(Windows::UI::Xaml::Interop::TypeName sourcePageType);
}
