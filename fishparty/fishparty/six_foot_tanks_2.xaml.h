//
// six_foot_tanks_2.xaml.h
// Declaration of the six_foot_tanks_2 class
//

#pragma once

#include "six_foot_tanks_2.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class six_foot_tanks_2 sealed
	{
	public:
		six_foot_tanks_2();
	private:
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void return_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
