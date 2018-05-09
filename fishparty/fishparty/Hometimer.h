#pragma once
#include "view_manager.h"
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

namespace fishparty
{
	
	ref class Hometimer sealed
	{
	public:
		void reset_Timer();
		Hometimer();
	private:
		~Hometimer();
		Windows::UI::Xaml::DispatcherTimer^ timer;
		void OnTick(Object^ sender, Object^ e);
		int min_counter = 0;
		int timeout_minutes = 10; //Set this to how long you want the timeout delay to be

	};
}
