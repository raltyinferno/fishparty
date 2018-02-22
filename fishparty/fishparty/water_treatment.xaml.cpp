//
// water_treatment.xaml.cpp
// Implementation of the water_treatment class
//

#include "pch.h"
#include "water_treatment.xaml.h"

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

water_treatment::water_treatment()
{
	InitializeComponent();
}





void fishparty::water_treatment::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::water_treatment::iron_display_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	
	auto bitmapImage = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	auto uri = ref new Windows::Foundation::Uri("ms-appx:///Assets/test_header.png");
	bitmapImage->UriSource = uri;
	display_header_image->Source = bitmapImage;
}


void fishparty::water_treatment::heat_display_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto bitmapImage = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	auto uri = ref new Windows::Foundation::Uri("ms-appx:///Assets/test_header2.png");
	bitmapImage->UriSource = uri;
	display_header_image->Source = bitmapImage;
}
