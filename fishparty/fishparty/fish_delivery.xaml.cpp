//
// fish_delivery.xaml.cpp
// Implementation of the fish_delivery class
//

#include "pch.h"
#include "fish_delivery.xaml.h"

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

fish_delivery::fish_delivery()
{
	InitializeComponent();
}

void fishparty::fish_delivery::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	timeout.reset_Timer();
}

void fishparty::fish_delivery::vehicles_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/fish_delivery/delivery_vehicles.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::fish_delivery::process_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/fish_delivery/delivery_process.htm", content_webview, close_button);
	timeout.reset_Timer();
}

void fishparty::fish_delivery::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(air::typeid));
}

void fishparty::fish_delivery::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}

void fishparty::fish_delivery::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/fish_delivery/delivery_overview.htm", content_webview, close_button);
	timeout.reset_Timer();
}

void fishparty::fish_delivery::stocking_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (page_view.check_page("stocking")) return;
	page_view.mark_page("stocking");
	open_content("ms-appx-web:///guided_tour_content/fish_delivery/delivery_overview.htm", content_webview, close_button);
}
