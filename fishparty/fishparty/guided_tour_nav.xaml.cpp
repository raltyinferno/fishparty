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
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(water_intake::typeid));
}

void fishparty::guided_tour_nav::gas_cond_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(wintake_gas::typeid));
}

void fishparty::guided_tour_nav::eggs_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}

void fishparty::guided_tour_nav::eggs2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(incubation_2::typeid));
}


void fishparty::guided_tour_nav::five_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(fivetanks::typeid));
}

void fishparty::guided_tour_nav::siz_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(ten_foot_tanks::typeid));
}

void fishparty::guided_tour_nav::tf_tanks_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(tf_foot_tanks::typeid));
}
void fishparty::guided_tour_nav::tf_filts_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(tf_foot_filters::typeid));
}

void fishparty::guided_tour_nav::effluent_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(effluent::typeid));
}

void fishparty::guided_tour_nav::air_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(air::typeid));
}

void fishparty::guided_tour_nav::delivery_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(fish_delivery::typeid));
}



void fishparty::nav_to_page(Windows::UI::Xaml::Interop::TypeName sourcePageType)
{
	auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);

	rootFrame->Navigate(sourcePageType);
}





void fishparty::guided_tour_nav::tf_tanks_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1::typeid));
}


void fishparty::guided_tour_nav::walkthrough_start_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_start1::typeid));
}


void fishparty::guided_tour_nav::tf_filts_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1F4::typeid));
}


void fishparty::guided_tour_nav::tf_tower_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1F4L1F1R1::typeid));
}


void fishparty::guided_tour_nav::water_intake_walktrhough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F4L1F1::typeid));
}


void fishparty::guided_tour_nav::egg_intake_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F4L1F3::typeid));
}


void fishparty::guided_tour_nav::incubation_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F4L1F5::typeid));
}


void fishparty::guided_tour_nav::effluent_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F4R1F1L1F1R1F2::typeid));
}


void fishparty::guided_tour_nav::stocking_bay_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F5R1::typeid));
}


void fishparty::guided_tour_nav::ten_ft_walkthrough_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_L1F1::typeid));
}


void fishparty::guided_tour_nav::oxy_gen_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	nav_to_page(Windows::UI::Xaml::Interop::TypeName(walkthrough_F3R1F3R1F2L1F2::typeid));
}
