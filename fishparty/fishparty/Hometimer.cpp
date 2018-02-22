#include "pch.h"
#include "Hometimer.h"


// start_Timer
// Begins a timer that counts in intervals of 60 seconds. Can count
// to a number of minutes defined by num_minutes in Hometimer.h
// Upon completion without interruption, timer returns the program
// to the main page.
void fishparty::Hometimer::start_Timer()
{
	TimeSpan period;


	period.Duration = 60 * 10000000; // 10,000,000 ticks per second


	canceled = false;
	reset = false;


	home_timer = ThreadPoolTimer::CreateTimer(ref new TimerElapsedHandler([&](ThreadPoolTimer^ source)
	{
		//
		// TODO: Work
		//
		//this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));

		//
		// Update the UI thread by using the UI core dispatcher.
		//
		Windows::ApplicationModel::Core::CoreApplication::MainView->CoreWindow->Dispatcher->RunAsync(CoreDispatcherPriority::High,
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

		Windows::ApplicationModel::Core::CoreApplication::MainView->CoreWindow->Dispatcher->RunAsync(CoreDispatcherPriority::High,
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
					auto frame = dynamic_cast<Frame^>(Window::Current->Content);
					frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
					//this->Frame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
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
				if (reset == true)
				{
					start_Timer();
				}

			}

		}));
	}));
}

// reset_Timer
// Cancels the current timer and begins a new one. Used when the user
// clicks any button on screen that doesn't change pages.
void fishparty::Hometimer::reset_Timer()
{
	minutes_passed = 0;
	canceled = true;
	reset = true;
	home_timer->Cancel();
}

// cancel_Timer
// Cancels the current timer without starting a new one. Used when the
// user clicks a button to change the page.
void fishparty::Hometimer::cancel_Timer()
{
	canceled = true;
	home_timer->Cancel();
}
