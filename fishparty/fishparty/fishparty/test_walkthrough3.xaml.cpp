//
// test_walkthrough3.xaml.cpp
// Implementation of the test_walkthrough3 class
//

#include "pch.h"
#include "test_walkthrough3.xaml.h"

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

test_walkthrough3::test_walkthrough3()
{
	InitializeComponent();
}


void fishparty::test_walkthrough3::back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(test_walkthrough2::typeid));
}
