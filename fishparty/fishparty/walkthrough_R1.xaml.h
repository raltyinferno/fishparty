﻿//
// walkthrough_R1.xaml.h
// Declaration of the walkthrough_R1 class
//

#pragma once

#include "walkthrough_R1.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class walkthrough_R1 sealed
	{
	public:
		walkthrough_R1();
	private:
		void left_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}