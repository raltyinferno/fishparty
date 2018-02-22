//
// test_walkthrough1.xaml.h
// Declaration of the test_walkthrough1 class
//

#pragma once

#include "test_walkthrough1.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class test_walkthrough1 sealed
	{
	public:
		test_walkthrough1();
	private:
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
