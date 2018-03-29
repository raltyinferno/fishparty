//
// walkthrough_003.xaml.h
// Declaration of the walkthrough_003 class
//

#pragma once

#include "walkthrough_003.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_003 sealed
	{
	public:
		walkthrough_003();
	private:
		void right_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
