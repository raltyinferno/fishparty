﻿//
// walkthrough_F5L1.xaml.h
// Declaration of the walkthrough_F5L1 class
//

#pragma once

#include "walkthrough_F5L1.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_F5L1 sealed
	{
	public:
		walkthrough_F5L1();
	private:
		void back_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}