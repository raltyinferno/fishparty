//
// walkthrough_F1R1F3.xaml.cpp
// Implementation of the walkthrough_F1R1F3 class
//

#include "pch.h"
#include "walkthrough_F1R1F3.xaml.h"

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

walkthrough_F1R1F3::walkthrough_F1R1F3()
{
	InitializeComponent();
}


void fishparty::walkthrough_F1R1F3::forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1F4::typeid));
}


void fishparty::walkthrough_F1R1F3::back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1F2::typeid));
}
