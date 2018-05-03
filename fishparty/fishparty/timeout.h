#pragma once
ref class timeout
{
public:
	timeout();
	~timeout();
private:
	Windows::UI::Xaml::DispatcherTimer^ timer;
	int timeout_duration = 30;
	void OnTick(Object^ sender, Object^ e);
};

