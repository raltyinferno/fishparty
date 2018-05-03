#include "pch.h"
#include "view_manager.h"
using namespace Windows::Storage;

view_manager::view_manager(int initial)
{
	localSettings = Windows::Storage::ApplicationData::Current->LocalSettings;
	//storageFolder = ApplicationData::Current->LocalFolder;
	localSettings->Values->Insert("water intake", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("gas conditioning", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("egg recieving", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("incubation", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("5ft", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("10ft", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("30ft", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("30ft filters", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("effluent", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("oxy gen", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
	localSettings->Values->Insert("stocking", dynamic_cast<PropertyValue^>(PropertyValue::CreateString("unseen")));
}
view_manager::view_manager()
{
	localSettings = Windows::Storage::ApplicationData::Current->LocalSettings;
	//storageFolder = ApplicationData::Current->LocalFolder;

}


view_manager::~view_manager()
{
}

bool view_manager::check_page(Platform::String ^ key)
{
	return safe_cast<String^>(localSettings->Values->Lookup(key)) == "seen";
}
void view_manager::mark_page(Platform::String ^ key)
{
	localSettings->Values->Insert(key, dynamic_cast<PropertyValue^>(PropertyValue::CreateString("seen")));
}
