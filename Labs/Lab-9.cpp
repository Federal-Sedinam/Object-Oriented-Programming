#include <iostream>
#include <string>

using namespace std;

class YouTubeChannel
{
 public:
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount)
    {
    Name = name;
    SubscribersCount = subscribersCount;
    }

    friend ostream& operator<<(ostream& output, YouTubeChannel yt) {
        output << "Channel Name: " << yt.Name << endl;
        output << "Subsribers: " << yt.SubscribersCount << endl;
        return output;
    }

    friend istream& operator>>(istream& input, YouTubeChannel yt) {
        cout << "Enter channel name: ";
        input >> yt.Name;
        cout << "Enter subscribers: ";
        input >> yt.SubscribersCount;
        return input;
    }
};

int main ()
{
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    cout << yt1;
    cin >> yt1;
    return 0;
}