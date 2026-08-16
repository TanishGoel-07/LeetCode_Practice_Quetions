class LRUCache {
public:
    int size;
    map<int,int>mp;
    list<int>ls;
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        ls.remove(key);
        ls.push_front(key); //least recently used
        return mp[key];
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            ls.remove(key);
        }
        else if(mp.size()==size){
            int oldkey=ls.back();
            ls.pop_back();
            mp.erase(oldkey);
        }
        mp[key]=value;
        ls.push_front(key);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */