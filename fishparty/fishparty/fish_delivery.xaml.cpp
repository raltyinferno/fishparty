﻿//
// fish_delivery.xaml.cpp
// Implementation of the fish_delivery class
//

#include "pch.h"
#include "fish_delivery.xaml.h"

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

fish_delivery::fish_delivery()
{
	InitializeComponent();
}


void fishparty::fish_delivery::vehicles_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
}


void fishparty::fish_delivery::locations_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	timeout.reset_Timer();
}


void fishparty::fish_delivery::process_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	timeout.reset_Timer();
}


void fishparty::fish_delivery::home_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}