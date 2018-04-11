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


void fishparty::incubation_2::forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
}

void fishparty::incubation_2::backward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation::typeid));
}


void fishparty::incubation_2::show_Flyout(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	new_timer.reset_Timer();
	this->Frame->ContextFlyout->ShowAttachedFlyout((FrameworkElement^)sender);
}


