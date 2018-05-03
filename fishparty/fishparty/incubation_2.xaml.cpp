//
// incubation_2.xaml.cpp
// Implementation of the incubation_2 class
//

#include "pch.h"
#include "incubation_2.xaml.h"

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

incubation_2::incubation_2()
{
	InitializeComponent();	
}

void fishparty::incubation_2::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(fivetanks::typeid));
}


void fishparty::incubation_2::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::incubation_2::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	timeout.reset_Timer();
}


void fishparty::incubation_2::incubation_trays_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/incubation/heathstacks.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::incubation_2::page_load_info(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (page_view.check_page("incubation")) return;
	page_view.mark_page("incubation");
	open_content("ms-appx-web:///guided_tour_content/incubation/incubation_info.htm", content_webview, close_button);
}


void fishparty::incubation_2::header_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/incubation/incubation_header_tanks.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::incubation_2::covers_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/incubation/incubation_covers.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::incubation_2::show_overview(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/incubation/incubation_info.htm", content_webview, close_button);
}


//void fishparty::incubation_2::alevin_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
//{
//	player->Source = Windows::Media::Core::MediaSource::CreateFromUri(ref new Uri("ms-appx:///Assets/Egg Room Guided Tour/alevin.mp4"));
//	player->MediaPlayer->Play;
//}
