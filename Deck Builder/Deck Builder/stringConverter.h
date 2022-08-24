#pragma once
// convert_system_string.cpp
// compile with: /clr
#include <string>
#include <iostream>


void systemToStd(System::String^ s, std::string& os);

void systemToStd(System::String^ s, std::wstring& os);

System::String^ stdToSystem( std::string& os);