﻿//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>

	public ref class MainPage sealed
	{
	public:
		//event AnimationEventHandler^ SomethingHappened;
		MainPage();

	private:
		view_manager page_view;
		void anim_Completed(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void start_tour_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void explore_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}


