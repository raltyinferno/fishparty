//
// walkthrough_F1R1F4L1F1R2.xaml.cpp
// Implementation of the walkthrough_F1R1F4L1F1R2 class
//

#include "pch.h"
#include "walkthrough_F1R1F4L1F1R2.xaml.h"

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

walkthrough_F1R1F4L1F1R2::walkthrough_F1R1F4L1F1R2()
{
	InitializeComponent();
}


void fishparty::walkthrough_F1R1F4L1F1R2::back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(walkthrough_F1R1F4L1F1R1::typeid));
}
