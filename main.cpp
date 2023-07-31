#include "Map.cpp"
vector<int> Dijkstras(map<int,list<pair<int,int>>>adj,int src)
{
    set<pair<int,int>>s;
    vector<int>v(57,INT_MAX);
    vector<int>parent(57,-1);
    v[src] = 0;
    s.insert(make_pair(src,0));
    while(!s.empty())
    {
        pair<int,int>p = *(s.begin());
        int dist = p.second;
        int node = p.first;
        s.erase(s.begin());
        for(auto i : adj[node])
        {
            if(dist + i.second < v[i.first])
            {
                auto record = s.find(make_pair(i.first,v[i.first]));
                if(record!=s.end())
                {
                    s.erase(record);
                }
                v[i.first] = dist + i.second;
                s.insert(make_pair(i.first,v[i.first]));
                parent[i.first] = node;
            }
        }
    }
    return parent;
}
int main()
{
    vector<string>v = stationcode();
    map<int,list<pair<int,int>>>adj = preparelist();
    cout<<"Press 1 to show all station else press any other key"<<endl;
    int s;
    cin>>s;
    if(s == 1)
    {
        cout<<"ST.code"<<"  "<<"ST.Name"<<endl;
        for(int i = 0;i<v.size();i++)
        {
            cout<<i<<" "<<v[i]<<endl;
        }
    }
    int src , dest;
    string str1;
    bool flag = true;
    getline(cin,str1);
    str1 = "";
    cout<<"Please Enter your current station name"<<endl;
    while(flag)
    {
        getline(cin,str1);
        transform(str1.begin(),str1.end(),str1.begin(),:: toupper);
        auto x = find(v.begin(),v.end(),str1);
        if(x == v.end())
        {
            cout<<"No,Station is found with this name\nPlease checkout the spelling and retry"<<endl;
        }
        else
        {
            src = x-v.begin();
            flag = false;
        }
    }
    flag = true;
    string str2;
    cout<<"Please Enter your destination station name"<<endl;
    while(flag)
    {
        getline(cin,str2);
        transform(str2.begin(),str2.end(),str2.begin(),:: toupper);
        auto x = find(v.begin(),v.end(),str2);
        if(x == v.end())
        {
            cout<<"No,Station is found with this name\nPlease checkout the spelling and retry"<<endl;
        }
        else
        {
            dest = x-v.begin();
            flag = false;
        }
    }
    vector<int>parent = Dijkstras(adj,src);
    vector<int>result;
    while(dest!=src)
    {
        result.push_back(dest);
        dest = parent[dest];
    }
    result.push_back(src);
    reverse(result.begin(),result.end());
    cout<<"********************HAPPY JOURNEY********************"<<endl<<endl;
    for(int i = 0;i<result.size()-1;i++)
    {
        cout<<v[result[i]]<<" -> ";
    }
    cout<<v[result[result.size()-1]];
    cout<<endl;
    cout<<"********************STATION ARRIVED********************"<<endl<<endl;
    return 0;
}