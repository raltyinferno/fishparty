//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void inputButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

		void start_tour_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void explore_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
