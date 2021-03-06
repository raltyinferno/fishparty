﻿//
// six_foot_tanks_2.xaml.cpp
// Implementation of the six_foot_tanks_2 class
//

#include "pch.h"
#include "six_foot_tanks_2.xaml.h"

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

six_foot_tanks_2::six_foot_tanks_2()
{
	InitializeComponent();
}


void fishparty::six_foot_tanks_2::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(front_tanks::typeid));
}


void fishparty::six_foot_tanks_2::return_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(six_foot_tanks::typeid));
}
