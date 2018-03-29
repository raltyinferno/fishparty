﻿//
// air.xaml.h
// Declaration of the air class
//

#pragma once

#include "air.g.h"
#include "directory.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class air sealed
	{
	public:
		air();
	private:
		void nav_to_fish_release(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
