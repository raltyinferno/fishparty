//
// walkthrough_F4R1F1L1F1.xaml.h
// Declaration of the walkthrough_F4R1F1L1F1 class
//

#pragma once

#include "walkthrough_F4R1F1L1F1.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_F4R1F1L1F1 sealed
	{
	public:
		walkthrough_F4R1F1L1F1();
	private:
		Hometimer new_timer;
		void right_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
