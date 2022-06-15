class RandomizedSet {
public:
    map<int,int>m;
    vector<int>nums;
    
    RandomizedSet() {
        
    }
    
   bool insert(int val) {
        int ok = 0;
        if(m.count(val)){
            ok = 1;
        }
        if(ok == 0){
            nums.push_back(val);
            m[val] = nums.size() - 1;
        }
        if(ok == 0) return true;
        return false;
    }
    
    bool remove(int val) {
        if (!m.count(val)) {
            return false;
        }
        int index = m[val];
        m[nums.back()] = index;
        swap(nums[index], nums.back());
        nums.pop_back();
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */