//
// guided_tour_nav.xaml.cpp
// Implementation of the guided_tour_nav class
//

#include "pch.h"
#include "guided_tour_nav.xaml.h"

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

// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

guided_tour_nav::guided_tour_nav()
{
	InitializeComponent();
}

void fishparty::guided_tour_nav::home_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}


void fishparty::guided_tour_nav::water_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(water_treatment::typeid));
}


void fishparty::guided_tour_nav::eggs_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::guided_tour_nav::five_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(fivetanks::typeid));
}

void fishparty::nav_to_page(Windows::UI::Xaml::Interop::TypeName sourcePageType)
{
	auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);
	rootFrame->Navigate(sourcePageType);
}


