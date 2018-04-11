//
// test_walkthrough2.xaml.h
// Declaration of the test_walkthrough2 class
//

#pragma once

#include "test_walkthrough2.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class test_walkthrough2 sealed
	{
	public:
		test_walkthrough2();
	private:
		void left_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
