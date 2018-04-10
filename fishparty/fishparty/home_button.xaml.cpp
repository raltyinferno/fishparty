//
// home_button.xaml.cpp
// Implementation of the home_button class
//

#include "pch.h"
#include "home_button.xaml.h"

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

// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

home_button::home_button()
{
	InitializeComponent();
}


void fishparty::home_button::navigate_home(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);

	rootFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}
