﻿//
// air.xaml.cpp
// Implementation of the air class
//

#include "pch.h"
#include "air.xaml.h"

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

air::air()
{
	InitializeComponent();
}


void fishparty::air::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(fish_delivery::typeid));
}


void fishparty::air::close_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	content_webview->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	close_button->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}


void fishparty::air::prev_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(effluent::typeid));
}
