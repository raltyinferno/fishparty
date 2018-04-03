//
// walkthrough_F1R1F3.xaml.h
// Declaration of the walkthrough_F1R1F3 class
//

#pragma once

#include "walkthrough_F1R1F3.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_F1R1F3 sealed
	{
	public:
		walkthrough_F1R1F3();
	private:
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
