class UndergroundSystem {
public:
    map<int,pair<string,int>>check;
    map<pair<string,string>,vector<int>>m;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        check[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,int>p=check[id];
        m[{p.first,stationName}].push_back(t-p.second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double av=0;
        if(m.find({startStation,endStation})==m.end()){
            return av;
        }
        vector<int>v=m[{startStation,endStation}];
        for(auto x:v){
            av+=x;
        }
        return av/v.size();
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */