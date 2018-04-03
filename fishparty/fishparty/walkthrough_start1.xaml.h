//
// walkthrough_start1.xaml.h
// Declaration of the walkthrough_start1 class
//

#pragma once

#include "walkthrough_start1.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_start1 sealed
	{
	public:
		walkthrough_start1();
	private:
		void right_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void left_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
