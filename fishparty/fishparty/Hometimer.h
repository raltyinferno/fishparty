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
	
	class Hometimer
	{
	public:
		void start_Timer();
		void reset_Timer();
		void cancel_Timer();
		Hometimer();
		~Hometimer();
		//virtual ~Hometimer();
	private:
		ThreadPoolTimer ^ home_timer;
		bool canceled;
		bool reset;
		int num_minutes = 5; // Pull from file for adjustable timeout
		int minutes_passed;

	};
}
