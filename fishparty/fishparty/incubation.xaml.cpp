//
// incubation.xaml.cpp
// Implementation of the incubation class
//

#include "pch.h"
#include "incubation.xaml.h"

using namespace fishparty;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

incubation::incubation()
{
	InitializeComponent();
}





void fishparty::incubation::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation_2::typeid));
}


void fishparty::incubation::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(water_intake::typeid));
}


void fishparty::incubation::disinfecting_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///egg_receiving_disinfecting.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::incubation::egg_receiving_info_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///egg_receiving_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::incubation::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	new_timer.reset_Timer();
}


void fishparty::incubation::page_load_info(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///egg_receiving_overview.htm", content_webview, close_button);
}
