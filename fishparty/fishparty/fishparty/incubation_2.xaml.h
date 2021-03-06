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
		Hometimer new_timer;

		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void backward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void show_Flyout(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
	};
}
