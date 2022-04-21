class ParkingSystem {

public:
    ParkingSystem(int big, int medium, int small): lobby{big,medium,small}
    {
        
    }
    
    bool addCar(int carType) {
        if(lobby[carType-1]>0){
            lobby[carType-1]-=1;
            return true;
        }
        return false;
    }
    private:
    vector<int>lobby;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */