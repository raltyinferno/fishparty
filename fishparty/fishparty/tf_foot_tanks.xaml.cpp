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
