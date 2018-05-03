//
// fish_delivery.xaml.h
// Declaration of the fish_delivery class
//

#pragma once

#include "fish_delivery.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// A page detailing the fish delivery process
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class fish_delivery sealed
	{
	public:
		fish_delivery();
	private:
		Hometimer timeout;
		view_manager page_view;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void vehicles_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void stocking_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void oxygenation_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void remote_stocking_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
