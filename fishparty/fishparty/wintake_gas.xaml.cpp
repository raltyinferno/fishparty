//
// wintake_gas.xaml.cpp
// Implementation of the wintake_gas class
//

#include "pch.h"
#include "wintake_gas.xaml.h"

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

wintake_gas::wintake_gas()
{
	InitializeComponent();
}

void fishparty::wintake_gas::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::wintake_gas::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}


void fishparty::wintake_gas::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	timeout.reset_Timer();
}


void fishparty::wintake_gas::oxygen_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
	open_content("ms-appx-web:///guided_tour_content/gas_conditioning/carbon.htm", content_webview, close_button);

}


void fishparty::wintake_gas::nitrogen_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
	open_content("ms-appx-web:///guided_tour_content/gas_conditioning/nitro.htm", content_webview, close_button);

}


void fishparty::wintake_gas::heating_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
	open_content("ms-appx-web:///guided_tour_content/gas_conditioning/heat.htm", content_webview, close_button);
}


void fishparty::wintake_gas::back_to_wintake_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(water_intake::typeid));
}


void fishparty::wintake_gas::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{

	open_content("ms-appx-web:///guided_tour_content/gas_conditioning/gas_conditioning_overview.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::wintake_gas::gas_cond_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (page_view.check_page("gas conditioning")) return;
	page_view.mark_page("gas conditioning");
	open_content("ms-appx-web:///guided_tour_content/gas_conditioning/gas_conditioning_overview.htm", content_webview, close_button);

}
