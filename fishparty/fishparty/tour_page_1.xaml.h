//
// tour_page_1.xaml.h
// Declaration of the tour_page_1 class
//

#pragma once

#include "tour_page_1.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class tour_page_1 sealed
	{
	public:
		tour_page_1();
	private:
		void home_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
