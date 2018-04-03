//
// tf_foot_filters.xaml.h
// Declaration of the tf_foot_filters class
//

#pragma once

#include "tf_foot_filters.g.h"

namespace fishparty
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class tf_foot_filters sealed
	{
	public:
		tf_foot_filters();
	private:
		void tf_filt_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void tf_six_butt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
