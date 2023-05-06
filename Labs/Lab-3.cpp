#include <iostream>
#include <list>

using namespace std;

class youtube
{
private:
    string Name;
    string OwnerName;
    list<string> PublishedVideoTitles;
    unsigned int subscribercount;

public:
    void GetInfo()
    {
        cout << "Name: "<< Name <<endl;
        cout << "Owner Name: " << OwnerName <<endl;

        cout << "Published video Title: " << endl;

        for(string& i: PublishedVideoTitles)
            cout << "\t" << i << endl;

        cout << "Subscriber Count: " << subscribercount <<endl;
    }

    youtube(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
        subscribercount=0;
    }

    void subscribe()
    {
        subscribercount+=1;
    }

    void unsubscribe()
    {
        if (subscribercount != 0)
            subscribercount-=1;
    }

    string getname()
    {
        return Name;
    }

    void setname(string name)
    {
        Name = name;
    }

    void publishvideo(string video)
    {
        PublishedVideoTitles.push_back(video);

    }
};

int main()
{
    youtube ytChannel("great", "Isaac");
    ytChannel.publishvideo("it is well");
    ytChannel.unsubscribe();
    ytChannel.GetInfo();


    for(int i = 0; i<20; i++)
        ytChannel.subscribe();
    ytChannel.GetInfo();
}