//
// test_walkthrough1.xaml.cpp
// Implementation of the test_walkthrough1 class
//

#include "pch.h"
#include "test_walkthrough1.xaml.h"

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

test_walkthrough1::test_walkthrough1()
{
	InitializeComponent();
}


void fishparty::test_walkthrough1::forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(test_walkthrough2::typeid));
}

fishparty::walkthrough_page::walkthrough_page(walkthrough_page^  forward, walkthrough_page^  back,
											  walkthrough_page^  left, walkthrough_page^  right): 
											  forward(forward), back(back), left(left), right(right)
{
	
}

void fishparty::walkthrough_page::open()
{

}

void fishparty::walkthrough_page::walk_forward()
{
	forward->open();
}

void fishparty::walkthrough_page::walk_back()
{
	back->open();
}

void fishparty::walkthrough_page::walk_left()
{
	left->open();
}

void fishparty::walkthrough_page::walk_right()
{
	right->open();
}
