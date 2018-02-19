//
// tour_page_1.xaml.cpp
// Implementation of the tour_page_1 class
//

#include "pch.h"
#include "tour_page_1.xaml.h"

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
using namespace Windows::UI::Xaml::Media::Animation;
using namespace Windows::UI::Xaml::Navigation;


using namespace Windows::System::Threading;
using namespace Windows::UI::Core;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238
ThreadPoolTimer ^ home_timer;

tour_page_1::tour_page_1()
{
	InitializeComponent();
}

void fishparty::tour_page_1::start_Timer()
{
	TimeSpan period;


	period.Duration = 60 * 10000000; // 10,000,000 ticks per second


	canceled = false;


	home_timer = ThreadPoolTimer::CreateTimer(ref new TimerElapsedHandler([&](ThreadPoolTimer^ source)
	{
		//
		// TODO: Work
		//
		//this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));

		//
		// Update the UI thread by using the UI core dispatcher.
		//
		Dispatcher->RunAsync(CoreDispatcherPriority::High,
			ref new DispatchedHandler([&]()
		{
			//
			// UI components can be accessed within this scope.
			//

		}));

		

	}), period, ref new TimerDestroyedHandler([&](ThreadPoolTimer ^ source)
	{
		//
		// TODO: Handle work cancellation/completion.
		//

		Dispatcher->RunAsync(CoreDispatcherPriority::High,
			ref new DispatchedHandler([&]()
		{
			//
			// Update the UI thread by using the UI core dispatcher.
			//

			if (!canceled)
			{
				// Timer completed.
				if (minutes_passed >= num_minutes - 1)
				{
					this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
				}
				else
				{
					minutes_passed++;
					start_Timer();
				}
				
			}
			else
			{
				// Timer cancelled.
				start_Timer();
			}

		}));
	}));
}


void fishparty::tour_page_1::home_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	canceled = true;
	home_timer->Cancel();
	this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}


void fishparty::tour_page_1::Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	minutes_passed = 0;
	start_Timer();
}


void fishparty::tour_page_1::timer_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	canceled = true;
	home_timer->Cancel();
}
