#pragma once
#include <string>

struct SomeData
{
	std::string dataString{};
};

namespace std
{
	template<>
	struct hash<SomeData> //template specialization for std::hash class that is spezialized with the type that is our key - SomeData in this case
	{
		int64_t operator()(const SomeData& key) //using () will take SomeData as argument and return int64_t as hash
		{
			return std::hash<std::string>()(key.dataString); //string hashed
		}
	};
}

