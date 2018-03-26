//
// incubation.xaml.cpp
// Implementation of the incubation class
//

#include "pch.h"
#include "incubation.xaml.h"

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

incubation::incubation()
{
	InitializeComponent();
}


void fishparty::incubation::forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	new_timer.cancel_Timer();
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(incubation_2::typeid));
}


void fishparty::incubation::Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	new_timer.start_Timer();
}
