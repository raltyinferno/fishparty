//
// water_intake.xaml.h
// Declaration of the BlankPage class
//

#pragma once

#include "water_intake.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class water_intake sealed
	{
	public:
		water_intake();
	private:
		Hometimer timeout;
		void next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
