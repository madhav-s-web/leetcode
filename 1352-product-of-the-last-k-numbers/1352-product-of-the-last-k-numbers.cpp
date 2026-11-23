class ProductOfNumbers {
public:
 vector<int>ans;
    ProductOfNumbers() {
       

        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
       int n = ans.size();
        int lol = 1;
        for(int i=n-1 ; i >= n-k ; i--){
            lol=lol*ans[i];
        }
        return lol;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */