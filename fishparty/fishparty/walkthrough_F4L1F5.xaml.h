//
// walkthrough_F4L1F5.xaml.h
// Declaration of the walkthrough_F4L1F5 class
//

#pragma once

#include "walkthrough_F4L1F5.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_F4L1F5 sealed
	{
	public:
		walkthrough_F4L1F5();
	private:
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
