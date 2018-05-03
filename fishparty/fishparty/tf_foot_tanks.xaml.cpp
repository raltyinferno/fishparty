//
// tf_foot_tanks.xaml.cpp
// Implementation of the thirty_foot_tanks class
//

#include "pch.h"
#include "tf_foot_tanks.xaml.h"

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

tf_foot_tanks::tf_foot_tanks()
{
	InitializeComponent();
}

void fishparty::tf_foot_tanks::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(tf_foot_filters::typeid));
}

void fishparty::tf_foot_tanks::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(ten_foot_tanks::typeid));
}

void fishparty::tf_foot_tanks::food_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::g_close_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::t_close_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/30ft_tanks_overview.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::pump_sump_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/pump_sump.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::circ_tank_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/circ_tank.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::radial_flow_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/radial_flow.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::feeder_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/feeder.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::counter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/counter.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::tf_foot_tanks::tf_tanks_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (page_view.check_page("30ft")) return;
	page_view.mark_page("30ft");
	open_content("ms-appx-web:///guided_tour_content/30ft_tanks/30ft_tanks_overview.htm", content_webview, close_button);
}
