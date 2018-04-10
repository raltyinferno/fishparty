//
// walkthrough_F5.xaml.h
// Declaration of the walkthrough_F5 class
//

#pragma once

#include "walkthrough_F5.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_F5 sealed
	{
	public:
		walkthrough_F5();
	private:
		Hometimer new_timer;
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
