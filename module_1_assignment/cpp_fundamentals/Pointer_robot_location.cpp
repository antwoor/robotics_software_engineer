#include <iostream>
#include <vector>
#include <memory>
using namespace std;
void prSenData(vector<int>* data)
{
    cout << "processing sensor data: " << endl;
    for (int i : *data)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    vector<int> senData = {1,2,3,4,5,6,8,8};
    vector<int>* senDataPtr = &senData;
    prSenData(senDataPtr);
    vector<int>* new_senDataPtr = new vector<int>({2,2,8});
    prSenData(new_senDataPtr);
    delete new_senDataPtr;
    auto sensor_data = make_unique<vector<int>>(initializer_list<int>{1,3,3,7});
    return 0;
}