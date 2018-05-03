//
// tf_foot_filters.xaml.h
// Declaration of the tf_foot_filters class
//

#pragma once

#include "tf_foot_filters.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class tf_foot_filters sealed
	{
	public:
		tf_foot_filters();
	private:
		Hometimer new_timer;
		view_manager page_view;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void gas_cond_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void bio_filt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ozone_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void lho_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void head_tank_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void drum_filt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_filters_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
