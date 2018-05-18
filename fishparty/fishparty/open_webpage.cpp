#include "pch.h"
#include "open_webpage.h"

void fishparty::open_content(Platform::String ^ content, Windows::UI::Xaml::Controls::WebView ^ content_webview, Windows::UI::Xaml::Controls::Button ^ close_button)
{
	auto source = ref new Windows::Foundation::Uri(content);
	content_webview->Navigate(source);
	
	if (content_webview->Visibility == Windows::UI::Xaml::Visibility::Collapsed)
	{
		content_webview->Visibility = Windows::UI::Xaml::Visibility::Visible;
		close_button->Visibility = Windows::UI::Xaml::Visibility::Visible;
	}
}
