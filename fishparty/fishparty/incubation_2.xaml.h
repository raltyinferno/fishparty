﻿//
// incubation_2.xaml.h
// Declaration of the incubation_2 class
//

#pragma once

#include "incubation_2.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class incubation_2 sealed
	{
	public:
		incubation_2();
	private:
		Hometimer timeout;
		view_manager page_view;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void incubation_trays_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void page_load_info(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void header_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void covers_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		//void alevin_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
