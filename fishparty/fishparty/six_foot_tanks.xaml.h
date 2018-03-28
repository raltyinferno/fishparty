//
// six_foot_tanks.xaml.h
// Declaration of the six_foot_tanks class
//

#pragma once

#include "six_foot_tanks.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class six_foot_tanks sealed
	{
	public:
		six_foot_tanks();
	private:
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void overhead_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
