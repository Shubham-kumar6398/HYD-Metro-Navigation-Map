#include<bits/stdc++.h>
using namespace std;
map<int,list<pair<int,int>>> preparelist()
{
    map<int,list<pair<int,int>>>adj;
    for(int i = 0;i<26;i++)
    {
        adj[i].push_back({i+1,1});
        adj[i+1].push_back({i,1});
    }
    for(int i = 27;i<39;i++)
    {
        adj[i].push_back({i+1,1});
        adj[i+1].push_back({i,1});
    }
    adj[39].push_back({10,1});
    adj[10].push_back({39,1});
    adj[40].push_back({10,1});
    adj[10].push_back({40,1});
    for(int i = 40;i<48;i++)
    {
        adj[i].push_back({i+1,1});
        adj[i+1].push_back({i,1});
    }
    adj[49].push_back({35,1});
    adj[35].push_back({49,1});
    adj[35].push_back({50,1});
    adj[50].push_back({35,1});
    for(int i = 50;i<56;i++)
    {
        adj[i].push_back({i+1,1});
        adj[i+1].push_back({i,1});
    }
    adj[56].push_back({19,1});
    adj[19].push_back({56,1});
    return adj;
}
vector<string>stationcode()
{
    vector<string>v;
    v.push_back("MIYAPUR");
    v.push_back("JNTU COLLEGE");
    v.push_back("KPHB COLONY");
    v.push_back("KUKATPALLY");
    v.push_back("DR. B.R AMBEDKAR BALANAGAR");
    v.push_back("MOOSAPET");
    v.push_back("BHARAT NAGAR");
    v.push_back("ERRAGADDA");
    v.push_back("ESI HOSPITAL");
    v.push_back("S.R NAGAR");
    v.push_back("AMEERPET");
    v.push_back("PUNJAGUTTA");
    v.push_back("IRRUM MANZIL");
    v.push_back("KHAIRATABAD");
    v.push_back("LAKDI KA PUL");
    v.push_back("ASSEMBLY");
    v.push_back("NAMPALLY");
    v.push_back("GANDHI BHAVAN");
    v.push_back("OSMANIA MEDICAL COLLEGE");
    v.push_back("MG BUS STATION");
    v.push_back("MALAKPET");
    v.push_back("NEW MARKET");
    v.push_back("MUSARAMBAGH");
    v.push_back("DILSUKHNAGAR");
    v.push_back("CHAITANYAPURI");
    v.push_back("VICTORIA MEMORIAL");
    v.push_back("LB NAGAR");
    v.push_back("NAGOLE");
    v.push_back("UPPAL");
    v.push_back("STADIUM");
    v.push_back("NGRI");
    v.push_back("HABSIGUDA");
    v.push_back("TARNAKA");
    v.push_back("METTUGUDA");
    v.push_back("SECUNDERABAD EAST");
    v.push_back("PARADE GROUND");
    v.push_back("PARADISE");
    v.push_back("RASOOLPURA");
    v.push_back("PRAKASH NAGAR");
    v.push_back("BEGUMPET");
    v.push_back("MADHURA NAGAR");
    v.push_back("YUSUFGUDA");
    v.push_back("ROAD NO 5 JUBILEE HILLS");
    v.push_back("JUBILEE HILLS CHECK POST");
    v.push_back("PEDDAMMA GUDI");
    v.push_back("MADHAPUR");
    v.push_back("DURGAM CHERUVU");
    v.push_back("HITEC CITY");
    v.push_back("RAIDURG");
    v.push_back("JBS PARADE GROUND");
    v.push_back("SECUNDERABAD WEST");
    v.push_back("GANDHI HOSPITAL");
    v.push_back("MUSHEERABAD");
    v.push_back("RTC X ROADS");
    v.push_back("CHIKKADPALLY");
    v.push_back("NARAYANAGUDA");
    v.push_back("SULTAN BAZAAR");
    return v;
}
unordered_map<int,char>colour()
{
    unordered_map<int,char>mp;
    for(int i = 0;i<27;i++)
    {
        mp[i]='r';
    }
    for(int i = 27;i<49;i++)
    {
        mp[i]='b';
    }
    for(int i = 49;i<57;i++)
    {
        mp[i]='g';
    }
    mp[10] = 'n';
    mp[19] = 'n';
    mp[35] = 'n';
    return mp;
}
