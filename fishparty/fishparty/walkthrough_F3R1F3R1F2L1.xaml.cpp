//
// walkthrough_F3R1F3R1F2L1.xaml.cpp
// Implementation of the walkthrough_F3R1F3R1F2L1 class
//

#include "pch.h"
#include "walkthrough_F3R1F3R1F2L1.xaml.h"

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

walkthrough_F3R1F3R1F2L1::walkthrough_F3R1F3R1F2L1()
{
	InitializeComponent();
}


void fishparty::walkthrough_F3R1F3R1F2L1::forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(walkthrough_F3R1F3R1F2L1F1::typeid));
}




void fishparty::walkthrough_F3R1F3R1F2L1::right_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(walkthrough_F3R1F3R1F2::typeid));
}
