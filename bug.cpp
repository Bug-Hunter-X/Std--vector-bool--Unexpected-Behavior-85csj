std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0];
bool c = vec[1];
//This code may not work as expected because std::vector<bool> is specialized and doesn't store bools as you might think.
//It's designed for memory optimization and might not directly support element access like other vector types.
//So accessing it like a normal vector could give unexpected results