#include "pch.h"
#include "Hometimer.h"


// start_Timer
// Begins a timer that counts in intervals of 60 seconds. Can count
// to a number of minutes defined by num_minutes in Hometimer.h
// Upon completion without interruption, timer returns the program
// to the main page.
fishparty::Hometimer::Hometimer()
{
	timer = ref new Windows::UI::Xaml::DispatcherTimer();
	TimeSpan ts;
	ts.Duration = 60 * 10000000;
	timer->Interval = ts;
	timer->Start();
	auto registrationtoken = timer->Tick += ref new EventHandler<Object^>(this, &Hometimer::OnTick);
}

fishparty::Hometimer::~Hometimer()
{
	timer->Stop();
	delete timer;
}

void fishparty::Hometimer::OnTick(Object ^ sender, Object ^ e)
{
	++min_counter;
	if (min_counter >= timeout_minutes)
	{
		min_counter = 0;
		timer->Stop();
		auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);
		rootFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
	}
}

// reset_Timer
// Cancels the current timer and begins a new one. Used when the user
// clicks any button on screen that doesn't change pages.
void fishparty::Hometimer::reset_Timer()
{
	min_counter = 0;
}