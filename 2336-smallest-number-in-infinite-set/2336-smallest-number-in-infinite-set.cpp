class SmallestInfiniteSet {
public:
     unordered_set<int>s;
     priority_queue <int, vector<int>, greater<int> > pq;
    SmallestInfiniteSet() {
         int i=1;
        while(i<=1000){
            pq.push(i);
            s.insert(i);
            i++;}
    }
    
    int popSmallest() {
         int small= pq.top();
        pq.pop();
        s.erase(small);
        return small;
    }
    
    void addBack(int num) {
        if(s.find(num)==s.end())
            {
                pq.push(num);
                s.insert(num);
            }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */