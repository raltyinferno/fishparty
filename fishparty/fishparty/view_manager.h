#pragma once
class view_manager
{
public:
	view_manager();
	~view_manager();
	bool check_page(Platform::String ^);
	void mark_page(Platform::String ^);
	void reset_page_views();
private:
	Windows::Storage::ApplicationDataContainer ^ localSettings;

};

