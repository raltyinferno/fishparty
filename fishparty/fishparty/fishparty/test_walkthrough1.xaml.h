//
// test_walkthrough1.xaml.h
// Declaration of the test_walkthrough1 class
//

#pragma once

#include "test_walkthrough1.g.h"

namespace fishparty
{
	public ref class walkthrough_page sealed//: public walkthrough
	{
	public:
		walkthrough_page(walkthrough_page^  forward, walkthrough_page^  back,
			walkthrough_page^  left, walkthrough_page^  right
		);
		void open();
		void walk_forward();
		void walk_back();
		void walk_left();
		void walk_right();
	private:
		walkthrough_page^ forward;
		walkthrough_page^  back;
		walkthrough_page^  left;
		walkthrough_page^  right;
		//Uri source;
	};
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class test_walkthrough1 sealed
	{
	public:
		test_walkthrough1();
	private:
		void forward_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};

	
}
