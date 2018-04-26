//
// tf_foot_filters.xaml.cpp
// Implementation of the tf_foot_filters class
//

#include "pch.h"
#include "tf_foot_filters.xaml.h"

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

tf_foot_filters::tf_foot_filters()
{
	InitializeComponent();
}


void fishparty::tf_foot_filters::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(effluent::typeid));
}


void fishparty::tf_foot_filters::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(tf_foot_tanks::typeid));

}


void fishparty::tf_foot_filters::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::gas_cond_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::bio_filt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::ozone_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::lho_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::head_tank_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}


void fishparty::tf_foot_filters::drum_filt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/30ft_filters/30ft_filters_overview.htm", content_webview, close_button);
	new_timer.reset_Timer();
}
