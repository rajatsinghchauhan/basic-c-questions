using namespace std;
std:: array< data type, size> arrayname={......};

//vector is a combination of fast acces and dynamic memory

std::vector <int> vecname={1,3,5,7};

// so to create that dynamic memory allocation, vector dobles iots memory each time it completely gets full
// now during doubling the size it copies all the element to new array , which is time consuming..so it is advisable to give
// vecname.reserve( a valid number)  , a valid number upto which you think memeory is required
// as this will reserve the given memory intitally to vector and won't do the copy


