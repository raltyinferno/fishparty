//
// test_walkthrough3.xaml.h
// Declaration of the test_walkthrough3 class
//

#pragma once

#include "test_walkthrough3.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class test_walkthrough3 sealed
	{
	public:
		test_walkthrough3();
	private:
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
