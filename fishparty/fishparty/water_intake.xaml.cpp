﻿//
// BlankPage.xaml.cpp
// Implementation of the BlankPage class
//

#include "pch.h"
#include "water_intake.xaml.h"

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

water_intake::water_intake()
{
	InitializeComponent();
}

void fishparty::water_intake::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::water_intake::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}


void fishparty::water_intake::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	timeout.reset_Timer();
}


void fishparty::water_intake::first_stage_filter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/water_intake/first_stage_filter.htm", content_webview, close_button);
	timeout.reset_Timer();
}


void fishparty::water_intake::second_stage_filter_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	open_content("ms-appx-web:///guided_tour_content/water_intake/second_stage_filter.htm", content_webview, close_button);
	timeout.reset_Timer();
}
