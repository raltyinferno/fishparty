#include "pch.h"
#include "timeout.h"
#include "MainPage.xaml.h"



timeout::timeout()
{
	TimeSpan ts;
	ts.Duration = timeout_duration;
	timer->Interval = ts;
	timer->Start();
	auto registrationtoken = timer->Tick += ref new EventHandler<Object^>(this, &timeout::OnTick);
}


timeout::~timeout()
{
}

void timeout::OnTick(Object^ sender, Object^ e)
{
	auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);
	rootFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(MainPage::typeid));
}
