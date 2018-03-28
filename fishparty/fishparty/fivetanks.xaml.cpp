//
// _5tanks.xaml.cpp
// Implementation of the _5tanks class
//

#include "pch.h"
#include "fivetanks.xaml.h"

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

fivetanks::fivetanks()
{
	InitializeComponent();
}


void fishparty::fivetanks::next_page_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(six_foot_tanks::typeid));
}


void fishparty::fivetanks::show_Flyout(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	new_timer.reset_Timer();
	this->Frame->ContextFlyout->ShowAttachedFlyout((FrameworkElement^)sender);
}
