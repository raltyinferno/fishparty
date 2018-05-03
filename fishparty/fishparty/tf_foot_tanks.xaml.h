//
// tf_foot_tanks.xaml.h
// Declaration of the thirty_foot_tanks class
//

#pragma once

#include "tf_foot_tanks.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class tf_foot_tanks sealed
	{
	public:
		tf_foot_tanks();
	private:
		Hometimer timeout;
		view_manager page_view;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void food_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void g_close_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void t_close_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void circ_tank_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void radial_flow_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void feeder_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void counter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_tanks_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
