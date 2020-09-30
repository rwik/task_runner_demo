#include <bits/stdc++.h>

using namespace std;

class task
{
 public :
     int id;
    string priority ;
};
int main()
{
    //input vector
    srand(time(0));
    fstream file("priority_log.txt");
    vector<string> priority;
    string inp;
    if(file.is_open())
    {
        while(getline(file,inp) )
        {
            priority.push_back(inp);
        }

    }
    vector<task *> taskList;
    task *obj;
    for(auto key : priority)
    {
        obj = new task();
        obj->id = rand();
        obj->priority = key;
        taskList.push_back(obj);
    }

    cout << "Please enter priority  " ;
    cin >> inp;



    for(auto key : taskList)
    {
        if(key->priority == inp)
        {
            cout<<"Processing ";
            cout<<key->id<<endl;

        }
        else
        {
            cout<<"Skipping as priority not matching  ";
            cout<<key->id<<endl;
        }

    }
    file.close();

    return 0;
}
