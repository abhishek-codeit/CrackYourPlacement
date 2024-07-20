class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0;
        int min_price = prices[0];
        int v = 0;
        for(int i = 1;i<prices.size();i++){
          min_price = min(prices[i],min_price);
        //   v = max(v,prices[i]-min_price);
          if(v<prices[i]-min_price){
            cout<<prices[i]<<" - "<<min_price<<" "<<prices[i]-min_price<<endl;
            v = prices[i]-min_price;
            min_price = prices[i];
            pro+=v;
            v=0;
          }
        }
        return pro;
    }
};