#pragma once
// convert_system_string.cpp
// compile with: /clr
#include <string>
#include <iostream>


void MarshalString(System::String^ s, std::string& os);

void MarshalString(System::String^ s, std::wstring& os);