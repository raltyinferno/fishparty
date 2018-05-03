//
// ten_foot_tanks.xaml.cpp
// Implementation of the ten_foot_tanks class
//

#include "pch.h"
#include "ten_foot_tanks.xaml.h"

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

ten_foot_tanks::ten_foot_tanks()
{
	InitializeComponent();
}


void fishparty::ten_foot_tanks::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(tf_foot_tanks::typeid));
}


void fishparty::ten_foot_tanks::overhead_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(ten_foot_tanks_2::typeid));
}


void fishparty::ten_foot_tanks::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(fivetanks::typeid));
}


void fishparty::ten_foot_tanks::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/10ft_tanks/10ft_tanks_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::ten_foot_tanks::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	new_timer.reset_Timer();
}


void fishparty::ten_foot_tanks::side_drain_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/10ft_tanks/side_drain.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::ten_foot_tanks::gas_column_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/10ft_tanks/gas_conditioning_column.htm", content_webview, close_button);
	new_timer.reset_Timer();
}



void fishparty::ten_foot_tanks::ten_loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (page_view.check_page("10ft")) return;
	page_view.mark_page("10ft");
	open_content("ms-appx-web:///guided_tour_content/10ft_tanks/10ft_tanks_overview.htm", content_webview, close_button);
}




void fishparty::ten_foot_tanks::tank_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/10ft_tanks/10ft_tanks_tank.htm", content_webview, close_button);
	new_timer.reset_Timer();
}
