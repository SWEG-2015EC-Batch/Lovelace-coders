#include <iostream>

using namespace std;

int main()
{
    double file_size_in_bytes;
    double time_taken_in_seconds;
    cout << "enter file size in bytes";
    cin>> file_size_in_bytes;
    cout<< "time taken to send a file" <<  file_size_in_bytes/960 ;
    return 0;
}
