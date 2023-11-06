class SeatManager {
public:
    set<int> st;
    SeatManager(int n) {
        for(int i=0;i<n;i++) st.insert(i+1);
    }
    
    int reserve() {
        int val = *st.begin();
        st.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */