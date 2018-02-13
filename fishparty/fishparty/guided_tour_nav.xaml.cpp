//
// guided_tour_nav.xaml.cpp
// Implementation of the guided_tour_nav class
//

#include "pch.h"
#include "guided_tour_nav.xaml.h"

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

guided_tour_nav::guided_tour_nav()
{
	InitializeComponent();
}

void fishparty::guided_tour_nav::home_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto nav_Frame = ref new Frame();
	nav_Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
	Window::Current->Content = nav_Frame;
	Window::Current->Activate();
}
