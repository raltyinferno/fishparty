//
// hatchery_map.xaml.h
// Declaration of the hatchery_map class
//

#pragma once

#include "hatchery_map.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class hatchery_map sealed
	{
	public:
		hatchery_map();
	private:
		void start_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
