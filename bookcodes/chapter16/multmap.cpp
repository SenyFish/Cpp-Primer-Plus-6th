// multmap.cpp -- 使用multimap
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main()
{
    using namespace std;
    MapCode codes;

    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(718, "Staten Island"));
    codes.insert(Pair(415, "San Rafael"));
    codes.insert(Pair(510, "Berkeley"));

    cout << "区号415的城市数量："
         << codes.count(415) << endl;
    cout << "区号718的城市数量："
         << codes.count(718) << endl;
    cout << "区号510的城市数量："
         << codes.count(510) << endl;
    cout << "区号        城市\n";
    MapCode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it)
        cout << "    " << (*it).first << "     "
            << (*it).second    << endl;

    pair<MapCode::iterator, MapCode::iterator> 
		auto range
         = codes.equal_range(718);
    cout << "区号718的城市：\n";
    for (it = range.first; it != range.second; ++it)
        cout <<  (*it).second    << endl;
    // cin.get();
    return 0; 
}
