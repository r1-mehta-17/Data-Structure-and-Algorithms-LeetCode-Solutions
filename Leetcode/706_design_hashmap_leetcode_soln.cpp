/*
Design a HashMap without using any built-in hash table libraries.
Implement the MyHashMap class:
 - MyHashMap() initializes the object with an empty map.
 - void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists in the map, update the corresponding value.
 - int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
 - void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.
*/

class MyHashMap {
    vector<int> v;
public:
    MyHashMap(): v(1000001,-1) {
        
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

/*
SAMPLE INPUT : 
["MyHashMap","put","put","get","get","put","get","remove","get"]
[[],[1,1],[2,2],[1],[3],[2,1],[2],[2],[2]]
SAMPLE OUTPUT : 
[null,null,null,1,-1,null,1,null,-1]
*/
