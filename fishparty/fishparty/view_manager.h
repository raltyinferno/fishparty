#pragma once
class view_manager
{
public:
	view_manager();
	view_manager(int);
	~view_manager();
	bool check_page(Platform::String ^);
	void mark_page(Platform::String ^);
private:
	//Platform::Collections::Vector<int>^ viewed;
	Windows::Storage::ApplicationDataContainer ^ localSettings;
	//Windows::Storage::StorageFolder ^ storageFolder;
	//Platform::String ^ viewed_data;
};

