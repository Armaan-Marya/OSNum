#include <iostream>
#include <vector>
using namespace std;

class nopriority {
    //Since No Priority is there RT = WT
public:
    int n;
    vector<int> p;
    vector<int> wt;
    vector<int> ta;


    nopriority() {
        cout << "Enter Number of Processes: " << endl;
        cin >> n;

        p.resize(n);
        wt.resize(n, 0);
        ta.resize(n, 0);

        cout << "Enter Process Burst Times:" << endl;
        for (int i = 0; i < n; i++)
            cin >> p[i];

    }


    void FCFSdisplay() {

        for (int i = 1; i < n; i++) {
            wt[i] = p[i - 1] + wt[i - 1];
        }

        for (int i = 0; i < n; i++) {
            ta[i] = p[i] + wt[i];
        }

        cout << "Waiting Time     = ";
        for (int i = 0; i < n; i++) {
            cout << wt[i] << " ";
        }
        cout << endl;
        cout << "Turn Around Time = ";
        for (int i = 0; i < n; i++) {
            cout << ta[i] << " ";
        }
    }
};

int main() {
    nopriority obj;
    obj.FCFSdisplay();

    return 0;
}