//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

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

using namespace Windows::Media;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void fishparty::MainPage::animate_Bubble()
{
	//Vector3KeyFrameAnimation animation = compositor.CreateVector3KeyFrameAnimation();
	//animation.InsertKeyFrame(1f, new Vector3(200f, 0f, 0f));
	//animation.Duration = TimeSpan.FromSeconds(2);
	//animation.Direction = Windows.UI.Composition.AnimationDirection.Alternate;
	//// Run animation for 10 times
	//animation.IterationCount = 10;
	//visual.StartAnimation("Translation", animation);
}

void fishparty::MainPage::anim_Completed(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	throw ref new Platform::NotImplementedException();
}

void fishparty::MainPage::start_tour_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(water_treatment::typeid));
}


void fishparty::MainPage::explore_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(hatchery_map::typeid));
}


void fishparty::MainPage::Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//bubble_Rise->Begin();
	//bubble_Animation->Begin();

	bubble_Animation_1->Begin();
	bubble_Animation_2->Begin();
	bubble_Animation_3->Begin();
	bubble_Animation_4->Begin();

	//bubble_Animation_Auto->Completed += ref new EventHandler(this, &MainPage::anim_Completed);
}


void fishparty::MainPage::test_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(tour_page_1::typeid));
}


void fishparty::MainPage::test_walkthrough_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(test_walkthrough1::typeid));
}
