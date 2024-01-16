class RandomizedSet {
public:
    unordered_map<int,int>s;
    vector<int>nums;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)!=s.end()){
            return false;
        }
        nums.push_back(val);
        s[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(s.find(val)==s.end()){
            return false;
        }
        int last = nums.back();
        s[last]=s[val];
        nums[s[val]]=last;
        nums.pop_back();
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */